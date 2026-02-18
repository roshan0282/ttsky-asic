# Fixed-Point Math Reference

## 1. Format Selection: Q4.12

### Comparison

| Property | Q8.8 (current) | Q4.12 (recommended) |
|----------|----------------|---------------------|
| Total bits | 16 | 16 |
| Signed | Yes (2's complement) | Yes (2's complement) |
| Integer bits | 8 | 4 |
| Fractional bits | 8 | 12 |
| Range | [-128.0, +127.996] | [-8.0, +7.9998] |
| Precision | 1/256 = 0.00391 | 1/4096 = 0.000244 |
| Multiply result | 32-bit Q16.16 | 32-bit Q8.24 |

### Why Q4.12

1. **Precision matters more than range** for ray tracing. The discriminant computation (b^2 - 4ac) involves subtracting large similar values. With Q8.8, only 8 fractional bits survive -- grazing rays produce garbage. Q4.12 gives 12 fractional bits, 16x better.

2. **Range [-8, +8] is sufficient.** Normalize scene coordinates so all objects, camera, and lights fit within this range. The current code uses coordinates like (0, 0, -10) which is outside Q4.12 range, but can be rescaled to (0, 0, -5) with proportionally smaller radius.

3. **Same wire width.** All datapaths remain 16-bit. No hardware cost increase.

4. **Multiply products fit 32 bits.** Q4.12 x Q4.12 = Q8.24 in 32 bits. Truncate back to Q4.12 by taking bits [23:12] (right-shift 12).

### Encoding Examples

```
Q4.12 encoding: value = integer_bits.fractional_bits
  1.0    = 0x1000 = 16'b0001_000000000000
  0.5    = 0x0800 = 16'b0000_100000000000
  -1.0   = 0xF000 = 16'b1111_000000000000
  0.25   = 0x0400
  7.999  = 0x7FFF
  -8.0   = 0x8000
  0.001  = 0x0004 (actually 0.000977, closest representable)
  3.14   = 0x3243 (actually 3.14111...)
```

### Conversion Functions (for testbenches)

```systemverilog
// Float to Q4.12
function automatic logic signed [15:0] to_q4_12(real value);
    return $rtoi(value * 4096.0);
endfunction

// Q4.12 to float
function automatic real from_q4_12(logic signed [15:0] value);
    return $itor($signed(value)) / 4096.0;
endfunction
```

## 2. Arithmetic Operations

### Addition / Subtraction
- **Operation**: Direct 16-bit signed add/sub
- **Cycles**: 1
- **Hardware**: 16-bit adder (~50 GE)
- **Overflow**: Must check. Sum of two Q4.12 values can overflow. In practice, intermediate sums (like dot products) may need 32-bit accumulators.
- **Implementation**: Standard `+` / `-` operators

```
  Q4.12 + Q4.12 = Q4.12 (if no overflow)
  Example: 1.5 + 2.25 = 3.75
    0x1800 + 0x2400 = 0x3C00 = 3.75  (correct)
```

### Multiplication
- **Operation**: 16x16 signed multiply, producing 32-bit Q8.24 result
- **Cycles**: 1 (single-cycle combinational or registered)
- **Hardware**: ~600 GE (Booth-encoded or array multiplier)
- **Truncation**: To get Q4.12 result, take bits [23:12] of the 32-bit product

```
  Q4.12 x Q4.12 = Q8.24 (32 bits)
  Truncate to Q4.12: result[23:12]

  Example: 1.5 x 2.0 = 3.0
    0x1800 * 0x2000 = 0x03000000 (Q8.24)
    result[23:12] = 0x3000 >> 12 = 0x0300... wait, let me recalculate:
    0x1800 = 6144 (decimal)
    0x2000 = 8192 (decimal)
    product = 6144 * 8192 = 50,331,648 = 0x03000000
    bits [23:12] = 0x03000000 >> 12 = 0x3000 ... hmm
    Actually: 0x03000000 in binary:
    bits [31:24] = 0x03, bits [23:12] = 0x000, bits [11:0] = 0x000
    That's wrong. Let me reconsider.

    Correct approach:
    product_32 = a_16 * b_16  (signed multiply, 32-bit result)
    q4_12_result = product_32 >>> 12  (arithmetic right shift by 12)

    6144 * 8192 = 50,331,648
    50,331,648 >>> 12 = 12,288 = 0x3000 = 3.0 in Q4.12  (correct!)
```

