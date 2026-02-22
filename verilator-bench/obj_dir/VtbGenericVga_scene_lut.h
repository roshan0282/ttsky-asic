// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbGenericVga.h for the primary calling header

#ifndef VERILATED_VTBGENERICVGA_SCENE_LUT_H_
#define VERILATED_VTBGENERICVGA_SCENE_LUT_H_  // guard

#include "verilated.h"


class VtbGenericVga__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbGenericVga_scene_lut final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VtbGenericVga__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<VlWide<5>/*151:0*/, 2> LIGHTS = {{
        {{ // VlWide 0
            0x00018000, 0xbeff9900, 0xcf00087e, 0x0000003e,
            0x00000000
        }},
        {{ // VlWide 1
            0x00010000, 0xa6eeff00, 0x580003a6, 0x000002ec,
            0x00000000
        }}
    }};

    // CONSTRUCTORS
    VtbGenericVga_scene_lut(VtbGenericVga__Syms* symsp, const char* v__name);
    ~VtbGenericVga_scene_lut();
    VL_UNCOPYABLE(VtbGenericVga_scene_lut);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
