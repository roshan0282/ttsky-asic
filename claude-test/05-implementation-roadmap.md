# Implementation Roadmap

## Overview

Five phases, each independently testable. Each phase builds on the previous and produces a working design.

```
Phase 1: Fix intersection math     ──> Single sphere with real 3D ray tracing
Phase 2: Shared math unit          ──> Same output, dramatically less area
Phase 3: Multi-object + shading    ──> Programmable scenes with lighting + shadows
Phase 4: Reflections + polish      ──> Full-featured ray tracer
Phase 5: Synthesis + tapeout       ──> Silicon-ready design
```

---

## Phase 1: Fix Existing Intersection Unit

**Goal**: Make the current ray_sphere_intersect.sv produce correct results and actually use them for rendering.

**Duration estimate**: Foundation phase

### Tasks

1. **Implement iterative square root module** (`sqrt_unit.sv`)
   - Binary digit-by-digit restoring algorithm
   - 32-bit Q8.24 input → 16-bit Q4.12 output (or Q8.8 to stay compatible initially)
   - 16 cycles per operation
   - Standalone testbench

2. **Implement iterative divider module** (`div_unit.sv`)
   - Non-restoring division algorithm
   - 16-bit / 16-bit → 16-bit quotient
   - 16 cycles per operation
   - Standalone testbench

3. **Replace placeholder sqrt** in `ray_sphere_intersect.sv` (line 178)
   - Instantiate sqrt_unit, connect discriminant as input
   - Pipeline stage 5 now takes 16 cycles (was 1 cycle)
   - Add handshake signals (busy/done) since pipeline is no longer lock-step

4. **Replace placeholder division** in `ray_sphere_intersect.sv` (line 212)
   - Instantiate div_unit
   - Pipeline stage 6 now takes 16 cycles

5. **Connect intersection output to rendering** in `vga_raytracer.sv`
   - Remove the 2D circle projection (lines 160-207)
   - Use `hit` flag: if hit → render sphere color, else → background
   - Use `t_value` for simple distance-based shading: `shade = max_brightness - t_value * scale`

6. **Update testbench**
   - Extend `tb_ray_sphere_intersect.sv` to account for new latency
   - Add tolerance check on t_value (exact match may differ due to iterative algorithms)

7. **Verify with Verilator**
   - Run the SDL2 viewer
   - Should see a properly ray-traced sphere (no longer a 2D circle hack)

### Test Gate
- All 8 existing test vectors pass with correct hit/miss
- Verilator shows a shaded sphere from correct 3D intersection
- t_values within 5% of analytical solutions

### Files Modified
- `raygaming-sphere-test/ray_sphere_intersect.sv` -- replace stages 5-6
- `raygaming-sphere-test/vga_raytracer.sv` -- use intersection results

### Files Created
- `raygaming-sphere-test/sqrt_unit.sv`
- `raygaming-sphere-test/div_unit.sv`
- `raygaming-sphere-test/tb_sqrt_unit.sv`
- `raygaming-sphere-test/tb_div_unit.sv`

---

## Phase 2: Shared Math Unit + Sequential Intersection

**Goal**: Replace the parallel pipeline with a single shared math unit. Dramatically reduce area while producing identical results.

**Duration estimate**: After Phase 1 is verified

### Tasks

1. **Implement shared math unit** (`math_unit.sv`)
   - Single 16x16 signed multiplier
   - 32-bit accumulator for dot products (MUL_ACC)
   - Iterative divider (reuse from Phase 1, integrate)
   - Iterative sqrt (reuse from Phase 1, integrate)
   - Operation select via 3-bit opcode
   - Request/done handshake

2. **Implement intersection sequencer** (`intersection_sequencer.sv`)
   - Micro-sequenced state machine (see `ray-object-intersection.md`)
   - ~30 steps, each issuing one operation to math unit
   - Tracks intermediate values in local registers
   - Outputs: hit, t_value, hit_point, normal

3. **Integration test: math_unit + intersection_sequencer**
   - Run the same 8 test vectors
   - Verify bit-exact match with Phase 1 (or within 1 ULP if precision changed)

4. **Switch vga_raytracer to use new modules**
   - Remove old `ray_sphere_intersect` instantiation
   - Instantiate `math_unit` + `intersection_sequencer`
   - Note: rendering will be slower (sequential) but still fast enough for single sphere at 640x480 since there's only 1 object

5. **Verify with Verilator**
   - Same visual output as Phase 1

### Decision Point: Q4.12 Migration
This is the ideal time to migrate from Q8.8 to Q4.12, since we're rewriting the math path entirely. If done here, all subsequent phases use Q4.12 from the start.

### Test Gate
- All 8 test vectors pass
- Verilator output matches Phase 1 visually
- Area estimate (from yosys): math_unit < 1200 GE

### Files Created
- `src/math_unit.sv`
- `src/intersection_sequencer.sv`
- `src/tb_math_unit.sv`
- `src/tb_intersection_sequencer.sv`

### Files Modified
- `raygaming-sphere-test/vga_raytracer.sv` -- swap intersection module

---

## Phase 3: Scanline Controller + Scene Memory + Multiple Objects

**Goal**: Support 2-4 programmable spheres with Blinn-Phong shading and shadow rays. This is the minimum viable "programmable ray tracer."

**Duration estimate**: Largest phase

### Tasks

1. **Implement scene memory** (`scene_memory.sv`)
   - Register file for 4 objects + light + camera + config
   - Serial loading interface via TT input pins
   - Object read port with index mux
   - Testbench: load scene via serial, read back values

