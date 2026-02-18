# TinyTapeout 4x4 Constraints Reference

## Tile Specifications

| Parameter | Value |
|-----------|-------|
| Tile size | 4x4 (16 standard tiles) |
| Approximate gate equivalents | ~4000 GE (varies by PDK and cell library) |
| Process | Skywater 130nm (sky130) |
| Standard cell library | sky130_fd_sc_hd |

## IO Pins

| Pin Group | Count | Direction | Our Usage |
|-----------|-------|-----------|-----------|
| `ui_in[7:0]` | 8 | Input only | Scene data bytes |
| `uo_out[7:0]` | 8 | Output only | VGA signals (hsync, vsync, 2-bit RGB) |
| `uio[7:0]` | 8 | Bidirectional | 6 input (serial ctrl + reserved), 2 output (busy, frame_sync) |
| `clk` | 1 | Input | 50 MHz system clock |
| `rst_n` | 1 | Input | Active-low reset |
| `ena` | 1 | Input | Module enable |
| **Total IO** | **26** | | |

## Clock

- **Target frequency**: 50 MHz
- **Max frequency**: Depends on critical path; sky130 typically supports 50-100 MHz for small designs
- **Pixel clock**: 25 MHz (derived internally by dividing system clock by 2)
- **No PLL available** -- clock division must be done with flip-flop toggle

## Power

- Operating voltage: 1.8V (sky130)
- Power budget: TBD per shuttle (check specific TT shuttle guidelines)
- Switching activity is the primary power concern
- The math unit multiplier will dominate dynamic power

## Reset

- Active-low reset (`rst_n`) provided by TT infrastructure
- Asynchronous assert, synchronous deassert recommended
- All flip-flops must have deterministic reset state

## Design Rules

1. **No latches** (unless explicitly approved by synthesis flow)
2. **No tri-state buffers** internally (only at IO pads)
3. **No analog blocks** (pure digital)
4. **No clock gating** unless done through standard cells
5. **Single clock domain** (50 MHz) -- no multi-clock designs unless carefully managed

## VGA PMOD Standard

The TinyTapeout VGA PMOD uses this pinout on `uo_out`:

```
Bit 7: hsync
Bit 6: blue[0]
Bit 5: green[0]
Bit 4: red[0]
Bit 3: vsync
Bit 2: blue[1]
Bit 1: green[1]
Bit 0: red[1]
```

This drives the Tiny VGA PMOD directly:
- 2 bits per color channel = 64 total colors
- Active-low sync signals
- R2R DAC on the PMOD converts 2-bit to analog

## Synthesis Flow

Recommended toolchain:
1. **Yosys** -- RTL synthesis (Verilog/SystemVerilog → gate-level netlist)
2. **OpenROAD/OpenLane** -- place and route
3. **Magic** -- DRC and LVS
4. **Verilator** -- pre-synthesis simulation
5. **iverilog** -- unit testbenches

### TinyTapeout GitHub Action
TT projects use a GitHub Actions workflow that:
1. Clones the design repo
2. Runs OpenLane with TT-specific configuration
3. Produces GDS and gate-level netlist
4. Reports area, timing, and DRC results

## File Structure for TT Submission

```
tt-submission/
  src/                    # Verilog/SystemVerilog source
    tt_um_raytracer_top.sv  # Must match project name
    math_unit.sv
    intersection_sequencer.sv
    ... (all modules)
  test/                   # Cocotb or iverilog testbenches
  docs/                   # Documentation
  info.yaml               # Project metadata
```

### info.yaml Example
```yaml
project:
  title: "TTSKY Ray Tracer"
  author: "Roshan"
  description: "Programmable ray tracing ASIC with Blinn-Phong shading"
  language: "SystemVerilog"
  clock_hz: 50000000
  tiles: "4x4"
```

## Key Limitations to Remember

1. **~4000 GE is very small** -- every register and mux counts
2. **No memory macros** -- all storage must be flip-flop based (no SRAM)
3. **2-bit color** -- visual quality is inherently limited; focus on correct geometry and shading direction rather than smooth gradients
4. **50 MHz is modest** -- complex combinational logic must be pipelined
5. **No floating point** -- all math must be fixed-point
