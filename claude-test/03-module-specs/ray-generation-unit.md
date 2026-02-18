# Module Spec: Ray Generation Unit

## Overview
Converts pixel coordinates to ray origin and direction vectors. Supports three ray types: primary (from camera through pixel), shadow (from hit point toward light), and reflection (from hit point in reflected direction).

## Interface

```systemverilog
module ray_generation (
    input  logic        clk,
    input  logic        rst,

    // Pixel coordinates (reduced resolution)
    input  logic [6:0]  pixel_x,         // 0-79
    input  logic [5:0]  pixel_y,         // 0-59

    // Ray type selection
    input  logic [1:0]  ray_type,        // 2'b00=primary, 2'b01=shadow, 2'b10=reflection

    // Camera parameters (from scene memory, Q4.12)
    input  logic signed [15:0] cam_pos_x,
    input  logic signed [15:0] cam_pos_y,
    input  logic signed [15:0] cam_pos_z,
    input  logic signed [15:0] cam_fov,  // FOV scaling factor

    // Override inputs for shadow/reflection rays (Q4.12)
    input  logic signed [15:0] hit_point_x,
    input  logic signed [15:0] hit_point_y,
    input  logic signed [15:0] hit_point_z,
    input  logic signed [15:0] override_dir_x,
    input  logic signed [15:0] override_dir_y,
    input  logic signed [15:0] override_dir_z,

    // Outputs (Q4.12)
    output logic signed [15:0] ray_origin_x,
    output logic signed [15:0] ray_origin_y,
    output logic signed [15:0] ray_origin_z,
    output logic signed [15:0] ray_dir_x,
    output logic signed [15:0] ray_dir_y,
    output logic signed [15:0] ray_dir_z,
    output logic               valid
);
```

## Internal Architecture

### Primary Ray Generation
Maps pixel (x, y) in [0..79, 0..59] to a ray direction:

```
  // Center the pixel coordinates
  centered_x = pixel_x - 40   // range [-40, +39]
  centered_y = pixel_y - 30   // range [-30, +29]

  // Scale by FOV factor and convert to Q4.12
  // FOV scaling: larger fov = wider field of view
  ray_dir_x = (centered_x * cam_fov) >>> 6   // scale down to Q4.12 range
  ray_dir_y = (centered_y * cam_fov) >>> 6   // negative Y because screen Y is inverted
  ray_dir_z = 0x1000                          // 1.0 in Q4.12 (forward)

  ray_origin = cam_pos
```

The `>>> 6` shift maps the [-40, +39] integer range scaled by fov into reasonable Q4.12 direction values. With fov = 1.0 (0x1000), the maximum direction component is 40/64 = 0.625, giving roughly a 60-degree horizontal FOV.

### Shadow Ray Generation
```
  ray_origin = hit_point + normal * epsilon  // slight offset to avoid self-intersection
  ray_dir    = light_pos - hit_point         // direction toward light (unnormalized)
```
The epsilon offset uses a small bias (0x0010 = ~0.004 in Q4.12) added along the normal direction.

### Reflection Ray Generation
```
  ray_origin = hit_point + normal * epsilon
  ray_dir    = override_dir  // pre-computed by shading unit: d - 2*dot(d,n)*n
```

### Ray Type Multiplexing
A simple 2:1 mux selects between primary ray outputs and override (shadow/reflection) outputs based on `ray_type`:

```systemverilog
always_comb begin
    case (ray_type)
        2'b00: begin  // Primary
            ray_origin_x = cam_pos_x;
            ray_origin_y = cam_pos_y;
            ray_origin_z = cam_pos_z;
            ray_dir_x    = primary_dir_x;
            ray_dir_y    = primary_dir_y;
            ray_dir_z    = primary_dir_z;
        end
        default: begin  // Shadow or Reflection
            ray_origin_x = hit_point_x;
            ray_origin_y = hit_point_y;
            ray_origin_z = hit_point_z;
            ray_dir_x    = override_dir_x;
            ray_dir_y    = override_dir_y;
            ray_dir_z    = override_dir_z;
        end
    endcase
end
```

## Pipeline Stages
- **Stage 0**: Combinational -- pixel centering, FOV scaling, mux selection
- **Stage 1**: Registered output (1 cycle latency)

Total: 1 cycle.

## Resource Estimate

| Component | GE |
|-----------|-----|
| Pixel centering (2 subtractors) | 30 |
| FOV multiply (uses shared math unit or shift) | 20 |
| 6:1 output mux (3 components x 2 mux) | 40 |
| Output registers (6 x 16-bit) | 100 |
| **Total** | **~190** |

**Note**: If the FOV multiply requires the shared math unit, it adds 1 cycle latency and a request to the math unit arbiter. For simplicity, the initial implementation can use a fixed FOV with shift-only scaling (no multiply needed).

## Dependencies
- Scene memory (camera parameters)
- Scanline controller (pixel coordinates, ray type)
- Shading unit (provides override direction for reflection rays)

## Existing Code Reference
- Current ray generation in `vga_raytracer.sv` lines 84-120. Uses `>>> 3` shift for direction scaling. The new design is similar but operates on 80x60 coordinates instead of 640x480, and adds the shadow/reflection mux.
