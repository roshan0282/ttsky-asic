# Module Spec: Scanline Controller

## Overview
Top-level sequencer that orchestrates the entire ray tracing pipeline. For each pixel in the current line, it: generates a ray, tests all objects, selects the closest hit, runs shading, optionally tests shadows and reflections, and writes the final color to the line buffer.

## Interface

```systemverilog
module scanline_controller (
    input  logic        clk,
    input  logic        rst,
    input  logic        scene_valid,       // From scene_memory: scene is loaded

    // VGA timing inputs (from vga_output)
    input  logic [9:0]  vga_line,          // Current VGA line being displayed (0-524)
    input  logic        line_start,        // Pulses at start of each VGA line

    // Scene configuration (from scene_memory)
    input  logic [2:0]  num_objects,
    input  logic        enable_shadows,
    input  logic        enable_reflections,

    // Ray generation control
    output logic [6:0]  pixel_x,           // 0-79
    output logic [5:0]  pixel_y,           // 0-59
    output logic [1:0]  ray_type,          // 00=primary, 01=shadow, 10=reflection

    // Object iteration
    output logic [1:0]  obj_idx,           // Current object index for scene_memory

    // Intersection unit control
    output logic        intersect_start,
    input  logic        intersect_done,
    input  logic        intersect_hit,
    input  logic signed [15:0] intersect_t,

    // Shading unit control
    output logic [1:0]  shade_mode,        // 00=full, 01=shadow_dir, 10=reflect_dir
    output logic        shade_start,
    input  logic        shade_done,
    input  logic [5:0]  shade_color,       // 6-bit final pixel color

    // Line buffer write
    output logic [6:0]  lb_write_addr,     // 0-79
    output logic [5:0]  lb_write_data,     // 6-bit color
    output logic        lb_write_en,

    // Line buffer swap control
    output logic        lb_swap,           // Pulse to swap display/compute buffers

    // Status
    output logic        frame_busy,
    output logic        frame_sync         // Pulses once per frame
);
```

## State Machine

```
                    scene_valid
                        │
                        v
  ┌──────────────── WAIT_FRAME ◄──────────────────────┐
  │                     │                              │
  │              vga_line = vblank start               │
  │                     │                              │
  │                     v                              │
  │              START_FRAME                            │
  │              (reset line_counter=0)                 │
  │                     │                              │
  │                     v                              │
  │  ┌──────── START_LINE ◄─────────────┐             │
  │  │          (reset pixel_x=0)        │             │
  │  │               │                   │             │
  │  │               v                   │             │
  │  │  ┌──── TRACE_PRIMARY ◄────┐      │             │
  │  │  │     ray_type = PRIMARY  │      │             │
  │  │  │     obj_idx = 0         │      │             │
  │  │  │          │              │      │             │
  │  │  │          v              │      │             │
  │  │  │   INTERSECT_OBJECT      │      │             │
  │  │  │   (start intersect)     │      │             │
  │  │  │          │              │      │             │
  │  │  │   wait intersect_done   │      │             │
  │  │  │          │              │      │             │
  │  │  │   UPDATE_CLOSEST        │      │             │
  │  │  │   (track min t)         │      │             │
  │  │  │          │              │      │             │
  │  │  │          ├─ obj_idx < num_objects-1           │
  │  │  │          │   obj_idx++  │      │             │
  │  │  │          └──────────────┘      │             │
  │  │  │          │                     │             │
  │  │  │   no hit? ──> WRITE_BG_PIXEL ──┼─> NEXT_PIXEL
  │  │  │          │                     │             │
  │  │  │          v                     │             │
  │  │  │   SHADE_PRIMARY               │             │
  │  │  │   (shade_mode=full)            │             │
  │  │  │          │                     │             │
  │  │  │   wait shade_done              │             │
  │  │  │          │                     │             │
  │  │  │   enable_shadows? ──no──> APPLY_COLOR        │
  │  │  │          │                     │             │
  │  │  │          v                     │             │
  │  │  │   SHADOW_RAY                   │             │
  │  │  │   ray_type = SHADOW            │             │
  │  │  │   obj_idx = 0                  │             │
  │  │  │          │                     │             │
  │  │  │   [iterate all objects]        │             │
  │  │  │   any hit? → in_shadow=1       │             │
  │  │  │          │                     │             │
  │  │  │   enable_reflections? ──no──> APPLY_COLOR    │
  │  │  │          │                     │             │
  │  │  │          v                     │             │
  │  │  │   REFLECT_RAY                  │             │
  │  │  │   ray_type = REFLECTION        │             │
  │  │  │   [iterate + shade]            │             │
  │  │  │          │                     │             │
  │  │  │          v                     │             │
  │  │  │   BLEND_COLORS                 │             │
  │  │  │   primary * (1-refl) + reflect * refl        │
  │  │  │          │                     │             │
  │  │  │          v                     │             │
  │  │  │   APPLY_COLOR                  │             │
  │  │  │   → write pixel to line buffer │             │
  │  │  │          │                     │             │
  │  │  │          v                     │             │
  │  │  │   NEXT_PIXEL                   │             │
  │  │  │   pixel_x++                    │             │
  │  │  │          │                     │             │
  │  │  │   pixel_x < 80? ──────────────┘             │
  │  │  │          │                                   │
  │  │  │          v                                   │
  │  │  │   LINE_DONE                                  │
  │  │  │   swap line buffer                           │
  │  │  │   line_counter++                             │
  │  │  │          │                                   │
  │  │  │   line < 60? ────────────────────────────────┘
  │  │  │          │
  │  │  │          v
  │  │  │   FRAME_DONE ───────────────────> WAIT_FRAME
  │  │  │   (pulse frame_sync)
```

