# Verification Plan

## 1. Strategy Overview

```
Unit Tests (per module)
    │
    v
Integration Tests (connected modules)
    │
    v
System Tests (full design, Verilator + SDL2)
    │
    v
Gate-Level Simulation (post-synthesis)
```

All tests compare hardware outputs against a Python reference model that uses identical fixed-point arithmetic (integer math in Python matching Q4.12 behavior bit-for-bit).

## 2. Unit Tests

### 2.1 Math Unit (`tb_math_unit.sv`)

**Multiply tests:**
- 1.0 x 1.0 = 1.0
- -1.0 x 1.0 = -1.0
- 7.999 x 7.999 = ~63.98 (overflow in Q4.12, but valid in Q8.24 output)
- 0.001 x 0.001 = ~0.000001 (tests precision floor)
- 0 x anything = 0
- Max positive x max positive
- Max negative x max negative

**Multiply-accumulate tests:**
- 3-term dot product: 1.0*2.0 + 3.0*4.0 + 5.0*6.0 = 44.0
- Verify accumulator clears correctly between operations
- Verify no 32-bit accumulator overflow for typical dot products

**Division tests:**
- 3.0 / 2.0 = 1.5
- 1.0 / 3.0 = 0.333 (check rounding)
- -6.0 / 2.0 = -3.0
- Division by very small number (stress test)
- Division by zero (define expected behavior: saturate to max)
- Compare 1000 random pairs against Python reference (within 1 ULP)

**Square root tests:**
- sqrt(4.0) = 2.0
- sqrt(1.0) = 1.0
- sqrt(0.25) = 0.5
- sqrt(0.0) = 0.0
- Exhaustive test: all positive 16-bit values interpreted as Q4.12 (65536 cases, feasible in simulation)
- Verify against Python `int(math.sqrt(x * 4096)) // 64` or equivalent

### 2.2 Intersection Unit (`tb_intersection_unit.sv`)

Port the existing 8 test vectors from `tb_ray_sphere_intersect.sv`, converted from Q8.8 to Q4.12:

| Test | Ray Origin | Ray Dir | Sphere Center | Radius | Expected |
|------|-----------|---------|---------------|--------|----------|
| 1 | (0,0,0) | (0,0,1) | (0,0,5) | 2.0 | HIT, t=3.0 |
| 2 | (0,5,0) | (0,0,1) | (0,0,5) | 2.0 | MISS |
| 3 | (0,0,7) | (0,0,-1) | (0,0,5) | 2.0 | HIT, t=0.0 (edge) |
| 4 | (0,0,0) | (0,0,-1) | (0,0,5) | 2.0 | MISS (away) |
| 5 | (4,0,0) | (-1,0,0) | (0,0,0) | 2.0 | HIT, t=2.0 |
| 6 | (0,0,0) | (0,0,1) | (0,0,3) | 0.5 | HIT, t=2.5 |
| 7 | (0,0,0) | (1,1,1) | (3,3,3) | 1.5 | HIT |
| 8 | (0,3,0) | (0,0,1) | (0,0,5) | 2.0 | MISS (near miss) |

Additional tests:
- Grazing ray (discriminant near zero): verify correct hit/miss at boundary
- Ray origin inside sphere: verify t > 0 hit for exit point
- Very large t_value: verify no overflow
- Normal vector direction: verify it points outward from sphere center

### 2.3 Ray Generation Unit (`tb_ray_generation.sv`)

- Center pixel (40, 30) should produce direction ~(0, 0, 1) (straight ahead)
- Corner pixel (0, 0) should produce direction pointing upper-left
- Pixel (79, 59) should produce direction pointing lower-right
- Shadow ray mode: verify origin is offset from hit point
- Reflection ray mode: verify passthrough of override direction

### 2.4 Shading Unit (`tb_shading_unit.sv`)

- Light directly above surface: expect maximum diffuse
- Light behind surface (dot(N,L) < 0): expect ambient only
- In shadow: expect ambient only (diffuse and specular zeroed)
- Specular highlight: place camera at reflection direction, expect bright spot
- Color quantization: verify Q4.12 → 2-bit mapping at boundaries (0.0, 0.25, 0.5, 0.75, 1.0)

### 2.5 Scene Memory (`tb_scene_memory.sv`)

- Load a complete scene via serial protocol, read back all values
- Verify address auto-increment
- Verify load_complete transition
- Verify obj_idx mux outputs correct object
- Verify default values after reset

### 2.6 Scanline Controller (`tb_scanline_controller.sv`)

- Verify pixel counter iterates 0-79
- Verify object counter iterates 0 to num_objects-1
- Verify closest-hit tracking selects minimum t
- Verify state machine transitions (primary → shade → shadow → reflect → write)
- Verify line buffer swap occurs at correct time

## 3. Integration Tests

### 3.1 Math + Intersection Integration
Connect intersection unit to math unit. Run the 8 test vectors. Verify bit-exact match with Python reference.

### 3.2 Full Pipeline: Single Pixel
Connect ray_generation → intersection_unit → shading_unit with math_unit. Hardwire a single pixel coordinate and single sphere. Verify the output color matches the reference model.

### 3.3 Full Line
Run a complete 80-pixel line through the pipeline. Capture line buffer contents. Compare against reference image line.

### 3.4 Full Frame
Run a complete 80x60 frame. Capture all line buffer outputs. Compare against reference image pixel-by-pixel. Allow 1-shade-level tolerance at object edges.

