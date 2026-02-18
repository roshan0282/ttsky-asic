# Existing Code Audit

## Summary

| File | Status | Reusable? | Action |
|------|--------|-----------|--------|
| `ray_sphere_intersect.sv` | Broken (placeholder sqrt/div) | Partially | Phase 1: fix, Phase 2: replace |
| `vga_raytracer.sv` | Working VGA timing, broken rendering | VGA timing reusable | Phase 1: fix rendering, Phase 3: restructure |
| `tt_um_vga_raytracer.sv` | Working | Pin format reusable | Phase 3: replace with new wrapper |
| `tb_ray_sphere_intersect.sv` | Working | Test vectors reusable | Port to Q4.12 format |
| `genericVgaViewer.cpp` | Working | Fully reusable | Phase 3: add headless mode |

---

## File-by-File Audit

### `raygaming-sphere-test/ray_sphere_intersect.sv` (224 lines)

**What works:**
- Pipeline structure (stages 1-4): vector subtraction, dot product components, discriminant calculation
- Q8.8 encoding/decoding
- Pipeline valid signal propagation
- Port interface design

**What's broken:**
- **Line 178**: `sqrt_disc_s5 <= discriminant[47:16]` -- This is NOT a square root. It's just a bit-slice that happens to compile. For any discriminant value, this produces a wildly incorrect "square root." Must be replaced with an iterative sqrt algorithm.
- **Line 212**: `t_result = (numerator >>> 8) / (a_q88_s5 <<< 1)` -- Uses the SystemVerilog `/` operator. While this works in simulation, it synthesizes to a huge combinational divider (or fails synthesis entirely). Must be replaced with an iterative divider.
- **Lines 85-113**: 9 separate multiply operations in a single cycle. Each 16x16 multiply is ~600 GE. Total: ~5400 GE just for stage 2. This far exceeds the TT 4x4 area budget.

**What to reuse:**
- The algorithm itself (quadratic formula for ray-sphere intersection) is correct
- Pipeline stage 1 (oc computation) is correct
- Test vectors from the testbench
- The concept of pipeline valid propagation

**What to replace:**
- The parallel pipeline → sequential micro-sequenced approach
- Q8.8 → Q4.12 (Phase 2)
- Placeholder sqrt → iterative sqrt (Phase 1)
- Placeholder division → iterative divider (Phase 1)

---

### `raygaming-sphere-test/vga_raytracer.sv` (223 lines)

**What works:**
- **Lines 20-81**: VGA timing generation -- correct 640x480@60Hz timing with proper front/back porch and sync pulse positions. This can be directly reused.
- **Lines 84-120**: Ray generation from pixel coordinates -- simple but functional perspective projection. Can be adapted for the new 80x60 resolution.
- **Lines 130-137**: Instantiation of `ray_sphere_intersect` -- correct port connections

**What's broken:**
- **Lines 138-157**: The intersection module outputs (`hit_out`, `t_out`) are declared and connected, but NEVER USED for pixel coloring. The entire intersection pipeline runs but its results are thrown away.
- **Lines 160-178**: `in_sphere` computation -- This is a 2D screen-space circle test that completely bypasses the 3D intersection. It computes distance from pixel to projected sphere center and checks if it's within a radius. This is NOT ray tracing, it's circle rasterization.
- **Lines 181-207**: Color generation uses `in_sphere` (the 2D hack) instead of `hit_out` (the real intersection). The `shade` variable is computed from 2D distance, not from the intersection t_value.

**What to reuse:**
- VGA timing constants and counter logic (lines 20-81)
- General structure of the pixel-clock divider
- Sync signal generation

**What to replace:**
- Ray generation adapted for 80x60 (Phase 3)
- All rendering logic replaced with line buffer readout (Phase 3)
- Remove the 2D `in_sphere` hack entirely

---

### `raygaming-sphere-test/tt_um_vga_raytracer.sv` (62 lines)

**What works:**
- **Lines 15-20**: Standard TT port declaration
- **Lines 48-55**: VGA pin packing into `uo_out`:
  ```
  uo_out = {hsync, blue[0], green[0], red[0], vsync, blue[1], green[1], red[1]}
  ```
