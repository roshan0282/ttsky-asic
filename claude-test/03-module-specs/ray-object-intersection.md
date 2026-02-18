# Module Spec: Ray-Object Intersection Unit

## Overview
Micro-sequenced ray-sphere intersection engine. Instead of a deep parallel pipeline (like the current 6-stage design), this unit issues individual math operations to the shared math unit one at a time. This dramatically reduces area at the cost of higher latency per intersection.

## Interface

```systemverilog
module intersection_unit (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,

    // Ray parameters (Q4.12)
    input  logic signed [15:0] ray_ox, ray_oy, ray_oz,
    input  logic signed [15:0] ray_dx, ray_dy, ray_dz,

    // Object parameters (Q4.12)
    input  logic signed [15:0] obj_cx, obj_cy, obj_cz,
    input  logic signed [15:0] obj_radius,

    // Math unit interface (shared)
    output logic signed [15:0] math_a,
    output logic signed [15:0] math_b,
    output logic [2:0]         math_op,
    output logic               math_start,
    input  logic signed [31:0] math_result,
    input  logic               math_done,

    // Results
    output logic               hit,
    output logic signed [15:0] t_value,       // Q4.12
    output logic signed [15:0] hit_x,         // Q4.12 hit point
    output logic signed [15:0] hit_y,
    output logic signed [15:0] hit_z,
    output logic signed [15:0] normal_x,      // Q4.12 surface normal (unnormalized)
    output logic signed [15:0] normal_y,
    output logic signed [15:0] normal_z,
    output logic               done
);
```

## Algorithm: Ray-Sphere Intersection

Quadratic equation: at^2 + bt + c = 0

Where:
- oc = ray_origin - sphere_center
- a = dot(ray_dir, ray_dir)
- b = 2 * dot(oc, ray_dir)
- c = dot(oc, oc) - radius^2
- discriminant = b^2 - 4ac

Using the half-b optimization (b_half = dot(oc, ray_dir)):
- discriminant/4 = b_half^2 - a*c
- t = (-b_half - sqrt(disc/4)) / a

## Micro-Sequenced Operation Schedule

Each step issues one operation to the shared math unit.

```
Step  | Operation              | Math Op  | Cycles | Register Written
------|------------------------|----------|--------|------------------
 0    | oc_x = ray_ox - obj_cx | SUB      | 1      | oc_x
 1    | oc_y = ray_oy - obj_cy | SUB      | 1      | oc_y
 2    | oc_z = ray_oz - obj_cz | SUB      | 1      | oc_z
 3    | acc = dx * dx           | MUL      | 1      | (accumulator)
 4    | acc += dy * dy          | MUL_ACC  | 1      | (accumulator)
 5    | acc += dz * dz          | MUL_ACC  | 1      | a = acc >>> 12
 6    | acc = oc_x * dx         | MUL      | 1      | (accumulator)
 7    | acc += oc_y * dy        | MUL_ACC  | 1      | (accumulator)
 8    | acc += oc_z * dz        | MUL_ACC  | 1      | b_half = acc >>> 12
 9    | acc = oc_x * oc_x       | MUL      | 1      | (accumulator)
10    | acc += oc_y * oc_y      | MUL_ACC  | 1      | (accumulator)
11    | acc += oc_z * oc_z      | MUL_ACC  | 1      | oc_dot_oc = acc
12    | r_sq = radius * radius  | MUL      | 1      | r_sq
13    | c = oc_dot_oc - r_sq    | SUB(32b) | 1      | c (Q8.24)
14    | bh_sq = b_half * b_half | MUL      | 1      | bh_sq (Q8.24)
15    | a_c = a * c             | MUL      | 1      | a_c (Q8.24)
16    | disc4 = bh_sq - a_c     | SUB(32b) | 1      | disc4
      | if disc4 < 0 → MISS, done
17    | sqrt_d = sqrt(disc4)    | SQRT     | 16     | sqrt_d (Q4.12)
18    | neg_bh = 0 - b_half     | SUB      | 1      | neg_bh
19    | numer = neg_bh - sqrt_d  | SUB      | 1      | numer
20    | t = numer / a            | DIV      | 16     | t_value
      | if t < 0 → MISS, done
---   | HIT PATH (compute hit point + normal)
21    | hx = t * dx              | MUL      | 1      | (temp)
22    | hit_x = ray_ox + hx     | ADD      | 1      | hit_x
23    | hy = t * dy              | MUL      | 1      | (temp)
24    | hit_y = ray_oy + hy     | ADD      | 1      | hit_y
25    | hz = t * dz              | MUL      | 1      | (temp)
26    | hit_z = ray_oz + hz     | ADD      | 1      | hit_z
27    | normal_x = hit_x - cx   | SUB      | 1      | normal_x
28    | normal_y = hit_y - cy   | SUB      | 1      | normal_y
29    | normal_z = hit_z - cz   | SUB      | 1      | normal_z
```

