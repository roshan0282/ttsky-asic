# Architecture Overview: TTSKY Ray Tracing ASIC

## 1. Current State

### What Exists
The project has a proof-of-concept ray tracer in `raygaming-sphere-test/`:

- **`ray_sphere_intersect.sv`** -- 6-stage pipelined ray-sphere intersection in Q8.8 fixed-point. Computes the quadratic formula (at^2 + bt + c = 0) for ray-sphere intersection across 6 pipeline stages.
- **`vga_raytracer.sv`** -- VGA timing generator (640x480@60Hz) with ray generation from pixel coordinates. Camera at (0,0,-10), sphere at (0,0,10) radius 5.
- **`tt_um_vga_raytracer.sv`** -- TinyTapeout interface wrapper. Packs 8-bit RGB down to 2-bit-per-channel.
- **`tb_ray_sphere_intersect.sv`** -- 8-test testbench with Q8.8 conversion helpers.
- **`verilator-bench/`** -- Verilator + SDL2 real-time VGA viewer.

### What's Broken
1. **sqrt is a placeholder** (L178): `sqrt_disc_s5 <= discriminant[47:16]` -- just a bit-slice, not a square root
2. **Division is a placeholder** (L212): uses SystemVerilog `/` operator which doesn't synthesize efficiently
3. **Intersection results are unused** (L160-207): `vga_raytracer.sv` bypasses the pipeline and uses 2D circle projection instead
4. **Q8.8 precision is insufficient**: only 8 fractional bits causes catastrophic cancellation in discriminant computation
5. **9 parallel multipliers** in pipeline stage 2: far too expensive for TinyTapeout area budget
6. **Single hardcoded sphere**, no scene memory, no lighting model, no shadows/reflections

## 2. Target Specification

| Parameter | Value |
|-----------|-------|
| Platform | TinyTapeout 4x4 (~4000 gate equivalents) |
| System clock | 50 MHz |
| VGA output | 640x480 @ 60Hz (25MHz pixel clock) |
| Render resolution | 80x60 (upscaled 8x to 640x480) |
| Fixed-point format | Q4.12 (16-bit: 4 integer, 12 fractional) |
| Max objects | 4 spheres |
| Lighting | Blinn-Phong (1 point light, ambient + diffuse + specular) |
| Shadows | 1 shadow ray per pixel (configurable) |
| Reflections | 1 bounce (configurable) |
| Scene input | Serial via `ui_in[7:0]` + control on `uio_in` |
| Color depth | 2 bits per channel (64 colors), matching TT VGA pinout |

## 3. Top-Level Block Diagram

```
                        +-----------------------+
                        |    SCENE MEMORY       |
                        |  (register file)      |
                        |  4 spheres + 1 light  |
                        |  + camera + config    |
                        |  77 bytes / 616 bits  |
                        +----------+------------+
                                   |
    ui_in[7:0] -----> SERIAL ------+
    uio_in[1:0]       LOADER
                                   |
                        +----------v------------+
    50MHz clk --------> SCANLINE CONTROLLER     |
                        | - pixel counter       |
                        | - object iterator     |
                        | - ray type FSM        |
                        | - closest-hit tracker |
                        +----------+------------+
                                   |
                        +----------v------------+
                        |  RAY GENERATION       |
                        |  - primary rays       |
                        |  - shadow rays        |
                        |  - reflection rays    |
                        +----------+------------+
                                   |
                        +----------v------------+
                        |  INTERSECTION UNIT    |
                        |  (micro-sequenced)    |
                        |  ~57 cycles/object    |
                        +----------+------------+
                                   |
                        +----------v------------+
                        |  SHARED MATH UNIT     |
                        |  1x 16x16 multiplier  |
                        |  iterative div (16cy) |
                        |  iterative sqrt(16cy) |
                        +----------+------------+
                                   |
                        +----------v------------+
                        |  SHADING UNIT         |
                        |  Blinn-Phong          |
                        |  ~30 cycles           |
                        +----------+------------+
                                   |
                        +----------v------------+
                        |  DOUBLE LINE BUFFER   |
                        |  2 x (80 x 6-bit)    |
                        |  ping-pong swap       |
                        +----------+------------+
                                   |
                        +----------v------------+
                        |  VGA OUTPUT           |
                        |  640x480 timing       |
                        |  8x upscale readout   |
                        +----+------+-----------+
                             |      |
                          hsync   uo_out[7:0]
                          vsync   (2-bit RGB packed)
```

## 4. Data Flow Per Pixel

For each pixel at reduced resolution (80x60):

1. **Ray Generation** (1 cycle): Convert pixel (x,y) to ray origin + direction in Q4.12
2. **Object Loop** (N objects x ~57 cycles each):
   - Feed ray + object parameters to intersection unit
   - Intersection unit micro-sequences through shared math unit
   - Track closest hit (smallest positive t_value)
3. **Shading** (~30 cycles): If hit found, compute Blinn-Phong lighting via math unit
4. **Shadow Test** (optional, N objects x ~57 cycles): Cast shadow ray toward light, test all objects
5. **Reflection** (optional, N objects x ~57 cycles + ~30 cycles shading): Compute reflection direction, trace against all objects, shade hit
6. **Write Pixel** (1 cycle): Store 6-bit color (2 bits per channel) to line buffer

## 5. Timing Analysis

### Cycles Per Pixel