- **Lines 37-42**: 8-bit to 2-bit color conversion: `r_2bit = red_int[7:6]`
- Active-low reset handling

**What's broken:**
- Nothing broken, but it's incomplete: `ui_in` and `uio_in` are entirely unused (not connected to anything)

**What to reuse:**
- Pin packing format (lines 48-55) -- directly reusable in the new wrapper
- The `uo_out` assignment pattern

**What to replace:**
- The entire module is replaced in Phase 3 with `tt_um_raytracer_top.sv` that adds scene memory pin routing

---

### `raygaming-sphere-test/tb_ray_sphere_intersect.sv` (300 lines)

**What works:**
- 8 well-chosen test vectors covering hit, miss, various angles
- `to_q88()` and `from_q88()` helper functions
- Test summary reporting (pass/fail counts)
- Waveform dump for debugging

**What to reuse:**
- All 8 test case scenarios (convert values from Q8.8 to Q4.12)
- Testbench structure and reporting pattern
- The approach of using helper functions for fixed-point conversion

**What to add:**
- Q4.12 conversion functions
- Tolerance-based t_value comparison (instead of exact match)
- Additional edge case tests (grazing rays, origin inside sphere)

---

### `verilator-bench/genericVgaViewer.cpp` (~100 lines)

**What works:**
- SDL2 window creation and rendering
- Pixel buffer management (640x480x3)
- VGA signal capture during visible period
- Frame sync on VSync falling edge
- Proper screen coordinate tracking

**What to reuse:**
- Entire file (extend, don't replace)

**What to add (Phase 3):**
- `--headless` flag for automated testing
- `--capture N` flag to save frame N as PPM
- Scene loading: read scene JSON, inject bytes via `ui_in`/`uio_in` simulation
- Frame comparison utility (or separate Python script)

---

### `verilator-bench/tb/tbGenericVga.v` (82 lines)

**What works:**
- Generic TT VGA testbench that instantiates any module via `TOP_MODULE` define
- VGA timing tracking (800x525)
- Color decoding from TT format (2-bit to 8-bit expansion)

**What to reuse:**
- The testbench pattern
- Color decoding logic

**What to modify:**
- Change `TOP_MODULE` default to the new `tt_um_raytracer_top`
- Add scene loading stimulus (drive `ui_in` and `uio_in` pins to load scene data)

---

### `vga-driver/vgaDriver.v` (168 lines)

**What works:**
- Parametric VGA timing generator with submodules (pixelClock, hCounter, vCounter, syncGenerator)
- Clean modular design

**Relevance:**
- This is from the oscilloscope project, not the ray tracer
- The VGA timing constants match what we need
- The submodule approach is good reference architecture, but the `vga_raytracer.sv` timing is more directly reusable since it's already in SystemVerilog and matches our exact needs

---

### Other `vga-driver/` Files

The text generator, character RAM, font ROM, pixel arbiter, UI overlay, and text composer modules are all from the oscilloscope project. **None of these are needed for the ray tracer.** They serve as good examples of VGA display design but don't contain ray tracing-relevant logic.

---

## Key Gaps (What Doesn't Exist Yet)

| Component | Status | Phase |
|-----------|--------|-------|
| Iterative square root | Does not exist | Phase 1 |
| Iterative divider | Does not exist | Phase 1 |
| Shared math unit | Does not exist | Phase 2 |
| Sequential intersection sequencer | Does not exist | Phase 2 |
| Scene memory / register file | Does not exist | Phase 3 |
| Serial scene loader | Does not exist | Phase 3 |
| Ray generation (multi-type) | Partial (primary only) | Phase 3 |
| Shading unit (Blinn-Phong) | Does not exist | Phase 3 |
| Scanline controller FSM | Does not exist | Phase 3 |
| Double line buffer | Does not exist | Phase 3 |
| VGA with line buffer readout | Does not exist | Phase 3 |
| Reflection computation | Does not exist | Phase 4 |
| Python reference model | Does not exist | Phase 3 |