### Cycle Count Summary

| Outcome | Steps | Total Cycles |
|---------|-------|-------------|
| Miss (disc < 0) | 0-16 | 17 |
| Miss (t < 0) | 0-20 | 37 (17 steps + 16 sqrt + 4 steps) |
| Hit | 0-29 | 57 (17 + 16 sqrt + 16 div + 8 hit/normal) |

Average case (50% hit rate): ~37 cycles per object.

## Internal State Machine

```
IDLE ──start──> COMPUTE_OC
  │
  v
COMPUTE_OC (steps 0-2, 3 cycles)
  │
  v
COMPUTE_A (steps 3-5, 3 cycles)
  │
  v
COMPUTE_B_HALF (steps 6-8, 3 cycles)
  │
  v
COMPUTE_C (steps 9-13, 5 cycles)
  │
  v
COMPUTE_DISC (steps 14-16, 3 cycles)
  │
  ├──disc < 0──> MISS ──> IDLE (done, hit=0)
  v
COMPUTE_SQRT (step 17, 16 cycles)
  │
  v
COMPUTE_T (steps 18-20, 2 + 16 cycles)
  │
  ├──t < 0──> MISS ──> IDLE (done, hit=0)
  v
COMPUTE_HIT_POINT (steps 21-26, 6 cycles)
  │
  v
COMPUTE_NORMAL (steps 27-29, 3 cycles)
  │
  v
HIT ──> IDLE (done, hit=1, all outputs valid)
```

## Intermediate Registers

| Register | Width | Purpose |
|----------|-------|---------|
| oc_x, oc_y, oc_z | 16-bit | Origin-center difference |
| a | 16-bit | dot(dir, dir) |
| b_half | 16-bit | dot(oc, dir) |
| c | 32-bit | dot(oc,oc) - r^2 (kept in Q8.24 for precision) |
| disc4 | 32-bit | Discriminant/4 (Q8.24) |
| sqrt_d | 16-bit | sqrt(disc/4) |
| t_value | 16-bit | Intersection distance |
| step_counter | 5-bit | Current micro-operation index |

Total register storage: ~200 bits = ~200 flip-flops.

## Resource Estimate

| Component | GE |
|-----------|-----|
| FSM (10 states) | 50 |
| Step counter + decoder | 30 |
| Intermediate registers (~200 bits) | 200 |
| Math unit interface mux | 30 |
| Comparison logic (disc < 0, t < 0) | 20 |
| **Total** | **~330** |

This does NOT include the math unit itself (shared, ~950 GE separately).

## Dependencies
- **math_unit** -- all arithmetic operations delegated to shared math unit
- **scanline_controller** -- provides start signal and selects which object's parameters to test

## Existing Code Reference
- Replaces the 6-stage pipeline in `ray_sphere_intersect.sv`. The algorithm is identical but execution is sequential rather than parallel.
- The same 8 test vectors from `tb_ray_sphere_intersect.sv` should produce identical hit/miss results (t_values may differ slightly due to Q4.12 vs Q8.8 precision).