| Component | Cycles (4 objects) | Cycles (2 objects) |
|-----------|-------------------|-------------------|
| Ray generation | 1 | 1 |
| Primary intersection (N objects) | 228 | 114 |
| Shading | 30 | 30 |
| Shadow ray (N objects) | 228 | 114 |
| Reflection ray (N objects) | 228 | 114 |
| Reflection shading | 30 | 30 |
| **Total (full features)** | **745** | **403** |
| **Total (no reflection)** | **487** | **259** |
| **Total (no shadow, no reflection)** | **259** | **145** |

### Frame Rate at 80x60 Resolution (50MHz system clock)

| Configuration | Cycles/frame | Frame time | FPS |
|---------------|-------------|------------|-----|
| 4 obj, shadows + reflections | 3,576,000 | 71.5 ms | 14 |
| 4 obj, shadows only | 2,337,600 | 46.8 ms | 21 |
| 2 obj, shadows + reflections | 1,934,400 | 38.7 ms | 26 |
| 2 obj, shadows only | 1,243,200 | 24.9 ms | 40 |
| 2 obj, no shadows/reflections | 696,000 | 13.9 ms | **72** |
| 4 obj, no shadows/reflections | 1,243,200 | 24.9 ms | 40 |

### Recommended Operating Points
- **Default**: 2 objects + shadows, no reflections = **40 FPS** (visually smooth)
- **Full featured**: 4 objects + shadows + reflections = **14 FPS** (demo mode)
- **Fast mode**: 2 objects, primary only = **72 FPS** (exceeds 60Hz VGA requirement)

The scanline controller uses the VGA blanking periods (horizontal and vertical) for computation. Each 80-pixel line must be computed within 8 VGA line times = 8 x 32us = 256us = 12,800 system clock cycles. At 259 cycles/pixel for 2 objects without shadows: 80 x 259 = 20,720 cycles -- this exceeds 12,800. Therefore, we need to compute during both visible and blanking time by using the double line buffer.

**Actual budget**: Full frame time (525 lines x 800 pixel-clocks / 25MHz = 16.8ms = 840,000 system clocks at 50MHz). Divided by 60 rendered lines = 14,000 system clocks per rendered line. At 80 pixels per line: **175 cycles per pixel maximum for 60 FPS**. This means 2 objects with no shadows/reflections (145 cycles) is the only configuration that hits full 60 FPS. All others run at reduced frame rates with frame skipping or accept lower FPS.

## 6. Architecture Decisions Summary

| Decision | Choice | Rationale |
|----------|--------|-----------|
| Render resolution | 80x60 upscaled 8x | Only feasible resolution within cycle budget |
| Math architecture | 1 shared 16x16 multiplier | Area: ~800 GE vs ~5400 GE for 9 parallel multipliers |
| Fixed-point format | Q4.12 | 16x better precision than Q8.8, same wire width |
| Intersection approach | Micro-sequenced (57 cycles/object) | Trades latency for area; reuses single multiplier |
| Framebuffer | Double 80x6-bit line buffer | 960 bits total; one computes while other displays |
| Scene storage | Register file (616 FFs) | Simple, fast access; loaded via serial interface |
| Shadow/reflection | Configurable via scene config register | Allows trading features for frame rate at runtime |
| Object types | Spheres only (triangles as future extension) | Spheres need fewer parameters and simpler math |

## 7. Pin Allocation (TinyTapeout 4x4)

```
uo_out[7:0]:   VGA output
  [7] = hsync
  [6] = blue[0]
  [5] = green[0]
  [4] = red[0]
  [3] = vsync
  [2] = blue[1]
  [1] = green[1]
  [0] = red[1]

ui_in[7:0]:    Scene data byte input (directly drives serial loader shift register)

uio_in[7:0]:   Control signals
  [0] = serial clock / strobe (rising edge latches ui_in byte)
  [1] = chip select (active high: scene load mode)
  [2] = scene load complete (pulse to finalize and start rendering)
  [7:3] = reserved

uio_out[7:0]:  Status/debug output
  [0] = busy (1 = currently loading scene or computing)
  [1] = frame_sync (pulses each frame)
  [7:2] = reserved

uio_oe[7:0]:   Direction control
  = 0x03 (bits 0-1 output for status, rest input)
```

## 8. Module Hierarchy

```
tt_um_raytracer_top (TinyTapeout wrapper)
  |
  +-- serial_scene_loader
  |     +-- shift register (8-bit)
  |     +-- address counter
  |     +-- scene_register_file (616 bits)
  |
  +-- scanline_controller (top-level FSM)
  |     +-- pixel_counter (0..79)
  |     +-- line_counter (0..59)
  |     +-- object_counter (0..3)
  |     +-- ray_type_fsm (primary/shadow/reflection)
  |     +-- closest_hit_tracker
  |
  +-- ray_generation_unit
  |
  +-- intersection_sequencer
  |     +-- micro_fsm (25 operations)
  |     +-- intermediate registers
  |
  +-- math_unit (shared)
  |     +-- 16x16 signed multiplier
  |     +-- 16-bit adder/subtractor
  |     +-- iterative_divider (16 cycles)
  |     +-- iterative_sqrt (16 cycles)
  |
  +-- shading_unit
  |     +-- blinn_phong_fsm
  |     +-- color_accumulator
  |
  +-- double_line_buffer
  |     +-- buffer_a (80 x 6 bits)
  |     +-- buffer_b (80 x 6 bits)
  |     +-- swap_control
  |
  +-- vga_output
        +-- pixel_clock_divider (50MHz -> 25MHz)
        +-- h_counter (0..799)
        +-- v_counter (0..524)
        +-- sync_generator
        +-- line_buffer_reader (8x upscale)
        +-- tt_pin_packer
```
