# Module Spec: Scene Memory Interface

## Overview
Stores scene data (objects, light, camera, configuration) in a register file. Provides a serial loading interface via TinyTapeout input pins and read ports for all other modules.

## Interface

```systemverilog
module scene_memory (
    input  logic        clk,
    input  logic        rst,

    // Serial loading interface (directly from TT pins)
    input  logic [7:0]  data_in,         // ui_in[7:0] -- byte to load
    input  logic        serial_clk,      // uio_in[0] -- rising edge latches data
    input  logic        chip_select,     // uio_in[1] -- active high enables loading
    input  logic        load_complete,   // uio_in[2] -- pulse to finalize scene

    // Status
    output logic        loading,         // High during scene load
    output logic        scene_valid,     // High after load_complete

    // Object read ports (active object selected by obj_idx)
    input  logic [1:0]  obj_idx,         // Which object (0-3)
    output logic signed [15:0] obj_center_x,
    output logic signed [15:0] obj_center_y,
    output logic signed [15:0] obj_center_z,
    output logic signed [15:0] obj_radius,
    output logic signed [15:0] obj_color_r,
    output logic signed [15:0] obj_color_g,
    output logic signed [15:0] obj_color_b,
    output logic signed [15:0] obj_specular,
    output logic signed [15:0] obj_reflectivity,

    // Light read port
    output logic signed [15:0] light_x, light_y, light_z,
    output logic signed [15:0] light_r, light_g, light_b,

    // Camera read port
    output logic signed [15:0] cam_x, cam_y, cam_z,
    output logic signed [15:0] cam_fov,

    // Configuration
    output logic [2:0]  num_objects,     // 1-4
    output logic        enable_shadows,
    output logic        enable_reflections
);
```

## Memory Layout

### Register Map (byte-addressed)

```
Address  | Field              | Width  | Description
---------|--------------------|---------|-----------
0x00-01  | obj[0].center_x   | 16-bit | Q4.12, sphere 0 center X
0x02-03  | obj[0].center_y   | 16-bit | Q4.12, sphere 0 center Y
0x04-05  | obj[0].center_z   | 16-bit | Q4.12, sphere 0 center Z
0x06-07  | obj[0].radius     | 16-bit | Q4.12, sphere 0 radius
0x08-09  | obj[0].color_r    | 16-bit | Q4.12, range [0, 1)
0x0A-0B  | obj[0].color_g    | 16-bit | Q4.12
0x0C-0D  | obj[0].color_b    | 16-bit | Q4.12
0x0E-0F  | obj[0].specular   | 16-bit | Q4.12, specular coefficient
0x10-11  | obj[0].reflectivity | 16-bit | Q4.12, 0=matte, 0.5=mirror-ish

0x12-23  | obj[1].*           | 18 bytes | Same layout as obj[0]
0x24-35  | obj[2].*           | 18 bytes |
0x36-47  | obj[3].*           | 18 bytes |

0x48-49  | light.pos_x        | 16-bit | Q4.12
0x4A-4B  | light.pos_y        | 16-bit | Q4.12
0x4C-4D  | light.pos_z        | 16-bit | Q4.12
0x4E-4F  | light.color_r      | 16-bit | Q4.12
0x50-51  | light.color_g      | 16-bit | Q4.12
0x52-53  | light.color_b      | 16-bit | Q4.12

0x54-55  | cam.pos_x          | 16-bit | Q4.12
0x56-57  | cam.pos_y          | 16-bit | Q4.12
0x58-59  | cam.pos_z          | 16-bit | Q4.12
0x5A-5B  | cam.fov            | 16-bit | Q4.12

0x5C     | config             | 8-bit  | [2:0]=num_objects, [3]=shadows, [4]=reflections
---------|--------------------|---------|-----------
Total: 93 bytes (0x5D)
```

Total storage: 93 bytes = 744 bits = 744 flip-flops.

