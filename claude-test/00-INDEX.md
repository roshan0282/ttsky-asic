# TTSKY-ASIC Ray Tracing Documentation Index

## Project Goal
Build a programmable ray tracing ASIC on TinyTapeout 4x4 with multiple objects, Blinn-Phong shading, shadows, and configurable reflection support. Output via VGA at 640x480@60Hz.

## Document Map

### Core Design
- [01-architecture-overview.md](01-architecture-overview.md) -- Top-level architecture, block diagram, timing analysis, tradeoff tables
- [02-fixed-point-math-reference.md](02-fixed-point-math-reference.md) -- Q4.12 format, operation costs, precision analysis

### Module Specifications
- [03-module-specs/ray-generation-unit.md](03-module-specs/ray-generation-unit.md) -- Camera model, perspective projection, ray type multiplexing
- [03-module-specs/ray-object-intersection.md](03-module-specs/ray-object-intersection.md) -- Micro-sequenced sphere intersection via shared math unit
- [03-module-specs/shading-unit.md](03-module-specs/shading-unit.md) -- Blinn-Phong lighting, shadow rays, reflection rays
- [03-module-specs/math-unit.md](03-module-specs/math-unit.md) -- Shared 16x16 multiplier + iterative divider + iterative sqrt
- [03-module-specs/scene-memory-interface.md](03-module-specs/scene-memory-interface.md) -- Serial scene loading protocol + register file layout
- [03-module-specs/scanline-controller.md](03-module-specs/scanline-controller.md) -- Top-level sequencer, pixel scheduling, double line buffer
- [03-module-specs/vga-output.md](03-module-specs/vga-output.md) -- VGA timing, line buffer readout, 8x upscaling
- [03-module-specs/tinytapeout-wrapper.md](03-module-specs/tinytapeout-wrapper.md) -- TT 4x4 pin mapping, IO allocation, constraints

### Planning & Verification
- [04-verification-plan.md](04-verification-plan.md) -- Unit tests, integration tests, reference model, test scenes
- [05-implementation-roadmap.md](05-implementation-roadmap.md) -- 5-phase build plan from current state to tapeout
- [06-area-budget.md](06-area-budget.md) -- Gate count estimates and tracking table

### Reference
- [07-reference/tinytapeout-4x4-constraints.md](07-reference/tinytapeout-4x4-constraints.md) -- TT4x4 IO, area, clock, power specs
- [07-reference/existing-code-audit.md](07-reference/existing-code-audit.md) -- Audit of current codebase with line references

## Existing Source Files
| File | Location | Status |
|------|----------|--------|
| `ray_sphere_intersect.sv` | `raygaming-sphere-test/` | Has placeholder sqrt (L178) and division (L212) |
| `vga_raytracer.sv` | `raygaming-sphere-test/` | Intersection results unused (L160-207 bypass) |
| `tt_um_vga_raytracer.sv` | `raygaming-sphere-test/` | TT wrapper, needs pin expansion for scene input |
| `tb_ray_sphere_intersect.sv` | `raygaming-sphere-test/` | 8 test vectors, reusable pattern |
| `genericVgaViewer.cpp` | `verilator-bench/` | SDL2 viewer, needs headless mode |

## Quick Start
1. Read **01-architecture-overview.md** for the big picture
2. Read **05-implementation-roadmap.md** for the build plan
3. Refer to module specs as you implement each phase
4. Use **04-verification-plan.md** to test each phase