2. **Implement ray generation unit** (`ray_generation.sv`)
   - Primary ray from pixel coordinates at 80x60 resolution
   - Shadow ray from hit point toward light
   - Multiplexer for ray type selection

3. **Implement shading unit** (`shading_unit.sv`)
   - Blinn-Phong: ambient + diffuse + specular
   - Shadow factor input
   - Color quantization to 6-bit
   - Uses shared math unit for dot products

4. **Implement scanline controller** (`scanline_controller.sv`)
   - Master FSM orchestrating per-pixel ray tracing
   - Object iteration with closest-hit tracking
   - Shadow ray loop
   - Line buffer write control

5. **Implement double line buffer + VGA output** (`vga_output.sv`)
   - Reuse existing VGA timing
   - Add line buffer read with 8x upscaling
   - Double buffer with ping-pong swap

6. **Implement new TT wrapper** (`tt_um_raytracer_top.sv`)
   - Wire all modules together
   - Route TT pins to scene memory and VGA output

7. **Python reference model** (`reference_raytracer.py`)
   - Q4.12 integer arithmetic in Python
   - Generates reference PPM images for each test scene

8. **Verilator integration**
   - Update config.sh to point at new top module
   - Add scene loading to viewer (read from file, inject serial bytes)
   - Add headless frame capture mode

### Test Gate
- Scene loading: load 2 spheres via serial, read back correct values
- Scene 1 (single sphere): matches reference image
- Scene 2 (two spheres): closest hit works correctly
- Scene 3 (sphere with shadow): shadow visible on ground sphere
- Frame rate: >= 20 FPS for 2 objects with shadows at 80x60

### Files Created (new `src/` directory)
- `src/scene_memory.sv`
- `src/ray_generation.sv`
- `src/shading_unit.sv`
- `src/scanline_controller.sv`
- `src/vga_output.sv`
- `src/tt_um_raytracer_top.sv`
- `src/double_line_buffer.sv`
- `test/reference_raytracer.py`
- `test/compare_frames.py`
- `test/scenes/scene_1.json` through `scene_6.json`
- Testbenches for each module

---

## Phase 4: Reflections + Polish

**Goal**: Add reflection rays (1 bounce), specular highlights, and optimize.

**Duration estimate**: After Phase 3 is stable

### Tasks

1. **Reflection ray generation** in shading_unit
   - Compute: reflect_dir = ray_dir - 2 * dot(ray_dir, normal) * normal
   - ~9 cycles via shared math unit

2. **Extend scanline controller** for reflection pass
   - After shading primary hit, if reflectivity > 0:
     - Generate reflection ray
     - Test all objects
     - Shade reflection hit
     - Blend: final = primary * (1 - refl) + reflection * refl

3. **Specular highlight refinement**
   - Implement half-vector dot product check
   - Binary specular (on/off above threshold) is sufficient at 2-bit color

4. **Area optimization pass**
   - Share registers between intersection and shading (they don't run concurrently)
   - Reduce any oversized counters or state machines
   - Run yosys to get actual gate count, compare with budget

5. **Resolution tuning**
   - If area allows, try 160x120 (4x upscale) for better visual quality
   - This quadruples the pixel count, so only feasible with fewer objects or no shadows

6. **Frame rate optimization**
   - Early-out on shadow rays (stop after first hit, don't test remaining objects)
   - Skip shading for background pixels (already done)
   - Consider caching closest object per line for spatial coherence

### Test Gate
- Scene 4 (reflective sphere): reflection visible and matches reference
- All 6 test scenes pass
- Area: total design < 4000 GE (from yosys synthesis estimate)

---

## Phase 5: Synthesis + Tapeout Preparation

**Goal**: Synthesize for TinyTapeout 4x4, meet all constraints, prepare submission.

**Duration estimate**: Final phase

### Tasks

1. **OpenLane synthesis**
   - Run yosys + OpenROAD flow targeting TT 4x4 PDK
   - Check: area fits, timing met at 50MHz, no DRC violations

2. **Fix timing violations**
   - Add pipeline registers on critical paths if needed
   - Typical critical path: multiplier output → accumulator → comparison
   - May need to register the math unit output and add 1 cycle latency

3. **Fix area overflows**
   - If over budget, reduce features in priority order:
     1. Reduce to 3 objects (saves ~150 GE)
     2. Use 8-bit scene colors (saves ~190 GE)
     3. Remove reflection support (saves ~100 GE in controller logic)
     4. Reduce to 2 objects (saves another ~150 GE)

4. **Gate-level simulation**
   - Run Verilator with synthesized netlist
   - Compare frame output against RTL simulation
   - Must match exactly (no analog effects in digital simulation)

5. **Power analysis**
   - Estimate switching activity from simulation VCD
   - Verify within TT power budget

6. **Prepare TinyTapeout submission**
   - `info.yaml` with project description
   - Pin documentation
   - User guide for scene loading protocol
   - Demo scene in binary format for easy testing

### Test Gate
- Synthesis completes without errors
- Gate-level simulation of Scene 1 matches RTL
- Timing met at 50 MHz
- Area within TT 4x4 budget
- Submission package complete

---

## Summary Timeline

```
Phase 1 ─────> Phase 2 ─────> Phase 3 ─────> Phase 4 ─────> Phase 5
Fix math       Shared ALU     Multi-object   Reflections    Synthesis
                              + shading      + polish
                              + shadows
```

Each phase produces a working, testable design. If time is limited, Phase 3 is the minimum target for a compelling TinyTapeout submission (programmable multi-sphere ray tracer with shadows).