### Object Read Port Multiplexing
The `obj_idx` input selects which of the 4 objects' fields appear on the output ports. This avoids needing 4 sets of output wires. The scanline controller iterates through objects sequentially, changing `obj_idx` each time.

```systemverilog
always_comb begin
    case (obj_idx)
        2'd0: begin obj_center_x = reg_obj0_cx; /* ... */ end
        2'd1: begin obj_center_x = reg_obj1_cx; /* ... */ end
        2'd2: begin obj_center_x = reg_obj2_cx; /* ... */ end
        2'd3: begin obj_center_x = reg_obj3_cx; /* ... */ end
    endcase
end
```

## Serial Loading Protocol

### Byte Transfer
1. Host sets `ui_in[7:0]` to the data byte
2. Host pulses `uio_in[0]` (serial_clk) high
3. On rising edge of serial_clk (with chip_select high), the byte is written to the current address
4. Address auto-increments after each byte
5. After writing all 93 bytes, host pulses `uio_in[2]` (load_complete)
6. The `scene_valid` flag goes high, and rendering begins

### Timing Diagram
```
chip_select: ____/‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\____
data_in:     XXXX|B0|B1|B2|...|B92|XXXXXXXXXXXXXXXXXXXX
serial_clk:  ____|↑_|↑_|↑_|...|↑__|____________________
load_complete:_________________________________/‾\_______
scene_valid: ___________________________________/‾‾‾‾‾‾‾
```

### Reset Behavior
On reset, all registers are cleared and `scene_valid` goes low. The address counter resets to 0. A default scene can optionally be loaded via initial values in the register file (for simulation/debugging).

### 16-bit Assembly
Since each parameter is 16-bit but the serial interface is 8-bit, bytes are loaded MSB-first:
```
Address 0x00: high byte of obj[0].center_x
Address 0x01: low byte of obj[0].center_x
```

## Resource Estimate

| Component | GE |
|-----------|-----|
| Register file (744 flip-flops) | 744 |
| Address counter (7-bit) | 10 |
| Serial clock edge detector | 5 |
| 4:1 object mux (9 fields x 16 bits) | 80 |
| Control logic (loading, valid) | 15 |
| **Total** | **~855** |

**Area concern**: This is the largest module by flip-flop count. Optimization options:
- Reduce to 3 objects (saves 18 bytes = 144 FFs)
- Use 8-bit color instead of 16-bit (saves 24 bytes = 192 FFs)
- Reduce specular/reflectivity to 8-bit (saves 16 bytes = 128 FFs)

### Minimal Configuration (if area is tight)
Use 8-bit color and 8-bit specular/reflectivity per object:
```
Object: cx(16) + cy(16) + cz(16) + r(16) + color_rgb(24) + spec(8) + refl(8) = 13 bytes
4 objects = 52 bytes
Light: pos(48) + color(24) = 9 bytes
Camera: pos(48) + fov(16) = 8 bytes
Config: 1 byte
Total: 70 bytes = 560 bits
```

## Dependencies
- **TinyTapeout wrapper** -- routes `ui_in` and `uio_in` pins to this module
- **All computation modules** read from this module's output ports

## Default Test Scene (for simulation)

```
Object 0: Red sphere at (0, 0, 3), radius 1.5
  center = (0x0000, 0x0000, 0x3000), radius = 0x1800
  color = (0x0E00, 0x0200, 0x0200), specular = 0x0800, reflectivity = 0x0000

Object 1: Blue sphere at (-2, 1, 4), radius 1.0
  center = (0xE000, 0x1000, 0x4000), radius = 0x1000
  color = (0x0200, 0x0200, 0x0C00), specular = 0x0400, reflectivity = 0x0800

Light: Position (3, -4, -2), white
  pos = (0x3000, 0xC000, 0xE000), color = (0x1000, 0x1000, 0x1000)

Camera: Position (0, 0, -5), FOV 1.0
  pos = (0x0000, 0x0000, 0xB000), fov = 0x1000

Config: 2 objects, shadows enabled, no reflections
  = 0b00001010 = 0x0A
```
