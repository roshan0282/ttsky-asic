// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

void VtbGenericVga___024root___ico_sequent__TOP__0(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_ico(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_ico\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VtbGenericVga___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___ico_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___ico_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__output_valid;
    tbGenericVga__DOT__dut__DOT__output_valid = 0;
    // Body
    tbGenericVga__DOT__dut__DOT__output_valid = ((IData)(vlSelfRef.resetn) 
                                                 & (IData)(vlSelfRef.tbGenericVga__DOT__visibleReg));
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

void VtbGenericVga___024root___eval_triggers__ico(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__ico(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__ico\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VtbGenericVga___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VtbGenericVga___024root___eval_act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
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
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__yReg = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__xReg = 0;
    // Body
    __Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
    if (vlSelfRef.resetn) {
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__xReg))) {
            __Vdly__tbGenericVga__DOT__yReg = ((0x20cU 
                                                == (IData)(vlSelfRef.tbGenericVga__DOT__yReg))
                                                ? 0U
                                                : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tbGenericVga__DOT__yReg))));
            __Vdly__tbGenericVga__DOT__xReg = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__xReg = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tbGenericVga__DOT__xReg)));
        }
        vlSelfRef.tbGenericVga__DOT__hSyncReg = (1U 
                                                 & (~ 
                                                    ((0x290U 
                                                      <= (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                     & (0x2f0U 
                                                        > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)))));
        vlSelfRef.tbGenericVga__DOT__vSyncReg = (1U 
                                                 & (~ 
                                                    ((0x1eaU 
                                                      <= (IData)(vlSelfRef.tbGenericVga__DOT__yReg)) 
                                                     & (0x1ecU 
                                                        > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))));
        vlSelfRef.tbGenericVga__DOT__visibleReg = (
                                                   (0x280U 
                                                    > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                   & (0x1e0U 
                                                      > (IData)(vlSelfRef.tbGenericVga__DOT__yReg)));
        vlSelfRef.tbGenericVga__DOT__yReg = __Vdly__tbGenericVga__DOT__yReg;
        vlSelfRef.tbGenericVga__DOT__xReg = __Vdly__tbGenericVga__DOT__xReg;
        vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
        vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
        vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
        tbGenericVga__DOT__dut__DOT__output_valid = vlSelfRef.tbGenericVga__DOT__visibleReg;
    } else {
        __Vdly__tbGenericVga__DOT__yReg = 0U;
        __Vdly__tbGenericVga__DOT__xReg = 0U;
        vlSelfRef.tbGenericVga__DOT__hSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__vSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
        vlSelfRef.tbGenericVga__DOT__yReg = __Vdly__tbGenericVga__DOT__yReg;
        vlSelfRef.tbGenericVga__DOT__xReg = __Vdly__tbGenericVga__DOT__xReg;
        vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
        vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
        vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
        tbGenericVga__DOT__dut__DOT__output_valid = 0U;
    }
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
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

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VtbGenericVga___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VtbGenericVga___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VtbGenericVga___024root___eval_phase__nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VtbGenericVga___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__ico(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__nba(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VtbGenericVga___024root___dump_triggers__act(VtbGenericVga___024root* vlSelf);
#endif  // VL_DEBUG

void VtbGenericVga___024root___eval(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VtbGenericVga___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VtbGenericVga___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VtbGenericVga___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VtbGenericVga___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb\\tbGenericVga.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VtbGenericVga___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VtbGenericVga___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VtbGenericVga___024root___eval_debug_assertions(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_debug_assertions\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock50MHz & 0xfeU)))) {
        Verilated::overWidthError("clock50MHz");}
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
