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
