// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

VL_ATTR_COLD void VtbGenericVga___024root___eval_static(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_static\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock50MHz__0 
        = vlSelfRef.clock50MHz;
    vlSelfRef.__Vtrigprevexpr___TOP__resetn__0 = vlSelfRef.resetn;
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial__TOP(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VtbGenericVga___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_initial__TOP(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_initial__TOP\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i;
    tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cx;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cx = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cy;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cy = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cz;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cz = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__radius;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__radius = 0;
    CData/*7:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorR;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorR = 0;
    CData/*7:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorG;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorG = 0;
    CData/*7:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorB;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorB = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__reflectivity;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__reflectivity = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lx;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lx = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__ly;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__ly = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lz;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lz = 0;
    CData/*7:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorR;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorR = 0;
    CData/*7:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorG;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorG = 0;
    CData/*7:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorB;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorB = 0;
    SData/*11:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__intensity;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__intensity = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cx = 0x18U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cy = 0xff8U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cz = 0x60U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__radius = 4U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorR = 0x40U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorG = 0xc8U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorB = 0xffU;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__reflectivity = 2U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__cz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRadius 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__radius;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorR 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorR;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorG 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorG;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorB 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__colorB;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRefl 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneSphereGet__1__reflectivity;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosX[0U] = 0x20U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosY[0U] = 0x30U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosZ[0U] = 0x10U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColR[0U] = 0xffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColG[0U] = 0xf0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColB[0U] = 0xdcU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightIntens[0U] = 0x10U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lx = 0xfd0U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__ly = 0x20U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lz = 0x28U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorR = 0xb4U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorG = 0xc8U;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorB = 0xffU;
    __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__intensity = 8U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosX[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosY[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__ly;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosZ[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__lz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColR[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorR;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColG[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorG;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColB[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__colorB;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightIntens[1U] 
        = __Vtask_tbGenericVga__DOT__dut__DOT__sceneLightGet__2__intensity;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorGArr[0U] = 0x40U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sCxArr[0U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sCyArr[0U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sCzArr[0U] = 0x40U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorRArr[0U] = 0xffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorBArr[0U] = 0x40U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sReflArr[0U] = 4U;
    tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c0U, tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h044ee20f__0 = 0x20U;
        if (VL_LIKELY(((0x12bfU >= (0x1fffU & tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory[(0x1fffU 
                                                                           & tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i)] 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h044ee20f__0;
        }
        tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i 
            = ((IData)(1U) + tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__i);
    }
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x74387838U;
    __Vtemp_1[2U] = 0x666f6eU;
    VL_READMEM_N(false, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_textGen__DOT__font__DOT__fontMemory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_final(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_final\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__stl(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VtbGenericVga___024root___eval_phase__stl(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_settle(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_settle\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VtbGenericVga___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VtbGenericVga___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD void VtbGenericVga___024root___eval_stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VtbGenericVga___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___stl_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__hitDxT;
    tbGenericVga__DOT__dut__DOT__hitDxT = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__hitDyT;
    tbGenericVga__DOT__dut__DOT__hitDyT = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__hitDzT;
    tbGenericVga__DOT__dut__DOT__hitDzT = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normalRawX;
    tbGenericVga__DOT__dut__DOT__normalRawX = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normalRawY;
    tbGenericVga__DOT__dut__DOT__normalRawY = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normalRawZ;
    tbGenericVga__DOT__dut__DOT__normalRawZ = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normalX;
    tbGenericVga__DOT__dut__DOT__normalX = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normalY;
    tbGenericVga__DOT__dut__DOT__normalY = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normalZ;
    tbGenericVga__DOT__dut__DOT__normalZ = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__aR;
    tbGenericVga__DOT__dut__DOT__aR = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__aG;
    tbGenericVga__DOT__dut__DOT__aG = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__aB;
    tbGenericVga__DOT__dut__DOT__aB = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__rMix;
    tbGenericVga__DOT__dut__DOT__rMix = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__fR;
    tbGenericVga__DOT__dut__DOT__fR = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__fG;
    tbGenericVga__DOT__dut__DOT__fG = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__fB;
    tbGenericVga__DOT__dut__DOT__fB = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nz;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nz = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__ny;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__ny = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nx;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nx = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_ndotl__dot;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_ndotl__dot = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nz;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nz = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__ny;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__ny = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nx;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nx = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_ndotl__dot;
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_ndotl__dot = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_acMul__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_acMul__DOT__shifted = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted = 0;
    IData/*23:0*/ __VdfgRegularize_h787163e4_0_1;
    __VdfgRegularize_h787163e4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h787163e4_0_2;
    __VdfgRegularize_h787163e4_0_2 = 0;
    IData/*23:0*/ __VdfgRegularize_h787163e4_0_5;
    __VdfgRegularize_h787163e4_0_5 = 0;
    IData/*23:0*/ __VdfgRegularize_h787163e4_0_6;
    __VdfgRegularize_h787163e4_0_6 = 0;
    IData/*23:0*/ __VdfgRegularize_h787163e4_0_7;
    __VdfgRegularize_h787163e4_0_7 = 0;
    IData/*23:0*/ __VdfgRegularize_h787163e4_0_8;
    __VdfgRegularize_h787163e4_0_8 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_1;
    __VdfgRegularize_ha8aa2f4f_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_2;
    __VdfgRegularize_ha8aa2f4f_0_2 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_3;
    __VdfgRegularize_ha8aa2f4f_0_3 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_5;
    __VdfgRegularize_ha8aa2f4f_0_5 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_6;
    __VdfgRegularize_ha8aa2f4f_0_6 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_7;
    __VdfgRegularize_ha8aa2f4f_0_7 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_9;
    __VdfgRegularize_ha8aa2f4f_0_9 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_10;
    __VdfgRegularize_ha8aa2f4f_0_10 = 0;
    IData/*23:0*/ __VdfgRegularize_ha8aa2f4f_0_11;
    __VdfgRegularize_ha8aa2f4f_0_11 = 0;
    // Body
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB 
        = (0x1fffU & ((0xfc0U & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                 << 3U)) + ((0x3f0U 
                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                                << 1U)) 
                                            + (0x7fU 
                                               & ((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                  >> 3U)))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__textR = 
        (((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
          & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_textGen__DOT__font__DOT__fontMemory
             [(((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamDataB) 
                << 3U) | (7U & (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))] 
             >> (7U & ((IData)(7U) - (IData)(vlSelfRef.tbGenericVga__DOT__xReg)))))
          ? 0xffU : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorGArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorG;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sCxArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sCyArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sCzArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorRArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorR;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorBArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorB;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sReflArr[1U] 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRefl;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_r2Mul__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRadius))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRadius)))))), 4U));
    tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDx))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestT)))))), 4U));
    tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDy))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestT)))))), 4U));
    tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDz))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestT)))))), 4U));
    tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, 
                                                             (0xfffU 
                                                              & VL_SHIFTRS_III(13,13,32, 
                                                                               (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                                                - (IData)(0x140U))), 2U)), 
                                                             (0xfffU 
                                                              & VL_SHIFTRS_III(13,13,32, 
                                                                               (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                                                - (IData)(0x140U))), 2U)))), 4U) 
                     + VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                 & VL_MULS_III(12, 
                                                               (0xfffU 
                                                                & VL_SHIFTRS_III(13,13,32, 
                                                                                (0x1fffU 
                                                                                & ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))), 2U)), 
                                                               (0xfffU 
                                                                & VL_SHIFTRS_III(13,13,32, 
                                                                                (0x1fffU 
                                                                                & ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))), 2U)))), 4U)));
    tbGenericVga__DOT__dut__DOT__hitDxT = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted)
                                            ? 0x7ffU
                                            : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted)
                                                ? 0x800U
                                                : (0xfffU 
                                                   & tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted)));
    tbGenericVga__DOT__dut__DOT__hitDyT = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted)
                                            ? 0x7ffU
                                            : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted)
                                                ? 0x800U
                                                : (0xfffU 
                                                   & tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted)));
    tbGenericVga__DOT__dut__DOT__hitDzT = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted)
                                            ? 0x7ffU
                                            : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted)
                                                ? 0x800U
                                                : (0xfffU 
                                                   & tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted)));
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
            = VL_SHIFTL_III(32,32,32, (IData)(tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
               >> 0x1eU);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial = 1U;
        if ((1U <= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x1cU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x1aU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x18U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x16U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x14U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x12U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0x10U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0xeU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0xcU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 0xaU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 8U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 6U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 4U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val 
                                >> 2U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag 
            = (VL_LTS_III(12, 0x7ffU, (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot)))
                ? 0x7ffU : (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot)));
    }
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff 
        = (0xfffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosX
                     [0U] - (IData)(tbGenericVga__DOT__dut__DOT__hitDxT)));
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff 
        = (0xfffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosX
                     [1U] - (IData)(tbGenericVga__DOT__dut__DOT__hitDxT)));
    tbGenericVga__DOT__dut__DOT__normalRawX = (0xfffU 
                                               & ((IData)(tbGenericVga__DOT__dut__DOT__hitDxT) 
                                                  - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCx)));
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff 
        = (0xfffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosY
                     [0U] - (IData)(tbGenericVga__DOT__dut__DOT__hitDyT)));
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff 
        = (0xfffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosY
                     [1U] - (IData)(tbGenericVga__DOT__dut__DOT__hitDyT)));
    tbGenericVga__DOT__dut__DOT__normalRawY = (0xfffU 
                                               & ((IData)(tbGenericVga__DOT__dut__DOT__hitDyT) 
                                                  - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCy)));
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff 
        = (0xfffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosZ
                     [0U] - (IData)(tbGenericVga__DOT__dut__DOT__hitDzT)));
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff 
        = (0xfffU & (vlSelfRef.tbGenericVga__DOT__dut__DOT__lightPosZ
                     [1U] - (IData)(tbGenericVga__DOT__dut__DOT__hitDzT)));
    tbGenericVga__DOT__dut__DOT__normalRawZ = (0xfffU 
                                               & ((IData)(tbGenericVga__DOT__dut__DOT__hitDzT) 
                                                  - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCz)));
    __VdfgRegularize_h787163e4_0_1 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & VL_SHIFTRS_III(13,13,32, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                                                - (IData)(0x140U))), 2U))), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag)))));
    __VdfgRegularize_h787163e4_0_2 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & VL_SHIFTRS_III(13,13,32, 
                                                                                (0x1fffU 
                                                                                & ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))), 2U))), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag)))));
    if ((0U == VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__normDx = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__normDy = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz 
            = (0xfffU & VL_EXTENDS_II(12,12, ((0U == 
                                               VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag)))
                                               ? 0x7ffU
                                               : (VL_LTS_III(24, 0x7ffU, 
                                                             (0xffffffU 
                                                              & VL_DIVS_III(24, (IData)(0x800U), 
                                                                            (0xffffffU 
                                                                             & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag))))))
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, 
                                                              (0xffffffU 
                                                               & VL_DIVS_III(24, (IData)(0x800U), 
                                                                             (0xffffffU 
                                                                              & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag))))))
                                                    ? 0x800U
                                                    : 
                                                   (0xfffU 
                                                    & VL_DIVS_III(24, (IData)(0x800U), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag))))))))));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__normDx 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, 
                                                                            (0xfffU 
                                                                             & VL_SHIFTRS_III(13,13,32, 
                                                                                (0x1fffU 
                                                                                & (VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                                                - (IData)(0x140U))), 2U))))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_h787163e4_0_1)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_h787163e4_0_1)
                                                    ? 0x800U
                                                    : __VdfgRegularize_h787163e4_0_1))))));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__normDy 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, 
                                                                            (0xfffU 
                                                                             & VL_SHIFTRS_III(13,13,32, 
                                                                                (0x1fffU 
                                                                                & ((IData)(0xf0U) 
                                                                                - 
                                                                                VL_EXTENDS_II(13,11, (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))), 2U))))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_h787163e4_0_2)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_h787163e4_0_2)
                                                    ? 0x800U
                                                    : __VdfgRegularize_h787163e4_0_2))))));
    }
    tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff))), 4U))));
    tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff))), 4U))));
    tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawX), (IData)(tbGenericVga__DOT__dut__DOT__normalRawX))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawY), (IData)(tbGenericVga__DOT__dut__DOT__normalRawY))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawZ), (IData)(tbGenericVga__DOT__dut__DOT__normalRawZ))), 4U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB 
        = (0xfffU & VL_SHIFTRS_III(12,12,32, (0xfffU 
                                              & VL_MULS_III(12, (IData)(0xfc0U), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz))), 4U));
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
            = VL_SHIFTL_III(32,32,32, (IData)(tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
               >> 0x1eU);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial = 1U;
        if ((1U <= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x1cU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x1aU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x18U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x16U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x14U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x12U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x10U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0xeU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0xcU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0xaU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 8U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 6U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 4U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 2U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag 
            = (VL_LTS_III(12, 0x7ffU, (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot)))
                ? 0x7ffU : (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot)));
    }
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
            = VL_SHIFTL_III(32,32,32, (IData)(tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
               >> 0x1eU);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial = 1U;
        if ((1U <= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x1cU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x1aU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x18U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x16U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x14U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x12U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0x10U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0xeU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0xcU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 0xaU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 8U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 6U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 4U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val 
                                >> 2U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag 
            = (VL_LTS_III(12, 0x7ffU, (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot)))
                ? 0x7ffU : (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot)));
    }
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
            = VL_SHIFTL_III(32,32,32, (IData)(tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
               >> 0x1eU);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial = 1U;
        if ((1U <= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x1cU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x1aU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x18U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x16U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x14U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x12U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0x10U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0xeU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0xcU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 0xaU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 8U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 6U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 4U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val 
                                >> 2U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                << 2U) | (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag 
            = (VL_LTS_III(12, 0x7ffU, (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot)))
                ? 0x7ffU : (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot)));
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, 
                                                             (0xfffU 
                                                              & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx))), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDx))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, 
                                                                (0xfffU 
                                                                 & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy))), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDy))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, 
                                                      (0xfffU 
                                                       & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz))), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz))), 4U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDx), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDx))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDy), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDy))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz))), 4U))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB), 1U)))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB), 1U))))))), 4U));
    __VdfgRegularize_ha8aa2f4f_0_5 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_6 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_7 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_9 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_10 = (0xffffffU & 
                                       VL_DIVS_III(24, 
                                                   (0xffffffU 
                                                    & VL_SHIFTL_III(24,24,32, 
                                                                    VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff)), 4U)), 
                                                   (0xffffffU 
                                                    & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_11 = (0xffffffU & 
                                       VL_DIVS_III(24, 
                                                   (0xffffffU 
                                                    & VL_SHIFTL_III(24,24,32, 
                                                                    VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff)), 4U)), 
                                                   (0xffffffU 
                                                    & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_1 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawX)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_2 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawY)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))));
    __VdfgRegularize_ha8aa2f4f_0_3 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawZ)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB), 1U)))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB), 1U))))))), 4U));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_acMul__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                (0xfffU 
                                                                                & ((VL_SHIFTRS_III(12,12,32, 
                                                                                (0xfffU 
                                                                                & VL_MULS_III(12, 
                                                                                (0xfffU 
                                                                                & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx))), 
                                                                                (0xfffU 
                                                                                & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx))))), 4U) 
                                                                                + 
                                                                                (VL_SHIFTRS_III(12,12,32, 
                                                                                (0xfffU 
                                                                                & VL_MULS_III(12, 
                                                                                (0xfffU 
                                                                                & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy))), 
                                                                                (0xfffU 
                                                                                & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy))))), 4U) 
                                                                                + 
                                                                                VL_SHIFTRS_III(12,12,32, 
                                                                                (0xfffU 
                                                                                & VL_MULS_III(12, 
                                                                                (0xfffU 
                                                                                & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz))), 
                                                                                (0xfffU 
                                                                                & (- (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz))))), 4U))) 
                                                                                - 
                                                                                (VL_LTS_III(24, 0x7ffU, vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_r2Mul__DOT__shifted)
                                                                                 ? 0x7ffU
                                                                                 : 
                                                                                (VL_GTS_III(24, 0xfff800U, vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_r2Mul__DOT__shifted)
                                                                                 ? 0x800U
                                                                                 : vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_r2Mul__DOT__shifted))))))))), 4U));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc 
        = (0xfffU & ((VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted)
                       ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted)
                                    ? 0x800U : tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted)) 
                     - VL_SHIFTL_III(12,12,32, (VL_LTS_III(24, 0x7ffU, 
                                                           (0xffffffU 
                                                            & VL_SHIFTRS_III(24,24,32, 
                                                                             (0xffffffU 
                                                                              & ((IData)(8U) 
                                                                                + 
                                                                                VL_MULS_III(24, (IData)(0xffffffU), 
                                                                                (0xffffffU 
                                                                                & VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ)))))), 4U)))
                                                 ? 0x7ffU
                                                 : 
                                                (VL_GTS_III(24, 0xfff800U, 
                                                            (0xffffffU 
                                                             & VL_SHIFTRS_III(24,24,32, 
                                                                              (0xffffffU 
                                                                               & ((IData)(8U) 
                                                                                + 
                                                                                VL_MULS_III(24, (IData)(0xffffffU), 
                                                                                (0xffffffU 
                                                                                & VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ)))))), 4U)))
                                                  ? 0x800U
                                                  : 
                                                 (0xffffffU 
                                                  & VL_SHIFTRS_III(24,24,32, 
                                                                   (0xffffffU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       VL_MULS_III(24, (IData)(0xffffffU), 
                                                                                (0xffffffU 
                                                                                & VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ)))))), 4U)))), 2U)));
    if ((0U == VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))) {
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nx = 0U;
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__ny = 0U;
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nz = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nx 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvX__diff)))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_5)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_5)
                                                    ? 0x800U
                                                    : __VdfgRegularize_ha8aa2f4f_0_5))))));
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__ny 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvY__diff)))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_6)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_6)
                                                    ? 0x800U
                                                    : __VdfgRegularize_ha8aa2f4f_0_6))))));
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nz 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lvZ__diff)))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_7)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_7)
                                                    ? 0x800U
                                                    : __VdfgRegularize_ha8aa2f4f_0_7))))));
    }
    if ((0U == VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))) {
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nx = 0U;
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__ny = 0U;
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nz = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nx 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvX__diff)))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_9)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_9)
                                                    ? 0x800U
                                                    : __VdfgRegularize_ha8aa2f4f_0_9))))));
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__ny 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvY__diff)))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_10)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_10)
                                                    ? 0x800U
                                                    : __VdfgRegularize_ha8aa2f4f_0_10))))));
        tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nz 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((0U 
                                                  == 
                                                  VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag)))
                                                  ? 
                                                 (VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lvZ__diff)))
                                                   ? 0x7ffU
                                                   : 0x800U)
                                                  : 
                                                 (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_11)
                                                   ? 0x7ffU
                                                   : 
                                                  (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_11)
                                                    ? 0x800U
                                                    : __VdfgRegularize_ha8aa2f4f_0_11))))));
    }
    if ((0U == VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))) {
        tbGenericVga__DOT__dut__DOT__normalX = 0U;
        tbGenericVga__DOT__dut__DOT__normalY = 0U;
        tbGenericVga__DOT__dut__DOT__normalZ = 0U;
    } else {
        tbGenericVga__DOT__dut__DOT__normalX = (0xfffU 
                                                & VL_EXTENDS_II(12,12, 
                                                                (0xfffU 
                                                                 & ((0U 
                                                                     == 
                                                                     VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))
                                                                     ? 
                                                                    (VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawX)))
                                                                      ? 0x7ffU
                                                                      : 0x800U)
                                                                     : 
                                                                    (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_1)
                                                                      ? 0x7ffU
                                                                      : 
                                                                     (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_1)
                                                                       ? 0x800U
                                                                       : __VdfgRegularize_ha8aa2f4f_0_1))))));
        tbGenericVga__DOT__dut__DOT__normalY = (0xfffU 
                                                & VL_EXTENDS_II(12,12, 
                                                                (0xfffU 
                                                                 & ((0U 
                                                                     == 
                                                                     VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))
                                                                     ? 
                                                                    (VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawY)))
                                                                      ? 0x7ffU
                                                                      : 0x800U)
                                                                     : 
                                                                    (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_2)
                                                                      ? 0x7ffU
                                                                      : 
                                                                     (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_2)
                                                                       ? 0x800U
                                                                       : __VdfgRegularize_ha8aa2f4f_0_2))))));
        tbGenericVga__DOT__dut__DOT__normalZ = (0xfffU 
                                                & VL_EXTENDS_II(12,12, 
                                                                (0xfffU 
                                                                 & ((0U 
                                                                     == 
                                                                     VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag)))
                                                                     ? 
                                                                    (VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__normalRawZ)))
                                                                      ? 0x7ffU
                                                                      : 0x800U)
                                                                     : 
                                                                    (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_ha8aa2f4f_0_3)
                                                                      ? 0x7ffU
                                                                      : 
                                                                     (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_ha8aa2f4f_0_3)
                                                                       ? 0x800U
                                                                       : __VdfgRegularize_ha8aa2f4f_0_3))))));
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc 
        = (0xfffU & ((VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted)
                       ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted)
                                    ? 0x800U : tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_b2Mul__DOT__shifted)) 
                     - VL_SHIFTL_III(12,12,32, (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_acMul__DOT__shifted)
                                                 ? 0x7ffU
                                                 : 
                                                (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_acMul__DOT__shifted)
                                                  ? 0x800U
                                                  : tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_acMul__DOT__shifted)), 2U)));
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__sqrtDisc = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
            = VL_SHIFTL_III(32,32,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
               >> 0x1eU);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial = 1U;
        if ((1U <= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x1cU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x1aU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x18U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x16U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x14U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x12U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x10U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0xeU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0xcU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0xaU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 8U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 6U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 4U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 2U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__sqrtDisc 
            = (VL_LTS_III(12, 0x7ffU, (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot)))
                ? 0x7ffU : (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot)));
    }
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_ndotl__dot 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalX), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nx))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalY), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__ny))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalZ), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_lnorm__nz))), 4U))));
    tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_ndotl__dot 
        = (0xfffU & (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                               & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalX), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nx))), 4U) 
                     + (VL_SHIFTRS_III(12,12,32, (0xfffU 
                                                  & VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalY), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__ny))), 4U) 
                        + VL_SHIFTRS_III(12,12,32, 
                                         (0xfffU & 
                                          VL_MULS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__normalZ), (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_lnorm__nz))), 4U))));
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__sqrtDisc = 0U;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
            = VL_SHIFTL_III(32,32,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
               >> 0x1eU);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial = 1U;
        if ((1U <= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x1cU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x1aU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x18U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x16U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x14U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x12U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0x10U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0xeU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0xcU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 0xaU)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 8U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 6U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 4U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val 
                                >> 2U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
            = ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                << 2U) | (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial 
            = (1U | ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                     << 2U));
        if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
             >= vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (1U | (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                                    << 1U)));
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot 
                = (0xfffeU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot) 
                              << 1U));
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__sqrtDisc 
            = (VL_LTS_III(12, 0x7ffU, (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot)))
                ? 0x7ffU : (0x7ffU & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot)));
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0 
        = (0xfffU & ((- VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB), 1U)) 
                     - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__sqrtDisc)));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1 
        = (0xfffU & ((- VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB), 1U)) 
                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__sqrtDisc)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__ndotlGt[0U] 
        = VL_LTS_III(12, 0U, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_ndotl__dot));
    tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__0__KET____DOT__u_ndotl__dot))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__lightIntens
                                                                                [0U]))))), 4U));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__ndotlGt[1U] 
        = VL_LTS_III(12, 0U, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_ndotl__dot));
    tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (0xffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(24, 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT____Vcellout__g_light__BRA__1__KET____DOT__u_ndotl__dot))), 
                                                                (0xffffffU 
                                                                 & VL_EXTENDS_II(24,12, 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__lightIntens
                                                                                [1U]))))), 4U));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0 
        = (0xfffU & ((- VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB), 1U)) 
                     - (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__sqrtDisc)));
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1 
        = (0xfffU & ((- VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__halfB), 1U)) 
                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__sqrtDisc)));
    __VdfgRegularize_h787163e4_0_5 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, 
                                                                               (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))));
    __VdfgRegularize_h787163e4_0_6 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, 
                                                                               (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__difQ[0U] 
        = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted)
            ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted)
                         ? 0x800U : (0xfffU & tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__difQ[1U] 
        = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted)
            ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted)
                         ? 0x800U : (0xfffU & tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted)));
    __VdfgRegularize_h787163e4_0_7 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, 
                                                                               (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))));
    __VdfgRegularize_h787163e4_0_8 = (0xffffffU & VL_DIVS_III(24, 
                                                              (0xffffffU 
                                                               & VL_SHIFTL_III(24,24,32, 
                                                                               VL_EXTENDS_II(24,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1)), 4U)), 
                                                              (0xffffffU 
                                                               & VL_EXTENDS_II(24,12, 
                                                                               (0xfffU 
                                                                                & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))));
    if ((0U == VL_EXTENDS_II(32,12, (0xfffU & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))) {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 
            = (0xfffU & (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num0)))
                          ? 0x7ffU : 0x800U));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 
            = (0xfffU & (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__num1)))
                          ? 0x7ffU : 0x800U));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 
            = (0xfffU & (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num0)))
                          ? 0x7ffU : 0x800U));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 
            = (0xfffU & (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__num1)))
                          ? 0x7ffU : 0x800U));
    } else {
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0 
            = (0xfffU & (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_h787163e4_0_5)
                          ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_h787163e4_0_5)
                                       ? 0x800U : __VdfgRegularize_h787163e4_0_5)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1 
            = (0xfffU & (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_h787163e4_0_6)
                          ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_h787163e4_0_6)
                                       ? 0x800U : __VdfgRegularize_h787163e4_0_6)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0 
            = (0xfffU & (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_h787163e4_0_7)
                          ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_h787163e4_0_7)
                                       ? 0x800U : __VdfgRegularize_h787163e4_0_7)));
        tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1 
            = (0xfffU & (VL_LTS_III(24, 0x7ffU, __VdfgRegularize_h787163e4_0_8)
                          ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, __VdfgRegularize_h787163e4_0_8)
                                       ? 0x800U : __VdfgRegularize_h787163e4_0_8)));
    }
    tbGenericVga__DOT__dut__DOT__aR = VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorR), 3U);
    tbGenericVga__DOT__dut__DOT__aG = VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorG), 3U);
    tbGenericVga__DOT__dut__DOT__aB = VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorB), 3U);
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ndotlGt
        [0U]) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt 
            = VL_EXTENDS_II(32,12, vlSelfRef.tbGenericVga__DOT__dut__DOT__difQ
                            [0U]);
        if (VL_LTS_III(32, 0x10U, vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt = 0x10U;
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__cR = 
            VL_SHIFTR_III(32,32,32, (VL_SHIFTR_III(32,32,32, 
                                                   ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorR) 
                                                    * 
                                                    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColR
                                                    [0U]), 8U) 
                                     * vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__cG = 
            VL_SHIFTR_III(32,32,32, (VL_SHIFTR_III(32,32,32, 
                                                   ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorG) 
                                                    * 
                                                    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColG
                                                    [0U]), 8U) 
                                     * vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__cB = 
            VL_SHIFTR_III(32,32,32, (VL_SHIFTR_III(32,32,32, 
                                                   ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorB) 
                                                    * 
                                                    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColB
                                                    [0U]), 8U) 
                                     * vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt), 4U);
        tbGenericVga__DOT__dut__DOT__aR = (tbGenericVga__DOT__dut__DOT__aR 
                                           + vlSelfRef.tbGenericVga__DOT__dut__DOT__cR);
        tbGenericVga__DOT__dut__DOT__aG = (tbGenericVga__DOT__dut__DOT__aG 
                                           + vlSelfRef.tbGenericVga__DOT__dut__DOT__cG);
        tbGenericVga__DOT__dut__DOT__aB = (tbGenericVga__DOT__dut__DOT__aB 
                                           + vlSelfRef.tbGenericVga__DOT__dut__DOT__cB);
    }
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__ndotlGt
        [1U]) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt 
            = VL_EXTENDS_II(32,12, vlSelfRef.tbGenericVga__DOT__dut__DOT__difQ
                            [1U]);
        if (VL_LTS_III(32, 0x10U, vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt)) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt = 0x10U;
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__cR = 
            VL_SHIFTR_III(32,32,32, (VL_SHIFTR_III(32,32,32, 
                                                   ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorR) 
                                                    * 
                                                    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColR
                                                    [1U]), 8U) 
                                     * vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__cG = 
            VL_SHIFTR_III(32,32,32, (VL_SHIFTR_III(32,32,32, 
                                                   ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorG) 
                                                    * 
                                                    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColG
                                                    [1U]), 8U) 
                                     * vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt), 4U);
        vlSelfRef.tbGenericVga__DOT__dut__DOT__cB = 
            VL_SHIFTR_III(32,32,32, (VL_SHIFTR_III(32,32,32, 
                                                   ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorB) 
                                                    * 
                                                    vlSelfRef.tbGenericVga__DOT__dut__DOT__lightColB
                                                    [1U]), 8U) 
                                     * vlSelfRef.tbGenericVga__DOT__dut__DOT__difQInt), 4U);
        tbGenericVga__DOT__dut__DOT__aR = (tbGenericVga__DOT__dut__DOT__aR 
                                           + vlSelfRef.tbGenericVga__DOT__dut__DOT__cR);
        tbGenericVga__DOT__dut__DOT__aG = (tbGenericVga__DOT__dut__DOT__aG 
                                           + vlSelfRef.tbGenericVga__DOT__dut__DOT__cG);
        tbGenericVga__DOT__dut__DOT__aB = (tbGenericVga__DOT__dut__DOT__aB 
                                           + vlSelfRef.tbGenericVga__DOT__dut__DOT__cB);
    }
    tbGenericVga__DOT__dut__DOT__rMix = VL_EXTENDS_II(32,12, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestRefl));
    if (VL_GTS_III(32, 0U, tbGenericVga__DOT__dut__DOT__rMix)) {
        tbGenericVga__DOT__dut__DOT__rMix = 0U;
    }
    if (VL_LTS_III(32, 0x10U, tbGenericVga__DOT__dut__DOT__rMix)) {
        tbGenericVga__DOT__dut__DOT__rMix = 0x10U;
    }
    tbGenericVga__DOT__dut__DOT__fR = VL_SHIFTR_III(32,32,32, 
                                                    (VL_MULS_III(32, tbGenericVga__DOT__dut__DOT__aR, 
                                                                 ((IData)(0x10U) 
                                                                  - tbGenericVga__DOT__dut__DOT__rMix)) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0xffU), tbGenericVga__DOT__dut__DOT__rMix)), 4U);
    tbGenericVga__DOT__dut__DOT__fG = VL_SHIFTR_III(32,32,32, 
                                                    (VL_MULS_III(32, tbGenericVga__DOT__dut__DOT__aG, 
                                                                 ((IData)(0x10U) 
                                                                  - tbGenericVga__DOT__dut__DOT__rMix)) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0xffU), tbGenericVga__DOT__dut__DOT__rMix)), 4U);
    tbGenericVga__DOT__dut__DOT__fB = VL_SHIFTR_III(32,32,32, 
                                                    (VL_MULS_III(32, tbGenericVga__DOT__dut__DOT__aB, 
                                                                 ((IData)(0x10U) 
                                                                  - tbGenericVga__DOT__dut__DOT__rMix)) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0xffU), tbGenericVga__DOT__dut__DOT__rMix)), 4U);
    if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__regValid) 
         & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHit))) {
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__v 
            = tbGenericVga__DOT__dut__DOT__fR;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__v 
            = tbGenericVga__DOT__dut__DOT__fG;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__v 
            = tbGenericVga__DOT__dut__DOT__fB;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__Vfuncout 
            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__v)
                ? 0U : (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__v)
                         ? 0xffU : (0xffU & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__v)));
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__Vfuncout 
            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__v)
                ? 0U : (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__v)
                         ? 0xffU : (0xffU & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__v)));
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__Vfuncout 
            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__v)
                ? 0U : (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__v)
                         ? 0xffU : (0xffU & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__v)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__rayR 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__Vfuncout;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__rayG 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__Vfuncout;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__rayB 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__Vfuncout;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__rayR = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__rayG = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__rayB = 0x20U;
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit = 0U;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT = 0U;
    if (((((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__disc)))) 
          & (0U != VL_EXTENDS_II(32,12, (0xfffU & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))) 
         & (0U != VL_EXTENDS_II(32,12, (0xfffU & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U)))))) {
        if ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0))) 
             & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1))))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit = 1U;
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT 
                = (VL_LTS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0), (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1))
                    ? (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0)
                    : (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1));
        } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit = 1U;
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit = 1U;
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__t1;
        }
    }
    if ((0U != (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__textR))) {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
    } else {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__rayR;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__rayG;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__rayB;
    }
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit = 0U;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT = 0U;
    if (((((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
           & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__disc)))) 
          & (0U != VL_EXTENDS_II(32,12, (0xfffU & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U))))) 
         & (0U != VL_EXTENDS_II(32,12, (0xfffU & VL_SHIFTL_III(12,12,32, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__aQ), 1U)))))) {
        if ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0))) 
             & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1))))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit = 1U;
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT 
                = (VL_LTS_III(12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0), (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1))
                    ? (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0)
                    : (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1));
        } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit = 1U;
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t0;
        } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1)))) {
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit = 1U;
            tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT 
                = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__t1;
        }
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sHitArr[0U] 
        = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr[0U] 
        = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sHitArr[1U] 
        = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr[1U] 
        = tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHitComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestTComb = 0x7ffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorRComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorGComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorBComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCxComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCyComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCzComb = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestReflComb = 0U;
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__sHitArr
         [0U] & VL_LTS_III(12, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr
                           [0U]))) {
        if ((1U & ((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHitComb)) 
                   | VL_LTS_III(12, vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr
                                [0U], (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestTComb))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHitComb = 1U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestTComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorRComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorRArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorGComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorGArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorBComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorBArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCxComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sCxArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCyComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sCyArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCzComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sCzArr
                [0U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestReflComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sReflArr
                [0U];
        }
    }
    if ((vlSelfRef.tbGenericVga__DOT__dut__DOT__sHitArr
         [1U] & VL_LTS_III(12, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr
                           [1U]))) {
        if ((1U & ((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHitComb)) 
                   | VL_LTS_III(12, vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr
                                [1U], (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestTComb))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHitComb = 1U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestTComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sTArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorRComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorRArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorGComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorGArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorBComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sColorBArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCxComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sCxArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCyComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sCyArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCzComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sCzArr
                [1U];
            vlSelfRef.tbGenericVga__DOT__dut__DOT__bestReflComb 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__sReflArr
                [1U];
        }
    }
}

VL_ATTR_COLD void VtbGenericVga___024root___eval_triggers__stl(VtbGenericVga___024root* vlSelf);

VL_ATTR_COLD bool VtbGenericVga___024root___eval_phase__stl(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__stl\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VtbGenericVga___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock50MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock50MHz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtbGenericVga___024root___ctor_var_reset(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___ctor_var_reset\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock50MHz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338176833659517881ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->hSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405095437869080945ull);
    vlSelf->vSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474973556749001514ull);
    vlSelf->xOrd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2579758244528848228ull);
    vlSelf->yOrd = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7494390182599160760ull);
    vlSelf->visible = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2645716972831216280ull);
    vlSelf->red = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11208870015262361521ull);
    vlSelf->green = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5450689637559701443ull);
    vlSelf->blue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 682173560715366168ull);
    vlSelf->tbGenericVga__DOT__xReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3853948796521526597ull);
    vlSelf->tbGenericVga__DOT__yReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3162497850089573160ull);
    vlSelf->tbGenericVga__DOT__hSyncReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7374664606162577954ull);
    vlSelf->tbGenericVga__DOT__vSyncReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6939879676752794004ull);
    vlSelf->tbGenericVga__DOT__visibleReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713821438494026491ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__normDx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16029205691400857409ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__normDy = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8923745351081781706ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__normDz = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13681343748943719816ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sHitArr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14336404604459038405ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sTArr[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14877216816283432788ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sCxArr[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11803483571604749122ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sCyArr[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16613530765408316376ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sCzArr[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3267217270002121965ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sReflArr[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16701815787837493838ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sColorRArr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11991195558304157294ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sColorGArr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10198385549659454707ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__sColorBArr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4688912071717080562ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__bestHitComb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8080504530789417462ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestTComb = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6651904976074150854ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestColorRComb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15975053174222320644ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestColorGComb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6824844314781133524ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestColorBComb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17416174029697398616ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestCxComb = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16070416190454266968ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestCyComb = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8887554363313088451ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestCzComb = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5284409452005746741ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestReflComb = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12053167576772196063ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestHit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4547522035703488817ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestT = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6913814414556938489ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestColorR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18024014252663508049ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestColorG = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11386847102867840815ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestColorB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10311982885164243214ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestCx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3079414749236936604ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestCy = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6607550666369990503ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestCz = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8442498680113129427ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__bestRefl = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16303296193256051222ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__regNormDx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5372611445026171443ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__regNormDy = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3936741222980109132ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__regNormDz = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7756100471911176817ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__regValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16697271048898551940ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightPosX[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9720577276427310900ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightPosY[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5863892089326193065ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightPosZ[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14560623562531408718ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightColR[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15912804207204635056ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightColG[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10397635980638836716ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightColB[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6698968042920065818ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__lightIntens[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 414147464592970454ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__difQ[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11406582493091220338ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__ndotlGt[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1311856453160856877ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__difQInt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16949868850843948392ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__cR = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6821877073189092329ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__cG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12310435020611314111ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__cB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11994146359248572010ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__rayR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12678774347152739607ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__rayG = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16623578640465184388ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__rayB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11378722057767810887ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerH = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17838707736592788049ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerM = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16492125781298753563ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerS = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3665473631189965124ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerSub = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9002534409753326925ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11924154759370711739ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerAddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6736080339559463047ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerData = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17287148638569101271ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRamAddrB = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18027942665082243348ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRamDataB = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10708756683283982420ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__textR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3549848039367791574ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14558147291640341801ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12320204392368988296ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8079518695244878996ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRadius = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4407748732108062926ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRefl = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11660216687377320232ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16324295235428916346ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorG = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9176355637146982467ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3928450737472903222ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7787878576481113978ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17788671893045055662ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7152380115113144438ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 636828030833090032ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6302770817868905304ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16166308713956676676ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3045929238674507906ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11293887816745745223ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15214232837865737480ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11294990480349500352ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6312596273866630706ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12762220929159803255ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9920712483356495369ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 595988230350959414ull);
    for (int __Vi0 = 0; __Vi0 < 4800; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5171550136877016862ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h9db3a3ed__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5858494960211093949ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h044ee20f__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2179773472292991607ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__u_textGen__DOT__font__DOT__fontMemory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7244499110501761345ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__sqrtDisc = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13892622090614655422ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7903507833745746769ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15760975273018826451ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14309983684814490203ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12819844705382174401ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__sqrtDisc = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18436763458686295131ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_r2Mul__DOT__shifted = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6509301764765864994ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12043461866306588957ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 141180003901337004ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 941882564115478085ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15917106824393348273ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 730183392280036742ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17719199630787588325ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7155556213347724942ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16244848405989000718ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11526050461307495552ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17908015347251814779ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15309023546006874713ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8746777872763580015ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4681826421882035734ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3414299518573244816ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4252495530623946912ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15417759402490637051ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12696039288712746723ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13907846426936942101ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13057950915956305146ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15234481920652211767ull);
    vlSelf->__Vdly__tbGenericVga__DOT__yReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17996261440504316600ull);
    vlSelf->__Vdly__tbGenericVga__DOT__xReg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10598295795538325089ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3478702576269267745ull);
}