## 4. Reference Software Model

### `reference_raytracer.py`

A Python script that implements the exact hardware algorithm using integer arithmetic:

```python
class Q412:
    """Q4.12 fixed-point number using integer arithmetic"""
    FRAC_BITS = 12
    ONE = 1 << 12  # 4096

    def __init__(self, value):
        # Store as 16-bit signed integer
        self.raw = int(value) & 0xFFFF
        if self.raw >= 0x8000:
            self.raw -= 0x10000

    @classmethod
    def from_float(cls, f):
        return cls(int(f * 4096))

    def to_float(self):
        return self.raw / 4096.0

    def __mul__(self, other):
        # Q8.24 product, truncated to Q4.12
        product = self.raw * other.raw  # Q8.24
        return Q412(product >> 12)

    def __add__(self, other):
        return Q412(self.raw + other.raw)

    def __sub__(self, other):
        return Q412(self.raw - other.raw)
```

The reference model:
1. Takes scene parameters as Q4.12 integers
2. Performs ray-sphere intersection with identical operation ordering
3. Computes shading with identical Blinn-Phong simplifications
4. Outputs 6-bit pixel colors
5. Generates reference images as PPM files

### Usage
```bash
python reference_raytracer.py --scene test_scene_1.json --output reference_1.ppm
```

Compare with Verilator output:
```bash
python compare_frames.py reference_1.ppm verilator_1.ppm --tolerance 1
```

## 5. Verilator Simulation Plan

### Extend Existing Infrastructure

The existing `verilator-bench/` provides SDL2 visualization. Extend with:

1. **Headless mode** (`--headless`): Render one frame, save to PPM, exit with pass/fail
2. **Frame capture** (`--capture N`): Save frame N to file
3. **Scene loading**: Read scene JSON, convert to serial byte stream, inject via `ui_in`/`uio_in` simulation

### Test Harness Modifications

```cpp
// In genericVgaViewer.cpp, add:
bool headless_mode = false;
int capture_frame = -1;
char* output_file = NULL;

// After frame capture:
if (headless_mode && frame_count == capture_frame) {
    save_ppm(output_file, pixel_buffer, 640, 480);
    exit(0);
}
```

### Simulation Performance Target
A full 80x60 frame at worst case (4 objects, shadows, reflections) takes ~3.6M cycles. At Verilator speeds (~10M cycles/sec on modern workstation), this is ~0.4 seconds per frame. Acceptable for testing.

## 6. Test Scenes

| # | Scene | Objects | Features | Purpose |
|---|-------|---------|----------|---------|
| 1 | Single red sphere | 1 | Basic intersection + shading | Sanity check |
| 2 | Two spheres (red + blue) | 2 | Closest-hit selection | Multi-object |
| 3 | Sphere + ground (large sphere as floor) | 2 | Shadow on floor | Shadow rays |
| 4 | Two spheres, one reflective | 2 | Reflection of one sphere in another | Reflection |
| 5 | Sphere behind camera | 1 | Should render empty (background only) | Edge case |
| 6 | Four spheres, all features | 4 | Full stress test | Performance |

### Scene 1: Single Red Sphere (Default Test Scene)
```json
{
  "objects": [
    {"center": [0, 0, 3], "radius": 1.5, "color": [0.9, 0.1, 0.1], "specular": 0.5, "reflectivity": 0}
  ],
  "light": {"position": [3, -4, -2], "color": [1, 1, 1]},
  "camera": {"position": [0, 0, -5], "fov": 1.0},
  "config": {"shadows": true, "reflections": false}
}
```

Expected output: Red sphere with bright spot (specular) on upper-right, gradual shading to dark on lower-left, dark blue background.

### Scene 3: Shadow Test
```json
{
  "objects": [
    {"center": [0, -1, 3], "radius": 1.0, "color": [0.8, 0.2, 0.2], "specular": 0.5, "reflectivity": 0},
    {"center": [0, 4, 3], "radius": 5.0, "color": [0.3, 0.6, 0.3], "specular": 0.1, "reflectivity": 0}
  ],
  "light": {"position": [3, -5, 0], "color": [1, 1, 1]},
  "camera": {"position": [0, 0, -5], "fov": 1.0},
  "config": {"shadows": true, "reflections": false}
}
```

Expected output: Small red sphere floating above large green sphere (acting as ground). Red sphere casts a shadow on the green surface.

## 7. Regression Test Flow

```
make test-unit         # Run all unit testbenches (iverilog or Verilator)
make test-integration  # Run integration tests
make test-reference    # Generate reference images from Python model
make test-verilator    # Run Verilator simulation, compare against references
make test-all          # All of the above
```

Each test outputs PASS/FAIL. CI integration recommended once the project stabilizes.

## 8. Phase-Specific Test Gates

Each implementation phase (see 05-implementation-roadmap.md) has specific test requirements that must pass before proceeding:

| Phase | Gate Tests |
|-------|-----------|
| 1 (Fix intersection) | tb_math_unit PASS, tb_intersection_unit PASS, Verilator single sphere visible |
| 2 (Shared math unit) | Same as Phase 1 but with sequential intersection unit |
| 3 (Multi-object) | Scene 1-3 match references, serial scene loading works |
| 4 (Reflections) | Scene 4 match reference, all 6 scenes pass |
| 5 (Synthesis) | Gate-level simulation matches RTL simulation for Scene 1 |
