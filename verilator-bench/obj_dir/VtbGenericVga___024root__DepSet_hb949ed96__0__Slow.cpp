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
    // Body
    vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr[0U] = 0x18000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr[1U] = 0x18000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr[2U] = 0x30000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__refl_arr[0U] = 0xa666U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__refl_arr[1U] = 0xa666U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__refl_arr[2U] = 0x2666U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr[0U] = 0x50U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr[1U] = 0xa0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr[2U] = 0xdcU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr[0U] = 0xffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr[1U] = 0x3cU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr[2U] = 0xdcU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr[0U] = 0x60000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr[1U] = 0x60000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr[2U] = 0x68000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr[0U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr[1U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr[2U] = 0xfffc0000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr[0U] = 0xfffe4000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr[1U] = 0x1c000U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr[2U] = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr[0U] = 0x3cU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr[1U] = 0xffU;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr[2U] = 0xdcU;
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
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__output_valid;
    tbGenericVga__DOT__dut__DOT__output_valid = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dx;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dx = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dy;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dy = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_x;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_x = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_y;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_y = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_r_i;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_r_i = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_g_i;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_g_i = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i = 0;
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__bounce;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__bounce = 0;
    IData/*31:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__x;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__x = 0;
    IData/*31:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__y;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__y = 0;
    IData/*31:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__z;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__z = 0;
    IData/*31:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag2;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag2 = 0;
    IData/*31:0*/ __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ax;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ax = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ay;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ay = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__bx;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__bx = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__by;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__by = 0;
    QData/*63:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__px;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__px = 0;
    QData/*63:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__py;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__py = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__a;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__a = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0;
    CData/*7:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__v;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__v = 0;
    CData/*7:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__v;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__v = 0;
    CData/*7:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__v;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__v = 0;
    // Body
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    tbGenericVga__DOT__dut__DOT__output_valid = ((IData)(vlSelfRef.resetn) 
                                                 & (IData)(vlSelfRef.tbGenericVga__DOT__visibleReg));
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_x 
        = (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
           - (IData)(0x140U));
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_y 
        = ((IData)(0xf0U) - VL_EXTENDS_II(32,10, (0x1ffU 
                                                  & (IData)(vlSelfRef.tbGenericVga__DOT__yReg))));
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dx 
        = VL_SHIFTL_III(32,32,32, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_x, 0xeU);
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dy 
        = VL_SHIFTL_III(32,32,32, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__centered_y, 0xeU);
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__z = 0x640000U;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__y 
        = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dy;
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__x 
        = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__raw_dx;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__by 
        = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__y;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__bx 
        = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__x;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ay 
        = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__y;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ax 
        = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__x;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__px 
        = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                               VL_EXTENDS_QI(64,32, __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ax), 
                                               VL_EXTENDS_QI(64,32, __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__bx)), 0x10U);
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__py 
        = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                               VL_EXTENDS_QI(64,32, __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__ay), 
                                               VL_EXTENDS_QI(64,32, __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__by)), 0x10U);
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__Vfuncout 
        = ((IData)(0x27100000U) + ((IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__px) 
                                   + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__py)));
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag2 
        = __Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__5__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__a 
        = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag2;
    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__unnamedblk1__DOT__i = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5964510206825393379ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1547955074883347053ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15276132497297525097ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16214401567719977723ull);
    if (VL_GTES_III(32, 0U, __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__a)) {
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__Vfuncout = 0U;
    } else {
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v 
            = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__a)), 0x10U);
        __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__unnamedblk1__DOT__i = 0xffffffffU;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r = 0ULL;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x2eU));
        if ((1ULL <= vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem)) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x2cU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x2aU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x28U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x26U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x24U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x22U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x20U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x1eU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x1cU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x1aU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x18U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x16U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x14U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x12U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0x10U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0xeU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0xcU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 0xaU)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 8U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 6U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 4U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v, 2U)));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
            = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem, 2U) 
               | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v));
        if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
             >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)))) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem 
                   - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 2U)));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U));
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r, 1U);
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__result 
            = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r);
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__Vfuncout 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__result;
    }
    __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag 
        = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__Vfuncout;
    if (VL_GTES_III(32, 0U, __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag)) {
        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nx = 0U;
        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__ny = 0U;
        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nz = 0U;
    } else {
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__b 
            = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__a 
            = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__x;
        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8411790916751220309ull);
        if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__b)) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__quotient 
                = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__a)
                    ? 0x7fffffffU : 0x80000001U);
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__dividend_shifted 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__a), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__quotient 
                = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__dividend_shifted, 
                                      VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__b)));
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__Vfuncout 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__quotient;
        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nx 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__Vfuncout;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__b 
            = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__a 
            = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__y;
        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17297244999885397667ull);
        if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__b)) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__quotient 
                = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__a)
                    ? 0x7fffffffU : 0x80000001U);
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__dividend_shifted 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__a), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__quotient 
                = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__dividend_shifted, 
                                      VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__b)));
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__Vfuncout 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__quotient;
        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__ny 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__Vfuncout;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__b 
            = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__mag;
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__a 
            = __Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__z;
        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14459322188750597333ull);
        if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__b)) {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__quotient 
                = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__a)
                    ? 0x7fffffffU : 0x80000001U);
        } else {
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__dividend_shifted 
                = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__a), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__quotient 
                = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__dividend_shifted, 
                                      VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__b)));
        }
        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__Vfuncout 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__quotient;
        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nz 
            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__Vfuncout;
    }
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx 
        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nx;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy 
        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__ny;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz 
        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nz;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_r_i = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_g_i = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i = 0x10U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i = 0U;
    tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__bounce = 0U;
    {
        while (VL_GTS_III(32, 4U, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__bounce)) {
            if (VL_LTES_III(32, 8U, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i)) {
                goto __Vlabel0;
            }
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i 
                = ((IData)(1U) + tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t = 0x7fffffffU;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx = 0xffffffffU;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                [0U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                [0U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                [0U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                [0U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox;
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6463559219259141275ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11813221515627894720ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2814852370261875066ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9016083427039177183ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6472718764644621881ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15232172298548238419ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11971257093957512095ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11026806104698377066ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7731643901314502624ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9372972612356841900ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16646548326660753496ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 957665068623298224ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13928779255427605541ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15951046569148376838ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5844974155417822041ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12289967936214763258ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16136760609398231852ull);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13449307335582464324ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13487880785907190170ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10951615641559772968ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 969836828827184337ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5871413440906016516ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5539874326228627260ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10954851714259256737ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11877302346992358651ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2969389111970991104ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1238659287162677114ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17707173568570718566ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7967835424803252948ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9057067687645890613ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4572988755147016520ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15995630313151431025ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 0U;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t = 0U;
            if ((VL_LTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc) 
                 & (0U != vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a))) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5149509377702763758ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16949915074987389556ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7028736010660097004ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16739663318723907091ull);
                if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout = 0U;
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a)), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = 0ULL;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = 0ULL;
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2eU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x16U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2cU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x15U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2aU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x14U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x28U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x13U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x26U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x12U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x24U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x11U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x22U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x10U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x20U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xfU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1eU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xeU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1cU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xdU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1aU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xcU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x18U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xbU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x16U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xaU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x14U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 9U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x12U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 8U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x10U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 7U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xeU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 6U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xcU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 5U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xaU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 4U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 8U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 3U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 6U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 2U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 4U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 1U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 2U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v));
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result 
                        = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout 
                        = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result;
                }
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                    = (- vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB);
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 
                    = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                       - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc);
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 
                    = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                       + vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9856451845271476917ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9374413239581678254ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10843215524714430796ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2664327443900705509ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout;
                if ((VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0) 
                     & VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1))) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = (VL_LTS_III(32, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1)
                            ? vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0
                            : vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1);
                } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0)) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0;
                } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1)) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1;
                }
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                [1U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                [1U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                [1U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                [1U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox;
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6463559219259141275ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11813221515627894720ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2814852370261875066ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9016083427039177183ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6472718764644621881ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15232172298548238419ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11971257093957512095ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11026806104698377066ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7731643901314502624ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9372972612356841900ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16646548326660753496ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 957665068623298224ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13928779255427605541ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15951046569148376838ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5844974155417822041ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12289967936214763258ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16136760609398231852ull);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13449307335582464324ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13487880785907190170ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10951615641559772968ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 969836828827184337ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5871413440906016516ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5539874326228627260ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10954851714259256737ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11877302346992358651ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2969389111970991104ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1238659287162677114ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17707173568570718566ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7967835424803252948ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9057067687645890613ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4572988755147016520ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15995630313151431025ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 0U;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t = 0U;
            if ((VL_LTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc) 
                 & (0U != vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a))) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5149509377702763758ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16949915074987389556ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7028736010660097004ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16739663318723907091ull);
                if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout = 0U;
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a)), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = 0ULL;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = 0ULL;
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2eU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x16U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2cU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x15U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2aU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x14U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x28U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x13U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x26U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x12U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x24U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x11U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x22U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x10U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x20U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xfU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1eU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xeU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1cU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xdU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1aU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xcU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x18U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xbU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x16U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xaU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x14U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 9U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x12U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 8U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x10U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 7U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xeU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 6U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xcU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 5U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xaU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 4U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 8U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 3U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 6U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 2U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 4U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 1U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 2U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v));
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result 
                        = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout 
                        = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result;
                }
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                    = (- vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB);
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 
                    = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                       - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc);
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 
                    = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                       + vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9856451845271476917ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9374413239581678254ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10843215524714430796ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2664327443900705509ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout;
                if ((VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0) 
                     & VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1))) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = (VL_LTS_III(32, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1)
                            ? vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0
                            : vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1);
                } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0)) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0;
                } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1)) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1;
                }
            }
            if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp) 
                 & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp))) {
                if ((1U & ((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit)) 
                           | VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit = 1U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx = 0U;
                }
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                [2U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                [2U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                [2U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                [2U];
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox;
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6463559219259141275ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11813221515627894720ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2814852370261875066ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9016083427039177183ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6472718764644621881ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15232172298548238419ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11971257093957512095ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11026806104698377066ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7731643901314502624ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9372972612356841900ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16646548326660753496ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 957665068623298224ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13928779255427605541ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15951046569148376838ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5844974155417822041ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12289967936214763258ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16136760609398231852ull);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13449307335582464324ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13487880785907190170ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10951615641559772968ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 969836828827184337ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5871413440906016516ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5539874326228627260ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10954851714259256737ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11877302346992358651ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2969389111970991104ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1238659287162677114ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17707173568570718566ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7967835424803252948ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9057067687645890613ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4572988755147016520ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15995630313151431025ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded 
                           >> 0x10U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc 
                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 
                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 0U;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t = 0U;
            if ((VL_LTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc) 
                 & (0U != vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a))) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5149509377702763758ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16949915074987389556ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7028736010660097004ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16739663318723907091ull);
                if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout = 0U;
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v 
                        = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a)), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = 0ULL;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = 0ULL;
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x17U;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2eU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x16U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2cU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x15U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x2aU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x14U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x28U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x13U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x26U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x12U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x24U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x11U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x22U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0x10U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x20U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xfU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1eU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xeU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1cU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xdU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x1aU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xcU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x18U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xbU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x16U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xaU;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x14U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 9U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x12U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 8U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0x10U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 7U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xeU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 6U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xcU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 5U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 0xaU)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 4U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 8U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 3U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 6U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 2U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 4U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 1U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v, 2U)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0U;
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                        = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem, 2U) 
                           | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v));
                    if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                         >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)))) {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                            = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem 
                               - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 2U)));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U));
                    } else {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r 
                            = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r, 1U);
                    }
                    __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__unnamedblk1__DOT__i = 0xffffffffU;
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result 
                        = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout 
                        = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result;
                }
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                    = (- vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB);
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 
                    = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                       - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc);
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 
                    = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB 
                       + vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9856451845271476917ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9374413239581678254ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10843215524714430796ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2664327443900705509ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout;
                if ((VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0) 
                     & VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1))) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = (VL_LTS_III(32, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1)
                            ? vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0
                            : vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1);
                } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0)) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0;
                } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1)) {
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = 1U;
                    vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t 
                        = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1;
                }
            }
            if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp) 
                 & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp))) {
                if ((1U & ((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit)) 
                           | VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit = 1U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx = 1U;
                }
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t;
            if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp) 
                 & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp))) {
                if ((1U & ((~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit)) 
                           | VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit = 1U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx = 2U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit)))) {
                tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i 
                    = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i 
                       + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, (IData)(0x20U), tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i), 4U));
                goto __Vlabel0;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_x 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox 
                   + ([&]() {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__b 
                            = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__a 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2174681747449387394ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13280463538769986407ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__full_prod 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__a), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__b));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__rounded 
                            = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__full_prod);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__Vfuncout 
                            = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__rounded 
                                       >> 0x10U));
                    }(), vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__Vfuncout));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_y 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy 
                   + ([&]() {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__b 
                            = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__a 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8533992335987357005ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10932229368983091484ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__full_prod 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__a), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__b));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__rounded 
                            = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__full_prod);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__Vfuncout 
                            = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__rounded 
                                       >> 0x10U));
                    }(), vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__Vfuncout));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_z 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz 
                   + ([&]() {
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__b 
                            = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__a 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8851335764779855285ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15254020408132470468ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__full_prod 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__a), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__b));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__rounded 
                            = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__full_prod);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__Vfuncout 
                            = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__rounded 
                                       >> 0x10U));
                    }(), vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__Vfuncout));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_x 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_x 
                   - ((2U >= (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                       ? vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                      [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                       : 0U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_y 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_y 
                   - ((2U >= (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                       ? vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                      [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                       : 0U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_z 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_z 
                   - ((2U >= (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                       ? vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                      [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                       : 0U));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_z;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_y;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_x;
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9519108219618602195ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12243627669018286277ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__x;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10332823424348233741ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6570063439042501816ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2063512018565267597ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag2;
            __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12236780273505085091ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9133774574176070936ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16746964867793764833ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4309269146583710105ull);
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__a)) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__Vfuncout = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v 
                    = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__a)), 0x10U);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem = 0ULL;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r = 0ULL;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x2eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x16U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x2cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x15U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x2aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x14U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x28U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x13U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x26U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x12U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x24U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x11U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x22U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0x10U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x20U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xfU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x1eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xeU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x1cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xdU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x1aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xcU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x18U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xbU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x16U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xaU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x14U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 9U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x12U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 8U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0x10U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 7U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0xeU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 6U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0xcU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 5U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 0xaU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 4U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 8U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 3U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 6U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 2U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 4U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 1U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v, 2U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem, 2U) 
                       | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v));
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r, 1U);
                }
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__result 
                    = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__result;
            }
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__Vfuncout;
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag)) {
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nx = 0U;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__ny = 0U;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nz = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__x;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5097888478281242232ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13639012751417382016ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nx 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__y;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8196283167758094925ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13739732605404626527ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__ny 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__z;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7457608830618951945ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8215123108383514074ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nz 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__Vfuncout;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nx;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__ny;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nz;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_r_i 
                = VL_SHIFTRS_III(32,32,32, ((2U >= 
                                             (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                             ? vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr
                                            [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                             : 0U), 3U);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_g_i 
                = VL_SHIFTRS_III(32,32,32, ((2U >= 
                                             (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                             ? vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr
                                            [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                             : 0U), 3U);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_b_i 
                = VL_SHIFTRS_III(32,32,32, ((2U >= 
                                             (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                             ? vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr
                                            [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                             : 0U), 3U);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_x 
                = (- vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_x);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_y 
                = ((IData)(0x50000U) - vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_y);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_z 
                = ((IData)(0x60000U) - vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_z);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__bz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__by 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__bx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_x;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__az 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__ay 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__ax 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8604356871961217624ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10891973004144133937ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17198579990170985631ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__pz));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__a 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__Vfuncout;
            __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8669577054439514140ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10852085343746535238ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9336869576461547450ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6425706599140370276ull);
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__a)) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__Vfuncout = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v 
                    = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__a)), 0x10U);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem = 0ULL;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r = 0ULL;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x2eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x16U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x2cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x15U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x2aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x14U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x28U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x13U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x26U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x12U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x24U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x11U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x22U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0x10U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x20U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xfU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x1eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xeU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x1cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xdU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x1aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xcU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x18U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xbU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x16U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xaU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x14U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 9U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x12U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 8U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0x10U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 7U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0xeU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 6U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0xcU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 5U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 0xaU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 4U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 8U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 3U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 6U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 2U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 4U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 1U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v, 2U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem, 2U) 
                       | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v));
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r, 1U);
                }
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__result 
                    = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__result;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__dist_to_light 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__Vfuncout;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_z;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_y;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_x;
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 415827530236841484ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3857477022182211358ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__x;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15340158972749365874ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13718233557032903878ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5396637010634754669ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag2;
            __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15264828873761621676ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13293861094655469155ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2644242898148036742ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9053804862375204513ull);
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__a)) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__Vfuncout = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v 
                    = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__a)), 0x10U);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem = 0ULL;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r = 0ULL;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x2eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x16U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x2cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x15U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x2aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x14U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x28U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x13U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x26U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x12U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x24U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x11U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x22U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0x10U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x20U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xfU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x1eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xeU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x1cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xdU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x1aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xcU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x18U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xbU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x16U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xaU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x14U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 9U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x12U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 8U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0x10U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 7U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0xeU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 6U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0xcU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 5U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 0xaU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 4U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 8U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 3U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 6U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 2U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 4U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 1U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v, 2U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem, 2U) 
                       | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v));
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r, 1U);
                }
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__result 
                    = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__result;
            }
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__Vfuncout;
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag)) {
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nx = 0U;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__ny = 0U;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nz = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__x;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 705600928149559028ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8756780431428496073ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nx 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__y;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10611832960067059258ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12974766107267360282ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__ny 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__z;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12340537796453539457ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15010999490179992147ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nz 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__Vfuncout;
            }
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_x 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nx;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_y 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__ny;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_z 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__bz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__by 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__bx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_x;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__az 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__ay 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__ax 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17754496158820783580ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2564980113481683148ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13746675397959007337ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__pz));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotl 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__Vfuncout;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__in_shadow = 0U;
            if (VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotl)) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__b = 0x28fU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8948176734413784249ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5889231693109232615ull);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__full_prod 
                    = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__a), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__b));
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__rounded 
                    = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__full_prod);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__Vfuncout 
                    = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__rounded 
                               >> 0x10U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nx 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__b = 0x28fU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15795162008658366765ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4833688233022716020ull);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__full_prod 
                    = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__a), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__b));
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__rounded 
                    = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__full_prod);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__Vfuncout 
                    = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__rounded 
                               >> 0x10U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_ny 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__b = 0x28fU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__a 
                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4187380448851567178ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4321808795556760757ull);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__full_prod 
                    = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__a), 
                                  VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__b));
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__rounded 
                    = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__full_prod);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__Vfuncout 
                    = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__rounded 
                               >> 0x10U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nz 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__Vfuncout;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_ox 
                    = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_x 
                       + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nx);
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_oy 
                    = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_y 
                       + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_ny);
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_oz 
                    = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_z 
                       + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nz);
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2 = 0U;
                {
                    while (VL_GTS_III(32, 3U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2)) {
                        if (VL_LTES_III(32, 8U, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i)) {
                            goto __Vlabel1;
                        }
                        tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i 
                            = ((IData)(1U) + tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i);
                        if ((2U >= (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2))) {
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__radius 
                                = vlSelfRef.tbGenericVga__DOT__dut__DOT__radius_arr
                                [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2)];
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cz 
                                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cz_arr
                                [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2)];
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cy 
                                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cy_arr
                                [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2)];
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cx 
                                = vlSelfRef.tbGenericVga__DOT__dut__DOT__cx_arr
                                [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2)];
                        } else {
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__radius = 0U;
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cz = 0U;
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cy = 0U;
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cx = 0U;
                        }
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dz 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_z;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dy 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_y;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dx 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_x;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__oz 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_oz;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__oy 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_oy;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ox 
                            = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_ox;
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11341656018425423536ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ly = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16605609082872288833ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15483454957611733536ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13116477846059063455ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__halfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9019259804655157239ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__l2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9882224392261562928ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6656759237781671169ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11778920622167727899ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hb2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8556631882998420359ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ac = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2008503622593160652ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__disc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17269497710020438927ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__sqrtDisc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14140726535430297536ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__negHalfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9061096843898590665ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12479135692065111346ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2114519255382868876ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13807606820451590940ull);
                        vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14215630220728802057ull);
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lx 
                            = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ox 
                               - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cx);
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ly 
                            = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__oy 
                               - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cy);
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lz 
                            = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__oz 
                               - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cz);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__bz 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__by 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dy;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__bx 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dx;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__az 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__ay 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dy;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__ax 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dx;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16795643223043977889ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7840727482221384977ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3157266446280749063ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__px 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__ax), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__bx)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__py 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__ay), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__by)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__pz 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__az), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__bz)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__px) 
                                + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__py)) 
                               + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__pz));
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a 
                            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__Vfuncout;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__bz 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__by 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dy;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__bx 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dx;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__az 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__ay 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ly;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__ax 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lx;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6980533741691476852ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1962972606594728856ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9468012273552814070ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__px 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__ax), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__bx)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__py 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__ay), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__by)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__pz 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__az), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__bz)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__px) 
                                + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__py)) 
                               + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__pz));
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__halfB 
                            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__Vfuncout;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__bz 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__by 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ly;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__bx 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lx;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__az 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lz;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__ay 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ly;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__ax 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lx;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1046939660080336251ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6258761204104792634ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9208181051941824538ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__px 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__ax), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__bx)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__py 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__ay), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__by)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__pz 
                            = VL_SHIFTRS_QQI(64,64,32, 
                                             VL_MULS_QQQ(64, 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__az), 
                                                         VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__bz)), 0x10U);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__px) 
                                + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__py)) 
                               + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__pz));
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__l2 
                            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__Vfuncout;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__b 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__radius;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__a 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__radius;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8440861987219047897ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16432921259195707051ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__full_prod 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__a), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__b));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__rounded 
                            = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__full_prod);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__Vfuncout 
                            = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__rounded 
                                       >> 0x10U));
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__r2 
                            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__Vfuncout;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__c 
                            = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__l2 
                               - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__r2);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__b 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__halfB;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__a 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__halfB;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17445707065434866422ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14437697079469531607ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__full_prod 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__a), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__b));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__rounded 
                            = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__full_prod);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__Vfuncout 
                            = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__rounded 
                                       >> 0x10U));
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hb2 
                            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__Vfuncout;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__b 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__c;
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__a 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a;
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9349561314598260291ull);
                        vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17113079509715409962ull);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__full_prod 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__a), 
                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__b));
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__rounded 
                            = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__full_prod);
                        vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__Vfuncout 
                            = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__rounded 
                                       >> 0x10U));
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ac 
                            = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__Vfuncout;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__disc 
                            = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hb2 
                               - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ac);
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hit = 0U;
                        vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t = 0U;
                        if ((VL_LTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__disc) 
                             & (0U != vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a))) {
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__a 
                                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__disc;
                            __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0;
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10732152916120255764ull);
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12760477353738036357ull);
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5257552397170616912ull);
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8608374243297607922ull);
                            if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__a)) {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__Vfuncout = 0U;
                            } else {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v 
                                    = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__a)), 0x10U);
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem = 0ULL;
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r = 0ULL;
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x17U;
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x2eU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x16U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x2cU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x15U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x2aU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x14U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x28U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x13U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x26U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x12U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x24U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x11U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x22U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0x10U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x20U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xfU;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x1eU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xeU;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x1cU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xdU;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x1aU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xcU;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x18U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xbU;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x16U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xaU;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x14U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 9U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x12U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 8U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0x10U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 7U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0xeU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 6U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0xcU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 5U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 0xaU)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 4U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 8U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 3U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 6U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 2U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 4U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 1U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v, 2U)));
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0U;
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem, 2U) 
                                       | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v));
                                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)))) {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem 
                                           - (1ULL 
                                              | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 2U)));
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U));
                                } else {
                                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r 
                                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r, 1U);
                                }
                                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__unnamedblk1__DOT__i = 0xffffffffU;
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__result 
                                    = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r);
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__Vfuncout 
                                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__result;
                            }
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__sqrtDisc 
                                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__Vfuncout;
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__negHalfB 
                                = (- vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__halfB);
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num0 
                                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__negHalfB 
                                   - vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__sqrtDisc);
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num1 
                                = (vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__negHalfB 
                                   + vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__sqrtDisc);
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__b 
                                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a;
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__a 
                                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num0;
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9700468746298346131ull);
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15048674355572152263ull);
                            if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__b)) {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__quotient 
                                    = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__a)
                                        ? 0x7fffffffU
                                        : 0x80000001U);
                            } else {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__dividend_shifted 
                                    = VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__a), 0x10U);
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__quotient 
                                    = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__dividend_shifted, 
                                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__b)));
                            }
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__Vfuncout 
                                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__quotient;
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0 
                                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__Vfuncout;
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__b 
                                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a;
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__a 
                                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num1;
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15481465826642477297ull);
                            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7396537230222434354ull);
                            if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__b)) {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__quotient 
                                    = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__a)
                                        ? 0x7fffffffU
                                        : 0x80000001U);
                            } else {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__dividend_shifted 
                                    = VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__a), 0x10U);
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__quotient 
                                    = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__dividend_shifted, 
                                                          VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__b)));
                            }
                            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__Vfuncout 
                                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__quotient;
                            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1 
                                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__Vfuncout;
                            if ((VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0) 
                                 & VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1))) {
                                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hit = 1U;
                                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t 
                                    = (VL_LTS_III(32, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1)
                                        ? vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0
                                        : vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1);
                            } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0)) {
                                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hit = 1U;
                                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t 
                                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0;
                            } else if (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1)) {
                                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hit = 1U;
                                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t 
                                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1;
                            }
                        }
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hit;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp 
                            = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t;
                        if ((((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp) 
                              & VL_LTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp)) 
                             & VL_LTS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__dist_to_light))) {
                            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__in_shadow = 1U;
                            goto __Vlabel1;
                        }
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2 
                            = ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2);
                    }
                    __Vlabel1: ;
                }
                if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__in_shadow)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i 
                        = VL_SHIFTRS_III(32,32,32, 
                                         ([&]() {
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__b = 0x249f0U;
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__a 
                                    = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotl;
                                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14679146713290750086ull);
                                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14465973341727761365ull);
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__full_prod 
                                    = VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__a), 
                                                  VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__b));
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__rounded 
                                    = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__full_prod);
                                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__Vfuncout 
                                    = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__rounded 
                                               >> 0x10U));
                            }(), vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__Vfuncout), 0xcU);
                    if (VL_LTS_III(32, 0x10U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i)) {
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i = 0x10U;
                    }
                    if (VL_GTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i)) {
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i = 0U;
                    }
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_r_i 
                        = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_r_i 
                           + VL_SHIFTRS_III(32,32,32, 
                                            VL_MULS_III(32, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_MULS_III(32, (IData)(0xffU), 
                                                                                ((2U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                                                                 ? 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__colorR_arr
                                                                                [
                                                                                (3U 
                                                                                & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                                                                 : 0U)), 8U), vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i), 4U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_g_i 
                        = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_g_i 
                           + VL_SHIFTRS_III(32,32,32, 
                                            VL_MULS_III(32, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_MULS_III(32, (IData)(0xf5U), 
                                                                                ((2U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                                                                 ? 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__colorG_arr
                                                                                [
                                                                                (3U 
                                                                                & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                                                                 : 0U)), 8U), vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i), 4U));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_b_i 
                        = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_b_i 
                           + VL_SHIFTRS_III(32,32,32, 
                                            VL_MULS_III(32, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_MULS_III(32, (IData)(0xe6U), 
                                                                                ((2U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                                                                 ? 
                                                                                vlSelfRef.tbGenericVga__DOT__dut__DOT__colorB_arr
                                                                                [
                                                                                (3U 
                                                                                & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                                                                 : 0U)), 8U), vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i), 4U));
                }
            }
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_r_i 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_r_i 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_r_i, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i), 4U));
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_g_i 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_g_i 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_g_i, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i), 4U));
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_b_i, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i), 4U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i 
                = VL_SHIFTRS_III(32,32,32, ((2U >= 
                                             (3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx))
                                             ? vlSelfRef.tbGenericVga__DOT__dut__DOT__refl_arr
                                            [(3U & vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx)]
                                             : 0U), 0xcU);
            if (VL_GTS_III(32, 0U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i)) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i = 0U;
            }
            if (VL_LTS_III(32, 0x10U, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i)) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i = 0x10U;
            }
            if (((0U == vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i) 
                 | VL_LTES_III(32, 8U, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__iter_i))) {
                goto __Vlabel0;
            }
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i 
                = VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i, vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i), 4U);
            if (VL_GTS_III(32, 1U, tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__weight_i)) {
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__bz 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__by 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__bx 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__az 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__ay 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__ax 
                = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14438229971467788728ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3377997603760318639ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5282816732780515072ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__pz));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotn 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__Vfuncout;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__two_ndotn 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotn 
                   + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotn);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__b 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__two_ndotn;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__a 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4629532504012364388ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6895436601389001329ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__rounded 
                           >> 0x10U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_x 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__b 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__two_ndotn;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__a 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2391531170512578850ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6988680835314888467ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__rounded 
                           >> 0x10U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_y 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__b 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__two_ndotn;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__a 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8593719665453608151ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2942501692143603519ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__rounded 
                           >> 0x10U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_z 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__Vfuncout;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_x 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_x);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_y 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_y);
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_z 
                = (tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz 
                   - vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_z);
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__z 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_z;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__y 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_y;
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__x 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_x;
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9120566177727237871ull);
            vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12433705764303854299ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__bz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__by 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__bx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__x;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__az 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__z;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__ay 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__y;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__ax 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 826672109643072945ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13621298341415278441ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14702601172089944727ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__px 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__ax), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__bx)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__py 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__ay), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__by)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__pz 
                = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__az), 
                                                       VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__bz)), 0x10U);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__px) 
                    + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__py)) 
                   + (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__pz));
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag2 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__a 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag2;
            __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10480746645407251570ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17225871723224481679ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10811866851546654411ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17865049106086299491ull);
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__a)) {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__Vfuncout = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v 
                    = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__a)), 0x10U);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem = 0ULL;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r = 0ULL;
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x17U;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x2eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x16U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x2cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x15U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x2aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x14U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x28U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x13U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x26U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x12U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x24U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x11U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x22U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0x10U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x20U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xfU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x1eU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xeU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x1cU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xdU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x1aU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xcU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x18U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xbU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x16U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xaU;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x14U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 9U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x12U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 8U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0x10U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 7U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0xeU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 6U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0xcU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 5U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 0xaU)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 4U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 8U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 3U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 6U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 2U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 4U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 1U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v, 2U)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0U;
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                    = (VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem, 2U) 
                       | (3ULL & vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v));
                if ((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                     >= (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)))) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                        = (vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem 
                           - (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 2U)));
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U));
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r, 1U);
                }
                __Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__result 
                    = (IData)(vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r);
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__result;
            }
            vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__Vfuncout;
            if (VL_GTES_III(32, 0U, vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag)) {
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nx = 0U;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__ny = 0U;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nz = 0U;
            } else {
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__x;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16708429404899157384ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17445171044416712838ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nx 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__y;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16803338715347539875ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2070743284635543319ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__ny 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__Vfuncout;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__b 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag;
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__a 
                    = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__z;
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5786203410114480205ull);
                vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7847267246337654036ull);
                if ((0U == vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__b)) {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__quotient 
                        = (VL_LTES_III(32, 0U, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__a)
                            ? 0x7fffffffU : 0x80000001U);
                } else {
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__dividend_shifted 
                        = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__a), 0x10U);
                    vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__quotient 
                        = (IData)(VL_DIVS_QQQ(64, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__dividend_shifted, 
                                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__b)));
                }
                vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__Vfuncout 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__quotient;
                vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nz 
                    = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__Vfuncout;
            }
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dx 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nx;
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dy 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__ny;
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_dz 
                = vlSelfRef.__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nz;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__b = 0x28fU;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__a 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17496710305337086058ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17470676308632638067ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__rounded 
                           >> 0x10U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nx 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__b = 0x28fU;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__a 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1419290627769869075ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12445659740532139268ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__rounded 
                           >> 0x10U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_ny 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__Vfuncout;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__b = 0x28fU;
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__a 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z;
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17825899418152853929ull);
            vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13153401716528386680ull);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__full_prod 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__a), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__b));
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__rounded 
                = (0x8000ULL + vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__full_prod);
            vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__Vfuncout 
                = (IData)((vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__rounded 
                           >> 0x10U));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nz 
                = vlSelfRef.__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__Vfuncout;
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_ox 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_x 
                   + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nx);
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oy 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_y 
                   + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_ny);
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ray_oz 
                = (vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_z 
                   + vlSelfRef.tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nz);
            tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__bounce 
                = ((IData)(1U) + tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__bounce);
        }
        __Vlabel0: ;
    }
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__v 
        = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_r_i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__Vfuncout 
        = (VL_GTS_III(32, 0U, __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__v)
            ? 0U : (VL_LTS_III(32, 0xffU, __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__v)
                     ? 0xffU : (0xffU & __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__v)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r_comb 
        = __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__65__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__v 
        = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_g_i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__Vfuncout 
        = (VL_GTS_III(32, 0U, __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__v)
            ? 0U : (VL_LTS_III(32, 0xffU, __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__v)
                     ? 0xffU : (0xffU & __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__v)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g_comb 
        = __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__66__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__v 
        = tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__accum_b_i;
    __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__Vfuncout 
        = (VL_GTS_III(32, 0U, __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__v)
            ? 0U : (VL_LTS_III(32, 0xffU, __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__v)
                     ? 0xffU : (0xffU & __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__v)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b_comb 
        = __Vfunc_tbGenericVga__DOT__dut__DOT__clamp_u8_fn__67__Vfuncout;
    if (tbGenericVga__DOT__dut__DOT__output_valid) {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__final_r_comb;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__final_g_comb;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__final_b_comb;
    } else {
        vlSelfRef.red = 0U;
        vlSelfRef.green = 0U;
        vlSelfRef.blue = 0x20U;
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
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__ico(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___dump_triggers__ico\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__cx_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7378292866638134318ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__cy_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11830591611403194169ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__cz_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16392725658098724284ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__radius_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12912137356397226938ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__colorR_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10276338491743566799ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__colorG_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6850422849485968197ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__colorB_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3292532880555991566ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__refl_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5656786532456858161ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__final_r_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1833156705910386366ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__final_g_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 264329489456960833ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__final_b_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3096845259422198544ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13941963046214029971ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16949462536014386ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__nearest_idx = 0;
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5551524679175035684ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__t_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4800843230557211703ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6420433067175645545ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14326477854428937618ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__hit_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12685942393790879499ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2082881674721944502ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16915957673242263769ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7557836228754784955ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14456990355056785646ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17239603437528640241ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__norm_raw_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3154230854385460829ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14033939149397871295ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13658187012015162979ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__to_light_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11019502926154662012ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6717360059039211801ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17451473715038250607ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ldir_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13076344623771367656ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9391771253836462128ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__dist_to_light = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15743378693100821735ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_ox = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6678426881935956195ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_oy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5651335714236672381ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shad_oz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16771963490593793856ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__in_shadow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14463372956068816074ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__ndotn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8078610723581377064ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__two_ndotn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8270710436199233625ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4586783026159801655ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17420524655005565838ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__proj_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12791480894806197793ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10894355153852744060ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10006462475960250423ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__refl_raw_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11186992871485146153ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10044517913658360922ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12842619996320407897ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__eps_nz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7657697432668563860ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_r_i = 0;
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_g_i = 0;
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__shade_b_i = 0;
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__rMix_i = 0;
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__difQInt_i = 0;
    vlSelf->tbGenericVga__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__si2 = 0;
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3315982072445891083ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10700200659123478621ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__4__nz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5744188066831968752ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13430901895326310168ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5964510206825393379ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1547955074883347053ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15276132497297525097ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__6__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16214401567719977723ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13931302152244168978ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9010341284141811693ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4123738195124624848ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8411790916751220309ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__7__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4426390439088581571ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13798250246097886440ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16311939314580866220ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18395741930283883540ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17297244999885397667ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__8__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15031642894514860294ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2031544792640501441ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14917545308379026975ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6692022749929893869ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14459322188750597333ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__9__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17173720375621484837ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ox = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1184748010325731655ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15461619604715665963ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__oz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13694018308644310687ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18165582679397886111ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11987658287068277243ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__dz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17476058787626671473ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16219497886813278355ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16379653425114714555ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__cz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3836471494532341164ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__radius = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15839599663740868786ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17640062058045767273ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3179402185867799317ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6463559219259141275ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ly = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11813221515627894720ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2814852370261875066ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9016083427039177183ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__halfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6472718764644621881ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__l2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15232172298548238419ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11971257093957512095ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11026806104698377066ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__hb2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7731643901314502624ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__ac = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9372972612356841900ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__disc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16646548326660753496ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__sqrtDisc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 957665068623298224ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__negHalfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13928779255427605541ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15951046569148376838ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__num1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5844974155417822041ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12289967936214763258ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__10__t1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16136760609398231852ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8903221330940209527ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16613819684641235715ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8710291458607188356ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6174026314259747331ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2019815838872633998ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5186998586886829166ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18408209426281421375ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13449307335582464324ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13487880785907190170ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__11__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10951615641559772968ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17126274237270546532ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11210761733295300553ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10241098334474739879ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2027782062284360173ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4968315410067991882ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2265742285101977383ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9538352907469434319ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 969836828827184337ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5871413440906016516ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__12__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5539874326228627260ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2622214809955612989ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15205316205261658064ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5873293319876857095ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18426303960959199317ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 853859651457419447ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13710330905211546998ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17100294312532211479ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10954851714259256737ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11877302346992358651ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__13__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2969389111970991104ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13812986690233135212ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14276904969380925016ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 497103711074911936ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1238659287162677114ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__14__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17707173568570718566ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18000845896886369464ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9730517924769245800ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1422796654883216016ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7967835424803252948ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__15__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9057067687645890613ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17092091727349873049ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17135709999919523282ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13525207619088284531ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4572988755147016520ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__16__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15995630313151431025ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12946484025299816142ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17521918844205723662ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5149509377702763758ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16949915074987389556ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7028736010660097004ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__17__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16739663318723907091ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2824215681089671708ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9738367674915545334ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16821149767633623146ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9856451845271476917ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__18__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9374413239581678254ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13604627124918429590ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16071218331707067204ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 697059704745387041ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10843215524714430796ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__19__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2664327443900705509ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6013888619293142516ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14343860275322656491ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7680636347059783511ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2174681747449387394ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__20__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13280463538769986407ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17464901753509538135ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9153096039187788743ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2881674218315456587ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8533992335987357005ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__21__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10932229368983091484ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16543352427436860792ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14806428996874007478ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 76411482967562833ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8851335764779855285ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__22__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15254020408132470468ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3588396540059039388ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9309183145511871786ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6225600613657648234ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10386160328506817166ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 518479136755062039ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__nz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18168474439376899457ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9519108219618602195ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__23__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12243627669018286277ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18207122890128496954ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211345736295646884ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10274814787866649918ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8491174948828788309ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3193154681018015712ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11281225881522141600ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16389361344703431840ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10332823424348233741ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6570063439042501816ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__24__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2063512018565267597ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2954382313165645822ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3421604902149445338ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12236780273505085091ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9133774574176070936ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16746964867793764833ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__25__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4309269146583710105ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5421975184081335736ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3783752243194778198ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6891295925874045345ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5097888478281242232ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__26__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13639012751417382016ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11773159322139411336ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13093983781222769985ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3816058224419449312ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8196283167758094925ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__27__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13739732605404626527ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1893588082417840993ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12866116824445858171ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13992942625677861265ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7457608830618951945ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__28__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8215123108383514074ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8184128399772135736ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5100905338294791272ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8669577054439514140ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10852085343746535238ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9336869576461547450ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__29__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6425706599140370276ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10428783852140498250ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 230745584182037832ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3721955844235766793ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15166083357039625691ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6187095064502269557ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15381753216917681929ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8945064021596575233ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8604356871961217624ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10891973004144133937ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__30__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17198579990170985631ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2183778673485174529ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17085989286158381272ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8719923296205830207ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1649503430802855152ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2671967986042259779ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__nz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11008479423291221406ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 415827530236841484ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__31__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3857477022182211358ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18372120452359506808ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6679606053669657256ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4417045599828977144ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4817670941551338314ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4659609792559521278ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6180076254626641525ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11943370484670812113ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15340158972749365874ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13718233557032903878ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__32__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5396637010634754669ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9039679925912490871ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8450660721999723674ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15264828873761621676ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13293861094655469155ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2644242898148036742ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__33__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9053804862375204513ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7131960165509126688ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15918904824136960160ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8496495622750354466ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 705600928149559028ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__34__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8756780431428496073ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4352106569541115688ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1720390136091739280ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13502199951529490884ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10611832960067059258ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__35__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12974766107267360282ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10479362651102672495ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1081431036998977815ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4360067356602098292ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12340537796453539457ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__36__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15010999490179992147ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12513610074946207030ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15571586563925941622ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12229049864238813691ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10132055037809879047ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5571451270798612344ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3799368156796364215ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13638726492972510247ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17754496158820783580ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2564980113481683148ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__37__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13746675397959007337ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16807549117345554706ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5974909887823238104ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1286940174497014060ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8948176734413784249ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__38__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5889231693109232615ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16847174442047131314ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16207549147542959038ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 88588401151236184ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15795162008658366765ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__39__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4833688233022716020ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1525399579818926500ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9041117763323678716ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4913703708356131930ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4187380448851567178ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__40__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4321808795556760757ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ox = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1542857894767879681ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__oy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3191774632248583637ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__oz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6219613360953045497ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13193309312573158460ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6573147663344058198ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__dz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2336636849444918756ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9620724560979593189ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2770789855359107363ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__cz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4342960770939985238ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__radius = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 963993294268347348ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11925435337023802350ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 802907405647906834ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11341656018425423536ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ly = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16605609082872288833ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__lz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15483454957611733536ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13116477846059063455ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__halfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9019259804655157239ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__l2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9882224392261562928ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__r2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6656759237781671169ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11778920622167727899ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__hb2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8556631882998420359ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__ac = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2008503622593160652ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__disc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17269497710020438927ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__sqrtDisc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14140726535430297536ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__negHalfB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9061096843898590665ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12479135692065111346ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__num1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2114519255382868876ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13807606820451590940ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__ray_sphere_task__41__t1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14215630220728802057ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16556475487299168490ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 439764460672886798ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17555921593356785684ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12052618522898864760ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7806291668004924405ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14083706304182025965ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7681118122189963538ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16795643223043977889ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7840727482221384977ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__42__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3157266446280749063ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1191641554264913234ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2395603499271428448ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10121338545522536153ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10930843184811870505ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13023133119897973560ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14166737858343469906ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17759478597917893631ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6980533741691476852ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1962972606594728856ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__43__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9468012273552814070ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18019012732206516631ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 436250779509289016ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10509591347368592520ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1079500145375298402ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2792761619847141756ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13831648938257776368ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16180791304980156011ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1046939660080336251ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6258761204104792634ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__44__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9208181051941824538ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17580954131212167872ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9166537710731121327ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1062591570746273246ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8440861987219047897ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__45__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16432921259195707051ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17542129969190641509ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17771595111024271334ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2135945254753528161ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17445707065434866422ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__46__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14437697079469531607ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4847314897237860737ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5137626309132287753ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 553095415078287814ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9349561314598260291ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__47__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17113079509715409962ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2623416966765448326ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5472453959288235504ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10732152916120255764ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12760477353738036357ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5257552397170616912ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__48__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8608374243297607922ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9458850067602482945ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2810539670943823564ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5274338260053150171ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9700468746298346131ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__49__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15048674355572152263ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8470395558114167162ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17502335658698601829ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5339339461888507913ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15481465826642477297ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__50__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7396537230222434354ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6162323580279694123ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9684825783393032342ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1464753909277574236ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14679146713290750086ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__51__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14465973341727761365ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2062439124959462286ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1693483289466785924ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8411794797156493973ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5762655185236582470ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8789297471046852220ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 413738999942003340ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8690206219636239129ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14438229971467788728ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3377997603760318639ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__52__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5282816732780515072ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2918083490930107029ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10381619196892161685ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4683800808067897643ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4629532504012364388ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__53__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6895436601389001329ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4718155387161539950ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3585734354460111465ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17941994291886806217ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2391531170512578850ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__54__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6988680835314888467ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7408798007296880624ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18130940770829814735ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 878216953516794789ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8593719665453608151ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__55__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2942501692143603519ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12975197783206297796ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11533437511116793370ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6996905215169400886ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4843138162441419050ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4724712904775227329ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__nz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11678048169506690197ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9120566177727237871ull);
    vlSelf->__Vtask_tbGenericVga__DOT__dut__DOT__normalize3_task__56__mag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12433705764303854299ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14542610495027112055ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__ax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11820399895750024186ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__ay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16312284535745980647ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__az = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13901122047409964380ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__bx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13960067920006948018ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__by = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13674329595436820875ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__bz = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5559719214739058741ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__px = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 826672109643072945ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__py = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13621298341415278441ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_dot3_fn__57__pz = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14702601172089944727ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12405686809613331830ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17735484879332941174ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__v = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10480746645407251570ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__rem = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17225871723224481679ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10811866851546654411ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_sqrt_fn__58__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17865049106086299491ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11739144048024619250ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452138086759371338ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3541558329789204225ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16708429404899157384ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__59__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17445171044416712838ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 369198893803800859ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13125504833197360409ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7259943577663453493ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16803338715347539875ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__60__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2070743284635543319ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3206147413923999800ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17671072764941850456ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1240905452042395595ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__dividend_shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5786203410114480205ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_div_fn__61__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7847267246337654036ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8945082129253558995ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4166883734189888343ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6665222901769615114ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17496710305337086058ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__62__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17470676308632638067ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6440341292849639282ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4975491402707988761ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12830739278700141101ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1419290627769869075ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__63__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12445659740532139268ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7828591084499184020ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10143714624352269971ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11620578706156886986ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__full_prod = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17825899418152853929ull);
    vlSelf->__Vfunc_tbGenericVga__DOT__dut__DOT__q16_mul_fn__64__rounded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13153401716528386680ull);
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
}
