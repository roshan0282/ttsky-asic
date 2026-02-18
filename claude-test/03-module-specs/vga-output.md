# Module Spec: VGA Output

## Overview
Generates standard VGA 640x480@60Hz timing signals and reads pixel data from the double line buffer with 8x upscaling to fill the full resolution display.

## Interface

```systemverilog
module vga_output (
    input  logic        clk,             // 50 MHz system clock
    input  logic        rst,

    // Line buffer read port (active buffer selected internally)
    output logic [6:0]  lb_read_addr,    // 0-79
    input  logic [5:0]  lb_read_data,    // 6-bit color {RR, GG, BB}

    // Line buffer swap control (from scanline_controller)
    input  logic        lb_swap,

    // VGA timing outputs (directly drives TT pins)
    output logic        hsync,
    output logic        vsync,

    // Color outputs (2 bits per channel)
    output logic [1:0]  red,
    output logic [1:0]  green,
    output logic [1:0]  blue,

    // Status outputs for scanline_controller
    output logic [9:0]  vga_line,        // Current VGA line (0-524)
    output logic        line_start,      // Pulse at start of each line
    output logic        visible          // High during visible area
);
```

## VGA Timing Parameters

Standard 640x480 @ 60Hz timing (pixel clock = 25MHz):

```
HORIZONTAL (in pixel clocks):
  Visible:     640 pixels (0-639)
  Front porch: 16  pixels (640-655)
  Sync pulse:  96  pixels (656-751)
  Back porch:  48  pixels (752-799)
  Total:       800 pixels per line

VERTICAL (in lines):
  Visible:     480 lines (0-479)
  Front porch: 10  lines (480-489)
  Sync pulse:  2   lines (490-491)
  Back porch:  33  lines (492-524)
  Total:       525 lines per frame

Sync polarity: Active low (hsync/vsync low during sync pulse)
Frame rate:    25,000,000 / (800 * 525) = 59.52 Hz
```

## Pixel Clock Divider

```systemverilog
logic pixel_clk_en;  // Enables every other cycle (25MHz effective)
logic pixel_toggle;

always_ff @(posedge clk or posedge rst) begin
    if (rst) pixel_toggle <= 0;
    else pixel_toggle <= ~pixel_toggle;
end

assign pixel_clk_en = pixel_toggle;  // Active on every other system clock
```

All counters advance only when `pixel_clk_en` is high.

## Double Line Buffer

Two SRAM-like buffers of 80 x 6 bits each:

```systemverilog
logic [5:0] buffer_a [0:79];
logic [5:0] buffer_b [0:79];
logic       active_display;  // 0 = display A, compute B; 1 = display B, compute A

// Swap on scanline_controller signal
always_ff @(posedge clk) begin
    if (rst) active_display <= 0;
    else if (lb_swap) active_display <= ~active_display;
end

// Read port (display side)
assign lb_read_data = active_display ? buffer_b[lb_read_addr] : buffer_a[lb_read_addr];

// Write port (compute side, directly connected to scanline_controller)
// The scanline_controller writes to the inactive buffer
```

Total memory: 2 x 80 x 6 = 960 bits = 960 flip-flops (~120 GE using latches or ~200 GE with flip-flops).

## 8x Upscaling

Each 80-pixel rendered line maps to 640 VGA pixels (8x horizontal).
Each rendered line repeats for 8 VGA scan lines (8x vertical).

```systemverilog
// Horizontal: read address = h_counter / 8 (during visible period)
assign lb_read_addr = h_counter[9:3];  // Divide by 8

// Vertical: rendered line index = v_counter / 8 (during visible period)
wire [5:0] rendered_line = v_counter[9:3];  // 0-59

// The rendered_line value is used by the scanline_controller to know
// which line to compute next (rendered_line + 1, wrapping)
```

## Color Output

```systemverilog
// During visible area, output the buffered color
// During blanking, output black
always_comb begin
    if (visible) begin
        red   = lb_read_data[5:4];
        green = lb_read_data[3:2];
        blue  = lb_read_data[1:0];
    end else begin
        red   = 2'b00;
        green = 2'b00;
        blue  = 2'b00;
    end
end
```

## TinyTapeout Pin Packing

The VGA color and sync signals are packed into `uo_out[7:0]` per the TT VGA standard:

```
uo_out[7] = hsync
uo_out[6] = blue[0]   (LSB of blue)
uo_out[5] = green[0]  (LSB of green)
uo_out[4] = red[0]    (LSB of red)
uo_out[3] = vsync
uo_out[2] = blue[1]   (MSB of blue)
uo_out[1] = green[1]  (MSB of green)
uo_out[0] = red[1]    (MSB of red)
```

This is the same format as the existing `tt_um_vga_raytracer.sv` (lines 48-55).

## Resource Estimate

| Component | GE |
|-----------|-----|
| Pixel clock divider | 5 |
| H counter (10-bit) | 15 |
| V counter (10-bit) | 15 |
| Sync pulse comparators | 20 |
| Double line buffer (960 FFs) | 200 |
| Read address logic | 10 |
| Color mux + blanking | 10 |
| Pin packing | 5 |
| **Total** | **~280** |

## Existing Code Reference
- VGA timing from `vga_raytracer.sv` lines 20-81 is directly reusable. The counter and sync generation logic is identical.
- Pin packing from `tt_um_vga_raytracer.sv` lines 48-55 is directly reusable.
- The new addition is the line buffer read logic and 8x upscaling (replacing the direct per-pixel color generation).
