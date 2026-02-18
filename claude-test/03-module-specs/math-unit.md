# Module Spec: Shared Math Unit

## Overview
Single shared arithmetic unit providing multiply, add, subtract, divide, and square root operations. All other modules (intersection, shading, ray generation) issue operations to this unit via a request/done handshake.

## Interface

```systemverilog
module math_unit (
    input  logic        clk,
    input  logic        rst,

    // Operand inputs
    input  logic signed [15:0] operand_a,    // Q4.12
    input  logic signed [15:0] operand_b,    // Q4.12
    input  logic [2:0]         operation,    // See operation codes below
    input  logic               start,        // Pulse high to begin

    // Result output
    output logic signed [31:0] result,       // Q8.24 for multiply; Q4.12 (sign-extended to 32) for others
    output logic               done,         // Pulses high when result is valid
    output logic               busy          // High while operation in progress
);
```

### Operation Codes
```
3'b000 = MUL    : result = operand_a * operand_b (1 cycle, Q8.24 output)
3'b001 = ADD    : result = operand_a + operand_b (1 cycle, Q4.12 sign-extended)
3'b010 = SUB    : result = operand_a - operand_b (1 cycle, Q4.12 sign-extended)
3'b011 = DIV    : result = operand_a / operand_b (16 cycles, Q4.12 sign-extended)
3'b100 = SQRT   : result = sqrt(operand_a)       (16 cycles, Q4.12 sign-extended)
3'b101 = MUL_ACC: result = accumulator + operand_a * operand_b (1 cycle, Q8.24)
```

`MUL_ACC` (multiply-accumulate) is critical for dot products: it adds the product to the internal 32-bit accumulator without truncation, preserving precision across a 3-term dot product.

## Internal Architecture

```
                +-------------------+
  operand_a --->|                   |
  operand_b --->| 16x16 SIGNED     |---> product_32 (Q8.24)
                | MULTIPLIER       |
                +-------------------+
                         |
                         v
                +-------------------+
                | 32-BIT            |
                | ACCUMULATOR       |<--- acc_clear, acc_load
                | (Q8.24)           |
                +-------------------+
                         |
                +--------v----------+
                | 32-BIT            |
                | ADDER/SUBTRACTOR  |
                +-------------------+
                         |
                +--------v----------+
                | ITERATIVE         |
                | DIV/SQRT ENGINE   |
                | (16-cycle)        |
                | - shift register  |
                | - partial result  |
                +-------------------+
                         |
                +--------v----------+
                | OUTPUT MUX        |---> result [31:0]
                | + DONE LOGIC      |---> done, busy
                +-------------------+
```

## Operation Details

### Multiply (MUL) -- 1 cycle
```
result = $signed(operand_a) * $signed(operand_b);  // 32-bit Q8.24
done = 1 (same cycle as start)
```

### Multiply-Accumulate (MUL_ACC) -- 1 cycle
```
accumulator += $signed(operand_a) * $signed(operand_b);
result = accumulator;  // Q8.24
done = 1
```
The accumulator is cleared when a non-MUL_ACC operation is performed, or explicitly via a MUL with operand_a=0, operand_b=0.

### Add/Sub -- 1 cycle
```
result = {{16{sum[15]}}, sum};  // sign-extend Q4.12 to 32 bits
done = 1
```

### Division (DIV) -- 16 cycles
Non-restoring division algorithm:
1. Scale dividend: `scaled = operand_a << 12` (to maintain Q4.12 precision in quotient)
2. For each of 16 iterations:
   - If remainder >= 0: shift left, subtract divisor
   - If remainder < 0: shift left, add divisor
   - Record quotient bit
3. Final correction step if remainder is negative

### Square Root (SQRT) -- 16 cycles
Binary digit-by-digit restoring algorithm:
1. Input: operand_a interpreted as Q8.24 (the 16-bit input is left-shifted by 12 to create Q8.24, or the caller can provide a pre-scaled value via the accumulator)
2. For each of 16 iterations:
   - Try appending a 1-bit to the current root estimate
   - If (estimate+1)^2 <= remainder: keep the 1
   - Else: keep 0
3. Output: 16-bit Q4.12 square root

**Note**: For discriminant sqrt, the input is typically a Q8.24 value from the accumulator. The math unit should accept an `acc_as_input` control signal that routes the accumulator to the sqrt engine input instead of `operand_a`.

## Timing

| Operation | Latency (cycles) | Throughput |
|-----------|-----------------|------------|
| MUL | 1 | 1/cycle |
| MUL_ACC | 1 | 1/cycle |
| ADD | 1 | 1/cycle |
| SUB | 1 | 1/cycle |
| DIV | 16 | 1/16 cycles |
| SQRT | 16 | 1/16 cycles |

## Resource Estimate

| Component | GE |
|-----------|-----|
| 16x16 signed multiplier | 600 |
| 32-bit accumulator | 50 |
| 32-bit adder | 50 |
| Iterative div/sqrt engine | 150 |
| Control FSM + muxes | 100 |
| **Total** | **~950** |

## Dependencies
- None (leaf module). All other computation modules depend on this.

## Existing Code Reference
- Current design uses 9 parallel multipliers in `ray_sphere_intersect.sv` stage 2 (lines 85-113). This module replaces all of them with a single time-shared multiplier.
- The placeholder sqrt at line 178 and division at line 212 are replaced by the iterative engines in this module.