### Truncation Rule
```
For any Q4.12 x Q4.12 multiply:
  product_32 = operand_a * operand_b;     // 32-bit signed result (Q8.24)
  result_16  = product_32[23:12];         // Take middle 12 bits = Q4.12
  // Equivalently: product_32 >>> 12, then take low 16 bits
```

### Division (Iterative Non-Restoring)
- **Operation**: 16-bit / 16-bit producing Q4.12 quotient
- **Cycles**: 16 (one bit per cycle)
- **Hardware**: Reuses adder + shift register (~100 GE extra beyond adder)
- **Algorithm**:
  1. Scale dividend left by 12 bits (to maintain Q4.12 precision)
  2. Perform 16-step non-restoring division
  3. Result is Q4.12

```
  Q4.12 / Q4.12 = Q4.12

  Example: 3.0 / 2.0 = 1.5
    dividend = 0x3000 = 12288
    divisor  = 0x2000 = 8192
    scaled_dividend = 12288 << 12 = 50,331,648
    quotient = 50,331,648 / 8192 = 6144 = 0x1800 = 1.5  (correct)
```

### Square Root (Iterative Binary Restoring)
- **Operation**: sqrt of Q8.24 (32-bit) producing Q4.12 result
- **Cycles**: 16 (one bit per cycle)
- **Hardware**: Reuses adder + shift register (~100 GE extra)
- **Algorithm**: Digit-by-digit binary square root
  1. Input: 32-bit Q8.24 value (e.g., from a multiply product)
  2. Process 2 bits per iteration, 16 iterations for 32-bit input
  3. Output: 16-bit Q4.12 square root

```
  sqrt(Q8.24) = Q4.12

  Example: sqrt(4.0) = 2.0
    input_q8_24 = 4.0 * 2^24 = 67,108,864 = 0x04000000
    sqrt(67,108,864) = 8192
    8192 in Q4.12 = 2.0  (correct)
```

### Dot Product (3D)
- **Operation**: a.x*b.x + a.y*b.y + a.z*b.z
- **Cycles**: 5 (3 multiplies + 2 additions, sequential on shared math unit)
- **Accumulation**: Use 32-bit accumulator (Q8.24) to avoid overflow during sum, truncate to Q4.12 at the end

```
  Step 1: acc = a.x * b.x          (Q8.24, 1 cycle)
  Step 2: temp = a.y * b.y         (Q8.24, 1 cycle)
  Step 3: acc = acc + temp          (Q8.24, 1 cycle)
  Step 4: temp = a.z * b.z         (Q8.24, 1 cycle)
  Step 5: acc = acc + temp          (Q8.24, 1 cycle)
  result = acc >>> 12               (Q4.12)
```

### Cross Product (3D)
- **Operation**: (a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x)
- **Cycles**: 9 (6 multiplies + 3 subtractions)
- **Note**: Only needed for triangle intersection (future extension)

## 3. Precision Analysis: Ray-Sphere Intersection

### Worked Example

Scene: Camera at (0, 0, -5), Sphere at (0, 0, 3) radius 2.0, Ray straight ahead.