## Closest Hit Tracking

During the primary intersection loop (and shadow/reflection loops), the controller maintains:

```systemverilog
logic signed [15:0] closest_t;          // Smallest positive t so far
logic [1:0]         closest_obj_idx;    // Which object was closest
logic               any_hit;            // True if at least one hit found

// Update logic (after each intersect_done):
always_ff @(posedge clk) begin
    if (state == TRACE_PRIMARY && obj_idx == 0) begin
        closest_t <= 16'h7FFF;  // Max positive Q4.12
        any_hit <= 0;
    end
    if (intersect_done && intersect_hit && intersect_t > 0 && intersect_t < closest_t) begin
        closest_t <= intersect_t;
        closest_obj_idx <= obj_idx;
        any_hit <= 1;
    end
end
```

For shadow rays, any hit with 0 < t < distance_to_light means the point is in shadow.

## Line Buffer Swap Timing

The VGA output displays each rendered line for 8 VGA scan lines. The controller must complete one 80-pixel line of computation within those 8 scan lines.

```
VGA lines 0-7:     Display rendered line 0, compute rendered line 1
VGA lines 8-15:    Display rendered line 1, compute rendered line 2
...
VGA lines 472-479: Display rendered line 59, compute rendered line 0 (next frame)
VGA lines 480-524: Vertical blanking, continue computing
```

Budget per rendered line: 8 VGA lines x 800 pixel-clocks x 2 (system clock ratio) = 12,800 system clocks.

If a line takes longer than 12,800 clocks, the controller skips a rendered line (repeats the previous one). This provides graceful degradation rather than tearing.

## Background Color

When no object is hit, the pixel receives the background color:
```
background = 6'b00_00_10  // dark blue (R=0, G=0, B=2)
```

## Color Blending for Reflections

Simple shift-based blending:
```
final_color = (primary_color >> 1) + (reflect_color >> 1)
// This is a 50/50 blend. For configurable reflectivity:
// final_color = primary_color * (1 - reflectivity) + reflect_color * reflectivity
// Approximated as shift if reflectivity is 0.5
```

## Resource Estimate

| Component | GE |
|-----------|-----|
| Main FSM (~15 states) | 80 |
| Pixel counter (7-bit) | 10 |
| Line counter (6-bit) | 10 |
| Object counter (2-bit) | 5 |
| Closest hit registers | 40 |
| Shadow/reflect state | 20 |
| Color blending logic | 30 |
| Line buffer write control | 15 |
| **Total** | **~210** |

(Does not include the line buffer memory itself -- see vga-output.md)

## Dependencies
- **scene_memory** -- configuration (num_objects, enable_shadows, enable_reflections)
- **ray_generation** -- controlled via pixel_x, pixel_y, ray_type
- **intersection_unit** -- start/done/hit/t handshake
- **shading_unit** -- start/done/color handshake
- **vga_output** -- line timing, buffer swap
