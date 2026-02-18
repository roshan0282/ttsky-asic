# Area Budget

## Target: TinyTapeout 4x4

Estimated area: ~4000 gate equivalents (GE). Actual available area depends on the specific TT shuttle and PDK, but 4x4 tiles provide roughly 4x the standard 1x1 tile.

One GE ≈ one 2-input NAND gate equivalent.

## Estimated Budget by Module

| Module | GE (est.) | % of Budget | Notes |
|--------|-----------|-------------|-------|
| **Math unit** | 950 | 24% | 16x16 multiplier (~600), iterative div/sqrt (~200), accumulator + FSM (~150) |
| **Scene memory** | 855 | 21% | 744 FFs for register file, serial loader, 4:1 object mux |
| **Intersection sequencer** | 330 | 8% | FSM, intermediate registers, math unit interface |
| **VGA output + line buffer** | 280 | 7% | Counters, sync gen, double line buffer (960 FFs) |
| **Scanline controller** | 210 | 5% | Master FSM, pixel/line/object counters, closest-hit tracker |
| **Shading unit** | 210 | 5% | Blinn-Phong FSM, color registers, quantization |
| **Ray generation** | 190 | 5% | Pixel-to-ray mapping, ray type mux |
| **TT wrapper** | 30 | 1% | Pin packing, reset, enable |
| **Routing/overhead** | ~400 | 10% | Clock tree, reset distribution, wiring overhead |
| **Total estimated** | **~3455** | **86%** | **14% margin** |

## Area Breakdown Visualization

```
[========================] Math unit (24%)
[====================]     Scene memory (21%)
[========]                 Routing overhead (10%)
[=======]                  Intersection seq. (8%)
[======]                   VGA output + buffer (7%)
[=====]                    Scanline controller (5%)
[=====]                    Shading unit (5%)
[=====]                    Ray generation (5%)
[=]                        TT wrapper (1%)
                           ─── 14% margin remaining ───
```

## Area Reduction Options (if over budget)

Priority order for reducing area if synthesis shows we're over:

| Reduction | Savings | Impact |
|-----------|---------|--------|
| Use 8-bit scene colors (instead of 16-bit) | ~190 GE | Minimal (still maps to 2-bit output) |
| Reduce to 3 objects | ~150 GE | Minor (3 spheres still compelling) |
| Share registers between intersection + shading | ~100 GE | No impact (they're sequential) |
| Reduce to 2 objects | ~150 GE | Noticeable (fewer scene possibilities) |
| Remove reflection support | ~100 GE | Visual impact (no reflective spheres) |
| Use 8x8 multiplier with 2-cycle multiply | ~300 GE | 2x slower intersection |
| Remove specular highlights | ~30 GE | Minor visual impact |

**Worst-case minimal design**: 2 objects, 8-bit colors, no reflection, 8x8 multiplier
- Savings: ~890 GE → total ~2565 GE (very comfortable fit)

## Phase-by-Phase Tracking

Update this table after each phase with actual synthesis numbers:

| Phase | Target GE | Actual GE | Status |
|-------|-----------|-----------|--------|
| 1 (Fix intersection) | N/A (still on old architecture) | -- | Pending |
| 2 (Shared math unit) | ~1300 (math + intersection only) | -- | Pending |
| 3 (Full design, 4 obj) | ~3455 | -- | Pending |
| 4 (+ reflections) | ~3555 | -- | Pending |
| 5 (Optimized final) | ≤ 4000 | -- | Pending |

## Comparison: Current vs. Proposed

| | Current Design | Proposed Design |
|---|---|---|
| Multipliers | 9 parallel (stage 2 of pipeline) | 1 shared |
| Multiplier GE | ~5400 GE (9 x 600) | ~600 GE |
| Pipeline stages | 6 (all combinational or 1-cycle) | N/A (sequential) |
| Divider | SystemVerilog `/` (not synthesizable) | Iterative (100 GE) |
| Sqrt | Placeholder (not functional) | Iterative (100 GE) |
| Scene memory | None (hardcoded) | 855 GE (register file) |
| Objects | 1 fixed | 4 programmable |
| **Total estimated** | **>6000 GE (doesn't fit TT 4x4)** | **~3455 GE** |

The current design cannot fit TinyTapeout even 4x4 due to the 9 parallel multipliers. The proposed sequential architecture is the only viable path.