```
Q4.12 values:
  ray_origin = (0x0000, 0x0000, 0xB000)  // (0, 0, -5.0)
  ray_dir    = (0x0000, 0x0000, 0x1000)  // (0, 0, 1.0)
  sphere_ctr = (0x0000, 0x0000, 0x3000)  // (0, 0, 3.0)
  sphere_rad = 0x2000                     // 2.0

Step 1: oc = origin - center
  oc = (0, 0, -5.0 - 3.0) = (0, 0, -8.0)
  oc_z = 0xB000 - 0x3000 = 0x8000 = -8.0
  NOTE: -8.0 is the minimum representable value in Q4.12. This is at the edge.
  For safety, normalize scenes to [-6, +6] range.

Step 2-3: Dot products
  a = dir . dir = 0 + 0 + 1.0*1.0 = 1.0
    = 0x1000 * 0x1000 = 0x01000000 (Q8.24) >>> 12 = 0x1000 = 1.0

  b_half = oc . dir = 0 + 0 + (-8.0)*(1.0) = -8.0
    = 0x8000 * 0x1000 = 0xF8000000 (Q8.24, signed) >>> 12 = 0x8000...
    Hmm, this overflows Q4.12. b_half = -8.0 is exactly at the boundary.
    b = 2 * b_half = -16.0 which OVERFLOWS Q4.12 range.

  SOLUTION: Keep b_half in Q8.24 (32-bit) and compute discriminant in 32-bit.
  b_half_q8_24 = 0xF8000000 = -8.0 in Q8.24

  c_part = oc . oc = 0 + 0 + 64.0 = 64.0 (OVERFLOWS Q4.12!)
  SOLUTION: Keep in Q8.24 accumulator. 64.0 in Q8.24 = 0x40000000. Fits in 32 bits.

  c = oc.oc - r^2 = 64.0 - 4.0 = 60.0
  In Q8.24: 0x40000000 - 0x04000000 = 0x3C000000 = 60.0

Step 4: Discriminant = b_half^2 - a*c (using b_half to avoid 2x overflow)
  Discriminant/4 = b_half^2 - a*c
  b_half^2 = (-8.0)^2 = 64.0
  a*c = 1.0 * 60.0 = 60.0
  disc/4 = 64.0 - 60.0 = 4.0
  disc/4 > 0 => HIT

  In Q8.24:
  b_half_sq = 0x40000000
  a_c = 0x3C000000
  disc_4 = 0x04000000 = 4.0

Step 5: sqrt(disc/4) = 2.0
  Input Q8.24: 0x04000000
  Output Q4.12: 0x2000 = 2.0

Step 6: t = (-b_half - sqrt(disc/4)) / a = (8.0 - 2.0) / 1.0 = 6.0
  t = 0x6000 = 6.0 in Q4.12
  This means the hit point is at origin + 6.0 * direction = (0, 0, -5+6) = (0, 0, 1.0)
  Distance from sphere center to hit: |1.0 - 3.0| = 2.0 = radius. Correct!
```

### Key Insight: Use 32-bit Accumulators for Intermediates

The dot products `oc.oc` and `b*b` can produce values exceeding Q4.12 range. **All intermediate accumulations must use 32-bit Q8.24 format.** Only the final results (t_value, normal components) are truncated back to Q4.12.

The math unit operates on 16-bit Q4.12 inputs but maintains a 32-bit Q8.24 accumulator internally.

### Catastrophic Cancellation Analysis

**Worst case**: Grazing ray where discriminant is near zero.

With Q8.8: discriminant products are Q16.16 (16 fractional bits). After subtracting two similar Q16.16 values, you may be left with only 2-4 meaningful fractional bits. sqrt of such a small number produces near-zero with large relative error.

With Q4.12: discriminant products are Q8.24 (24 fractional bits). After subtraction, ~10-12 meaningful fractional bits remain. sqrt precision is adequate for determining hit/miss and computing a usable normal.

**Recommendation**: For the discriminant computation specifically, consider using the full 32-bit Q8.24 products without truncation. The shared math unit should support 32-bit accumulation.

## 4. Hardware Cost Summary

| Operation | Cycles | Extra GE (beyond shared adder) | Notes |
|-----------|--------|-------------------------------|-------|
| Add/Sub | 1 | 0 (base adder) | 16-bit, included in math unit |
| Multiply | 1 | ~600 | 16x16 signed multiplier |
| Divide | 16 | ~100 | Iterative, reuses adder + shifter |
| Sqrt | 16 | ~100 | Iterative, reuses adder + shifter |
| 32-bit accumulator | 0 | ~50 | Register + mux for Q8.24 intermediate storage |
| **Math unit total** | -- | **~850-1000** | Including control FSM |
