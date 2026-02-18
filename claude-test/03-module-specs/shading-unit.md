# Module Spec: Shading Unit

## Overview
Computes Blinn-Phong lighting for a hit point. Also generates shadow ray directions and reflection ray directions. Reuses the shared math unit for all dot products and multiplies.

## Interface

```systemverilog
module shading_unit (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic [1:0]  shade_mode,      // 00=full, 01=shadow_check, 10=reflection_dir

    // Hit point data (Q4.12)
    input  logic signed [15:0] hit_x, hit_y, hit_z,
    input  logic signed [15:0] normal_x, normal_y, normal_z,

    // Incoming ray direction (Q4.12, for reflection computation)
    input  logic signed [15:0] ray_dir_x, ray_dir_y, ray_dir_z,

    // Light parameters (from scene memory, Q4.12)
    input  logic signed [15:0] light_x, light_y, light_z,
    input  logic signed [15:0] light_r, light_g, light_b,  // light color (0-1 range)

    // Material parameters (from scene memory, Q4.12)
    input  logic signed [15:0] mat_r, mat_g, mat_b,        // material color (0-1 range)
    input  logic signed [15:0] mat_specular,                // specular coefficient
    input  logic signed [15:0] mat_reflectivity,            // 0 = none, 0.5 = half

    // Shadow test result (from scanline controller)
    input  logic               in_shadow,

    // Camera position (for specular, Q4.12)
    input  logic signed [15:0] cam_x, cam_y, cam_z,

    // Math unit interface
    output logic signed [15:0] math_a, math_b,
    output logic [2:0]         math_op,
    output logic               math_start,
    input  logic signed [31:0] math_result,
    input  logic               math_done,

    // Outputs
    output logic [5:0]         pixel_color,    // 2 bits per channel: {RR, GG, BB}
    output logic signed [15:0] reflect_dir_x,  // reflection direction for bounce
    output logic signed [15:0] reflect_dir_y,
    output logic signed [15:0] reflect_dir_z,
    output logic signed [15:0] shadow_dir_x,   // direction toward light
    output logic signed [15:0] shadow_dir_y,
    output logic signed [15:0] shadow_dir_z,
    output logic               done
);
```

## Blinn-Phong Lighting Model

### Formula
```
color = ambient + diffuse + specular

ambient  = material_color * 0.1
diffuse  = material_color * light_color * max(0, dot(N, L))
specular = light_color * pow(max(0, dot(N, H)), shininess)

where:
  N = surface normal (from intersection unit, unnormalized)
  L = light_pos - hit_point (unnormalized direction to light)
  V = cam_pos - hit_point (unnormalized direction to camera)
  H = L + V (half-vector, unnormalized)
```

### Hardware Simplifications
1. **No normalization**: Use unnormalized vectors. The dot product magnitude is proportional to the squared lengths of the vectors, but for visual quality at 2-bit color depth, this is acceptable.
2. **Shininess approximation**: Instead of `pow(x, n)`, use `x >> shift_amount` where shift_amount approximates log2(n). For shininess=8, use `(dot_NH > threshold) ? 1 : 0` -- binary specular.
3. **Color quantization**: All intermediate colors are computed in Q4.12, then quantized to 2-bit per channel at the end: `color_2bit = saturated_color[11:10]` (top 2 fractional bits, assuming color in [0, 1) range).

## Micro-Sequence (Full Shading, shade_mode = 00)

```
Step  | Operation                    | Cycles | Notes
------|------------------------------|--------|------
 0    | L_x = light_x - hit_x       | 1      | Direction to light
 1    | L_y = light_y - hit_y       | 1      |
 2    | L_z = light_z - hit_z       | 1      |
 3    | acc = N_x * L_x             | 1      | dot(N, L)
 4    | acc += N_y * L_y            | 1      |
 5    | acc += N_z * L_z            | 1      | N_dot_L = acc >>> 12
      | if N_dot_L < 0: N_dot_L = 0 (clamp)
 6    | V_x = cam_x - hit_x        | 1      | Direction to camera
 7    | V_y = cam_y - hit_y        | 1      |
 8    | V_z = cam_z - hit_z        | 1      |
 9    | H_x = L_x + V_x            | 1      | Half-vector
10    | H_y = L_y + V_y            | 1      |
11    | H_z = L_z + V_z            | 1      |
12    | acc = N_x * H_x            | 1      | dot(N, H)
13    | acc += N_y * H_y           | 1      |
14    | acc += N_z * H_z           | 1      | N_dot_H = acc >>> 12
      | specular = (N_dot_H > threshold) ? mat_specular : 0
15    | diff_r = mat_r * N_dot_L   | 1      | Diffuse color (red)
16    | diff_g = mat_g * N_dot_L   | 1      | Diffuse color (green)
17    | diff_b = mat_b * N_dot_L   | 1      | Diffuse color (blue)
      | Apply shadow: if in_shadow, zero out diffuse and specular
18    | Combine: final_r = ambient_r + diff_r + specular_r | 1 | Addition
19    | Combine: final_g = ambient_g + diff_g + specular_g | 1 |
20    | Combine: final_b = ambient_b + diff_b + specular_b | 1 |
21    | Quantize to 6-bit pixel_color | 0 (combinational) |
```

Total: ~21 cycles for full shading.

### Shadow Direction (shade_mode = 01)
```
Step  | Operation                    | Cycles
------|------------------------------|-------
 0    | shadow_dir_x = light_x - hit_x | 1
 1    | shadow_dir_y = light_y - hit_y | 1
 2    | shadow_dir_z = light_z - hit_z | 1
```
Total: 3 cycles.

### Reflection Direction (shade_mode = 10)
```
  reflect = dir - 2 * dot(dir, normal) * normal

Step  | Operation                     | Cycles
------|-------------------------------|-------
 0    | acc = dir_x * N_x            | 1      | dot(dir, N)
 1    | acc += dir_y * N_y           | 1      |
 2    | acc += dir_z * N_z           | 1      | d_dot_n = acc >>> 12
 3    | two_d = d_dot_n << 1         | 0      | 2 * dot(dir, N)
 4    | temp = two_d * N_x           | 1      | 2*dot*N_x
 5    | reflect_x = dir_x - temp     | 1      |
 6    | temp = two_d * N_y           | 1      |
 7    | reflect_y = dir_y - temp     | 1      |
 8    | temp = two_d * N_z           | 1      |
 9    | reflect_z = dir_z - temp     | 1      |
```
Total: 9 cycles.

## Color Quantization

```systemverilog
// Convert Q4.12 color (range 0.0 to ~1.0) to 2-bit value
// Clamp to [0, 1), then take bits [11:10]
function automatic logic [1:0] quantize_color(logic signed [15:0] color_q412);
    if (color_q412 < 0) return 2'b00;
    if (color_q412 >= 16'h1000) return 2'b11;  // >= 1.0 saturates
    return color_q412[11:10];
endfunction

// Final pixel: {R[1:0], G[1:0], B[1:0]}
assign pixel_color = {quantize_color(final_r), quantize_color(final_g), quantize_color(final_b)};
```

## Resource Estimate

| Component | GE |
|-----------|-----|
| FSM (5 states x 3 modes) | 50 |
| Intermediate registers (L, V, H, dot products) | 100 |
| Clamp/comparison logic | 20 |
| Color quantization | 20 |
| Math unit interface | 20 |
| **Total** | **~210** |

## Dependencies
- **math_unit** -- all multiplies and dot products
- **intersection_unit** -- provides hit point and normal
- **scene_memory** -- provides light position, material colors
- **scanline_controller** -- provides shadow test result, selects shade_mode
