// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbGenericVga.h for the primary calling header

#include "VtbGenericVga__pch.h"
#include "VtbGenericVga___024root.h"

void VtbGenericVga___024root___eval_act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_sequent__TOP__2(VtbGenericVga___024root* vlSelf);
void VtbGenericVga___024root___nba_comb__TOP__0(VtbGenericVga___024root* vlSelf);

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__digit = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerH;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerH = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerM;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerM = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerS;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerS = 0;
    IData/*16:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerSub;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerSub = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex = 0;
    CData/*6:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 = 0;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT__timerH = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerH;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerM = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerM;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerS = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerS;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerSub = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex;
    __VdlySet__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 = 0U;
    vlSelfRef.__Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.__Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h9db3a3ed__0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData;
        if ((0x12bfU >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr))) {
            __VdlyVal__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h9db3a3ed__0;
            __VdlyDim0__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr;
            __VdlySet__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0 = 1U;
        }
    }
    if (vlSelfRef.resetn) {
        if ((0x1f3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter))) {
            if ((0x1869fU == vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub)) {
                if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerS))) {
                    if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerM))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerH 
                            = ((0x17U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerH))
                                ? 0U : (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerH))));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerM = 0U;
                    } else {
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerM 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerM)));
                    }
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerS = 0U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerS 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerS)));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__timerSub = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__timerSub 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub));
            }
            __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter)));
        }
        if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
            if ((0xc34ffU == vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter)) {
                __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter));
            }
        } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 1U;
            if ((8U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                    if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = 0U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
                    } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__digit 
                            = (0xfU & VL_MODDIV_III(17, 
                                                    (0x1ffffU 
                                                     & VL_MODDIV_III(17, 
                                                                     (0x1ffffU 
                                                                      & VL_MODDIV_III(17, 
                                                                                (0x1ffffU 
                                                                                & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U))), (IData)(0xaU)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4fU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__6__Vfuncout;
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex = 0U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = 0U;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, 
                                                                  (0x1ffffU 
                                                                   & VL_MODDIV_III(17, 
                                                                                (0x1ffffU 
                                                                                & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U))), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4eU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__7__Vfuncout;
                    }
                } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, 
                                                                  (0x1ffffU 
                                                                   & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4dU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__8__Vfuncout;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub, (IData)(0x2710U))), (IData)(0x3e8U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4cU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__9__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__digit 
                        = (0xfU & VL_DIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub, (IData)(0x2710U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4bU;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__10__Vfuncout;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4aU;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x2eU;
                }
            } else if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__digit 
                            = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerS), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x49U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__11__Vfuncout;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__digit 
                            = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerS), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x48U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__12__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x47U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x3aU;
                } else {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__digit 
                        = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerM), (IData)(0xaU)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x46U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__13__Vfuncout;
                }
            } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__digit 
                        = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerM), (IData)(0xaU)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x45U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__14__Vfuncout;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x44U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x3aU;
                }
            } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex))) {
                __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__digit 
                    = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerH), (IData)(0xaU)));
                __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__Vfuncout 
                    = (0x7fU & ((IData)(0x30U) + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__digit)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x43U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                    = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__15__Vfuncout;
            } else {
                __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__digit 
                    = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerH), (IData)(0xaU)));
                __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__Vfuncout 
                    = (0x7fU & ((IData)(0x30U) + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__digit)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x42U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                    = __Vfunc_tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__digitToAscii__16__Vfuncout;
            }
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
        }
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT__timerSub = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerS = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerM = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerH = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamDataB 
        = ((0x12bfU >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB))
            ? vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory
           [vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB]
            : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter;
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory[__VdlyDim0__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory__v0;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex 
        = __Vdly__tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerSub 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerSub;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerS = __Vdly__tbGenericVga__DOT__dut__DOT__timerS;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerM = __Vdly__tbGenericVga__DOT__dut__DOT__timerM;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerH = __Vdly__tbGenericVga__DOT__dut__DOT__timerH;
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__1(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__1\n"); );
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
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__u_mulDxT__DOT__shifted = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__u_mulDyT__DOT__shifted = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__u_mulDzT__DOT__shifted = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag2 = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag2 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag2 = 0;
    IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted;
    tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted = 0;
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
    if (vlSelfRef.resetn) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestRefl 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestReflComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorB 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorBComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorG 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorGComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorR 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorRComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCzComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCyComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCxComb;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDy 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__normDy;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDx 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__normDx;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDz 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestT 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__bestTComb;
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestRefl = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorB = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorG = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestColorR = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCz = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCy = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestCx = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDy = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDx = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__regNormDz = 0x10U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__bestT = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__regValid 
        = ((IData)(vlSelfRef.resetn) && (IData)(vlSelfRef.tbGenericVga__DOT__visibleReg));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHit 
        = ((IData)(vlSelfRef.resetn) && ((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
                                         & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__bestHitComb)));
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
    vlSelfRef.tbGenericVga__DOT__dut__DOT__difQ[0U] 
        = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted)
            ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted)
                         ? 0x800U : (0xfffU & tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_dif__DOT__shifted)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__difQ[1U] 
        = (VL_LTS_III(24, 0x7ffU, tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted)
            ? 0x7ffU : (VL_GTS_III(24, 0xfff800U, tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted)
                         ? 0x800U : (0xfffU & tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_dif__DOT__shifted)));
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
}

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__2(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__2\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sHit = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__sT = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sHit = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT;
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sT = 0;
    SData/*11:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2;
    tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag2 = 0;
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
    // Body
    if (vlSelfRef.resetn) {
        if ((0x31fU == (IData)(vlSelfRef.tbGenericVga__DOT__xReg))) {
            vlSelfRef.__Vdly__tbGenericVga__DOT__yReg 
                = ((0x20cU == (IData)(vlSelfRef.tbGenericVga__DOT__yReg))
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__yReg))));
            vlSelfRef.__Vdly__tbGenericVga__DOT__xReg = 0U;
        } else {
            vlSelfRef.__Vdly__tbGenericVga__DOT__xReg 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__xReg)));
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
    } else {
        vlSelfRef.__Vdly__tbGenericVga__DOT__yReg = 0U;
        vlSelfRef.__Vdly__tbGenericVga__DOT__xReg = 0U;
        vlSelfRef.tbGenericVga__DOT__hSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__vSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__yReg = vlSelfRef.__Vdly__tbGenericVga__DOT__yReg;
    vlSelfRef.tbGenericVga__DOT__xReg = vlSelfRef.__Vdly__tbGenericVga__DOT__xReg;
    vlSelfRef.hSync = vlSelfRef.tbGenericVga__DOT__hSyncReg;
    vlSelfRef.vSync = vlSelfRef.tbGenericVga__DOT__vSyncReg;
    vlSelfRef.visible = vlSelfRef.tbGenericVga__DOT__visibleReg;
    vlSelfRef.yOrd = vlSelfRef.tbGenericVga__DOT__yReg;
    vlSelfRef.xOrd = vlSelfRef.tbGenericVga__DOT__xReg;
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
    tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__halfB 
        = (0xfffU & VL_SHIFTRS_III(12,12,32, (0xfffU 
                                              & VL_MULS_III(12, (IData)(0xfc0U), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__normDz))), 4U));
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

VL_INLINE_OPT void VtbGenericVga___024root___nba_comb__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_comb__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__textR))) {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__textR;
    } else {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__rayR;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__rayG;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__rayB;
    }
}

void VtbGenericVga___024root___eval_triggers__act(VtbGenericVga___024root* vlSelf);

bool VtbGenericVga___024root___eval_phase__act(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_phase__act\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
