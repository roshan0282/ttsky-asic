# Module Spec: TinyTapeout 4x4 Wrapper

## Overview
Top-level module conforming to the TinyTapeout interface standard. Routes external pins to internal modules and provides reset/clock management.

## Interface (TinyTapeout Standard)

```systemverilog
module tt_um_raytracer_top (
    input  logic        clk,        // 50 MHz system clock
    input  logic        rst_n,      // Active-low reset
    input  logic        ena,        // Module enable (active high)
    input  logic [7:0]  ui_in,      // Dedicated input pins
    input  logic [7:0]  uio_in,     // Bidirectional pins (as input)
    output logic [7:0]  uo_out,     // Dedicated output pins
    output logic [7:0]  uio_out,    // Bidirectional pins (as output)
    output logic [7:0]  uio_oe      // Bidirectional pin direction (1=output)
);
```

## Pin Allocation

### Output Pins: `uo_out[7:0]` -- VGA Display
```
Bit  | Signal     | Description
-----|------------|-------------------
  7  | hsync      | Horizontal sync (active low)
  6  | blue[0]    | Blue LSB
  5  | green[0]   | Green LSB
  4  | red[0]     | Red LSB
  3  | vsync      | Vertical sync (active low)
  2  | blue[1]    | Blue MSB
  1  | green[1]   | Green MSB
  0  | red[1]     | Red MSB
```
This matches the TinyTapeout VGA PMOD standard and is identical to the existing `tt_um_vga_raytracer.sv`.

### Input Pins: `ui_in[7:0]` -- Scene Data
```
Bit  | Signal     | Description
-----|------------|-------------------
 7:0 | data_byte  | Scene data byte for serial loading
```
During scene loading, each byte on `ui_in` is latched on the rising edge of the serial clock.

### Bidirectional Pins: `uio_in[7:0]` / `uio_out[7:0]`
```
Bit  | Direction | Signal          | Description
-----|-----------|-----------------|-------------------
  0  | Input     | serial_clk      | Rising edge latches data byte
  1  | Input     | chip_select     | Active high: enable scene loading
  2  | Input     | load_complete   | Pulse to finalize scene
  3  | Input     | reserved        | Future use
  4  | Input     | reserved        | Future use
  5  | Input     | reserved        | Future use
  6  | Output    | busy            | High during computation
  7  | Output    | frame_sync      | Pulses each frame
```

```systemverilog
assign uio_oe = 8'b11000000;  // Bits 7:6 are output, 5:0 are input
assign uio_out = {frame_sync, busy, 6'b000000};
```

## Internal Wiring

```systemverilog
// Reset handling
wire reset = ~rst_n;

// Scene memory interface
wire [7:0]  scene_data     = ui_in;
wire        serial_clk_pin = uio_in[0];
wire        chip_select    = uio_in[1];
wire        load_complete  = uio_in[2];

// VGA output signals
wire        hsync_int, vsync_int;
wire [1:0]  red_int, green_int, blue_int;

// Pack into TT output format
assign uo_out = {
    hsync_int,
    blue_int[0], green_int[0], red_int[0],
    vsync_int,
    blue_int[1], green_int[1], red_int[1]
};

// Module instantiation (see architecture overview for full hierarchy)
scene_memory u_scene_mem (
    .clk(clk), .rst(reset),
    .data_in(scene_data),
    .serial_clk(serial_clk_pin),
    .chip_select(chip_select),
    .load_complete(load_complete),
    // ... read ports connected to other modules
);

vga_output u_vga (
    .clk(clk), .rst(reset),
    .hsync(hsync_int), .vsync(vsync_int),
    .red(red_int), .green(green_int), .blue(blue_int),
    // ... line buffer connections
);

// ... scanline_controller, ray_generation, intersection_unit, shading_unit, math_unit
```

## TinyTapeout 4x4 Constraints

| Parameter | Spec |
|-----------|------|
| Tile size | 4x4 (approximately 4x the area of standard 1x1 tile) |
| IO pins | 8 input, 8 output, 8 bidirectional = 24 total |
| Clock | User-selectable, we use 50 MHz |
| Reset | Active-low, directly from TT infrastructure |
| Enable | `ena` pin, should gate clock or operation when low |
| Power | Must meet TT power budget (design-dependent) |

## Enable Pin Handling

```systemverilog
// Gate the internal clock when ena is low to save power
wire gated_clk = clk & ena;
// Or: use ena as a synchronous enable on all flip-flops
// The gated clock approach is simpler but may cause timing issues
// Recommendation: use ena as a synchronous enable on the scanline controller
```

## Resource Estimate

| Component | GE |
|-----------|-----|
| Pin packing logic | 5 |
| Reset synchronizer | 10 |
| Enable gating | 5 |
| Glue logic + wiring | 10 |
| **Total** | **~30** |

The wrapper itself is negligible. Total design area is dominated by the scene memory, math unit, and line buffer (see 06-area-budget.md).

## Existing Code Reference
- Current wrapper: `tt_um_vga_raytracer.sv` (62 lines). The pin packing format (lines 48-55) is directly reused. The new wrapper adds scene memory pin routing and status outputs on bidirectional pins.
