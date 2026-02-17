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

void VtbGenericVga___024root___eval_nba(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___eval_nba\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtbGenericVga___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ VtbGenericVga__ConstPool__CONST_hb0c3bb81_0;
extern const VlUnpacked<CData/*0:0*/, 16> VtbGenericVga__ConstPool__TABLE_h232c0c6a_0;
extern const VlUnpacked<CData/*7:0*/, 16> VtbGenericVga__ConstPool__TABLE_ha7785919_0;
extern const VlUnpacked<CData/*7:0*/, 16> VtbGenericVga__ConstPool__TABLE_h7812a44d_0;
extern const VlUnpacked<CData/*7:0*/, 16> VtbGenericVga__ConstPool__TABLE_h16b99a55_0;
extern const VlUnpacked<SData/*15:0*/, 8> VtbGenericVga__ConstPool__TABLE_h30793c68_0;
extern const VlUnpacked<SData/*15:0*/, 8> VtbGenericVga__ConstPool__TABLE_hd06a5b75_0;

VL_INLINE_OPT void VtbGenericVga___024root___nba_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___nba_sequent__TOP__0\n"); );
    VtbGenericVga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__minimapRed;
    tbGenericVga__DOT__dut__DOT__minimapRed = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__minimapGreen;
    tbGenericVga__DOT__dut__DOT__minimapGreen = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__minimapBlue;
    tbGenericVga__DOT__dut__DOT__minimapBlue = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__isMinimapPixel;
    tbGenericVga__DOT__dut__DOT__isMinimapPixel = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__textRed;
    tbGenericVga__DOT__dut__DOT__textRed = 0;
    SData/*10:0*/ tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle = 0;
    SData/*15:0*/ tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX = 0;
    SData/*15:0*/ tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY = 0;
    CData/*5:0*/ tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX = 0;
    CData/*5:0*/ tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY = 0;
    SData/*9:0*/ tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallHeight;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallHeight = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX;
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX = 0;
    CData/*7:0*/ tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY;
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_0;
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_0 = 0;
    CData/*0:0*/ tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_1;
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_1 = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit = 0;
    CData/*6:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit;
    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__yReg = 0;
    SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__xReg = 0;
    CData/*1:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount;
    __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX;
    __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX = 0;
    SData/*15:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY;
    __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle;
    __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__hours;
    __Vdly__tbGenericVga__DOT__dut__DOT__hours = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__minutes;
    __Vdly__tbGenericVga__DOT__dut__DOT__minutes = 0;
    CData/*5:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__seconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__seconds = 0;
    IData/*16:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds = 0;
    SData/*8:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter = 0;
    IData/*19:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0;
    CData/*3:0*/ __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0;
    CData/*6:0*/ __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    __VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0;
    // Body
    __Vdly__tbGenericVga__DOT__dut__DOT__hours = vlSelfRef.tbGenericVga__DOT__dut__DOT__hours;
    __Vdly__tbGenericVga__DOT__dut__DOT__minutes = vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes;
    __Vdly__tbGenericVga__DOT__dut__DOT__seconds = vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds;
    __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__state;
    __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 0U;
    __Vdly__tbGenericVga__DOT__yReg = vlSelfRef.tbGenericVga__DOT__yReg;
    __Vdly__tbGenericVga__DOT__xReg = vlSelfRef.tbGenericVga__DOT__xReg;
    __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX;
    __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY;
    __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle;
    if (vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0 
            = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData;
        if ((0x12bfU >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr))) {
            __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0;
            __VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr;
            __VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0 = 1U;
        }
    }
    if (vlSelfRef.resetn) {
        if ((0x1f3U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter))) {
            if ((0x1869fU == vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds)) {
                if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds))) {
                    if ((0x3bU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__hours 
                            = ((0x17U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours))
                                ? 0U : (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours))));
                        __Vdly__tbGenericVga__DOT__dut__DOT__minutes = 0U;
                    } else {
                        __Vdly__tbGenericVga__DOT__dut__DOT__minutes 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes)));
                    }
                    __Vdly__tbGenericVga__DOT__dut__DOT__seconds = 0U;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__seconds 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds)));
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds));
            }
            __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter = 0U;
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter)));
        }
        if (vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiReady) {
            if (((0x77U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)) 
                 || (0x57U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)))) {
                if (((((((((0U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU))) 
                           | (1U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                          | (2U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                         | (3U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                        | (4U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                       | (5U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                      | (6U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                     | (7U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU))))) {
                    if ((0U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(0x40U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX)));
                    } else if ((1U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY)));
                    } else if ((2U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(0x40U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY)));
                    } else if ((3U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                          - (IData)(0x20U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY)));
                    } else if ((4U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                          - (IData)(0x40U)));
                    } else if ((5U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                          - (IData)(0x20U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                          - (IData)(0x20U)));
                    } else if ((6U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                          - (IData)(0x40U)));
                    } else {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                          - (IData)(0x20U)));
                    }
                }
            } else if (((0x73U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)) 
                        || (0x53U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)))) {
                if (((((((((0U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU))) 
                           | (1U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                          | (2U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                         | (3U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                        | (4U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                       | (5U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                      | (6U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) 
                     | (7U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU))))) {
                    if ((0U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                          - (IData)(0x40U)));
                    } else if ((1U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                          - (IData)(0x20U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                          - (IData)(0x20U)));
                    } else if ((2U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                          - (IData)(0x40U)));
                    } else if ((3U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                          - (IData)(0x20U)));
                    } else if ((4U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(0x40U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX)));
                    } else if ((5U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY)));
                    } else if ((6U == VL_DIV_III(32, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle), (IData)(0x2dU)))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(0x40U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY)));
                    } else {
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
                            = (0xffffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                          - (IData)(0x20U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
                            = (0xffffU & ((IData)(0x20U) 
                                          + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY)));
                    }
                }
            } else if (((0x61U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)) 
                        || (0x41U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle 
                    = (0x1ffU & ((0xfU > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle))
                                  ? ((IData)(0x159U) 
                                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle))
                                  : ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle) 
                                     - (IData)(0xfU))));
            } else if (((0x64U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)) 
                        || (0x44U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode)))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle 
                    = (0x1ffU & ((0x168U <= (0x1ffU 
                                             & ((IData)(0xfU) 
                                                + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle))))
                                  ? ((IData)(0xa7U) 
                                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle))
                                  : ((IData)(0xfU) 
                                     + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle))));
            }
        }
        if (vlSelfRef.tbGenericVga__DOT__visibleReg) {
            if (((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                 < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallTop))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0x40U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0x60U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0xc0U;
            } else if (((((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                          >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallTop)) 
                         & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                            <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallBottom))) 
                        & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall))) {
                if ((0x50U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0xc0U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0x80U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0x40U;
                } else if ((0x78U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0x90U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0x60U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0x30U;
                } else {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0x60U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0x40U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0x20U;
                }
            } else {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0x30U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0x40U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0x30U;
            }
        } else {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
            if ((0xc34ffU == vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter)) {
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = 0U;
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 1U;
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter));
            }
        } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 1U;
            if ((8U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
                    } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit 
                            = (0xfU & VL_MODDIV_III(17, 
                                                    (0x1ffffU 
                                                     & VL_MODDIV_III(17, 
                                                                     (0x1ffffU 
                                                                      & VL_MODDIV_III(17, 
                                                                                (0x1ffffU 
                                                                                & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U))), (IData)(0xaU)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4dU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__0__Vfuncout;
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, 
                                                                  (0x1ffffU 
                                                                   & VL_MODDIV_III(17, 
                                                                                (0x1ffffU 
                                                                                & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U))), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4cU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__1__Vfuncout;
                    }
                } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, 
                                                                  (0x1ffffU 
                                                                   & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U))), (IData)(0x64U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4bU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__2__Vfuncout;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit 
                            = (0xfU & VL_DIV_III(17, 
                                                 (0x1ffffU 
                                                  & VL_MODDIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U))), (IData)(0x3e8U)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x4aU;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__3__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit 
                        = (0xfU & VL_DIV_III(17, vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds, (IData)(0x2710U)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x49U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__4__Vfuncout;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x48U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x2eU;
                }
            } else if ((4U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit 
                            = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x47U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__5__Vfuncout;
                    } else {
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit 
                            = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds), (IData)(0xaU)));
                        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                        __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout 
                            = (0x7fU & ((IData)(0x30U) 
                                        + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__digit)));
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x46U;
                        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                            = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__6__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x45U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x3aU;
                } else {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit 
                        = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes), (IData)(0xaU)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x44U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__7__Vfuncout;
                }
            } else if ((2U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit 
                        = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes), (IData)(0xaU)));
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout 
                        = (0x7fU & ((IData)(0x30U) 
                                    + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__digit)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x43U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                        = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__8__Vfuncout;
                } else {
                    __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x42U;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData = 0x3aU;
                }
            } else if ((1U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex))) {
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit 
                    = (0xfU & VL_MODDIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours), (IData)(0xaU)));
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout 
                    = (0x7fU & ((IData)(0x30U) + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__digit)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x41U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                    = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__9__Vfuncout;
            } else {
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit 
                    = (0xfU & VL_DIV_III(6, (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__hours), (IData)(0xaU)));
                __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex)));
                __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout 
                    = (0x7fU & ((IData)(0x30U) + (IData)(__Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__digit)));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerAddr = 0x40U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__timerData 
                    = __Vfunc_tbGenericVga__DOT__dut__DOT__timerDisp__DOT__digitToAscii__10__Vfuncout;
            }
        } else {
            __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
        }
        vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiReady = 0U;
        if (((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawDataReady) 
             & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__parityErr)))) {
            if ((0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__state))) {
                if ((0xf0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = 1U;
                } else if ((0xe0U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData))) {
                    __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = 2U;
                } else if (((0x12U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData)) 
                            | (0x59U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__shiftPressed = 1U;
                } else if (vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__validAscii) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode 
                        = vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__asciiFromScancode;
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiReady = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__state))) {
                if (((0x12U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData)) 
                     | (0x59U == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData)))) {
                    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__shiftPressed = 0U;
                }
                __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = 0U;
            } else {
                __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = 0U;
            }
        }
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
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawDataReady = 0U;
        if (vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__processData) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__processData = 0U;
            if ((IData)((0x400U == (0x401U & (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData 
                    = (0xffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg) 
                                >> 1U));
                vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawDataReady = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__parityErr 
                    = (1U & (~ VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg) 
                                                >> 1U)))));
            }
        }
        if (vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__prevPs2Clk) {
            __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount)));
            vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg 
                = (0x3ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg) 
                             >> 1U));
            if ((0xaU == (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount))) {
                __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount = 0U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__processData = 1U;
            }
        }
    } else {
        __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__seconds = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__minutes = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__hours = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX = 0x280U;
        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY = 0x280U;
        __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__timerWrEn = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__shiftPressed = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiCode = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__asciiReady = 0U;
        __Vdly__tbGenericVga__DOT__yReg = 0U;
        __Vdly__tbGenericVga__DOT__xReg = 0U;
        vlSelfRef.tbGenericVga__DOT__hSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__vSyncReg = 1U;
        vlSelfRef.tbGenericVga__DOT__visibleReg = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__processData = 0U;
        __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawDataReady = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__parityErr = 0U;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamDataRdB 
        = ((0x12bfU >= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB))
            ? vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT__memory
           [vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamAddrB]
            : 0U);
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX 
        = __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY 
        = __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle 
        = __Vdly__tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle;
    if (__VdlySet__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT__memory[__VdlyDim0__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0] 
            = __VdlyVal__tbGenericVga__DOT__dut__DOT__charRam__DOT__memory__v0;
    }
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX 
        = (0xffU & (VL_SHIFTL_III(8,8,32, ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                           >> 8U), 3U) 
                    + (7U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                             >> 5U))));
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY 
        = (0xffU & (VL_SHIFTL_III(8,8,32, ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                           >> 8U), 3U) 
                    + (7U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                             >> 5U))));
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_0 
        = ((0x2dU <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)) 
           & (0x87U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)));
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_1 
        = ((0x87U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)) 
           & (0xe1U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex 
        = __Vdly__tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__subSeconds 
        = __Vdly__tbGenericVga__DOT__dut__DOT__subSeconds;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__seconds 
        = __Vdly__tbGenericVga__DOT__dut__DOT__seconds;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__minutes 
        = __Vdly__tbGenericVga__DOT__dut__DOT__minutes;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__hours = __Vdly__tbGenericVga__DOT__dut__DOT__hours;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__state 
        = __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__state;
    vlSelfRef.tbGenericVga__DOT__yReg = __Vdly__tbGenericVga__DOT__yReg;
    vlSelfRef.tbGenericVga__DOT__xReg = __Vdly__tbGenericVga__DOT__xReg;
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
    tbGenericVga__DOT__dut__DOT__textRed = (((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
                                             & (vlSelfRef.tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory
                                                [(((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__charRamDataRdB) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (IData)(vlSelfRef.tbGenericVga__DOT__yReg)))] 
                                                >> 
                                                (7U 
                                                 & ((IData)(7U) 
                                                    - (IData)(vlSelfRef.tbGenericVga__DOT__xReg)))))
                                             ? 0xffU
                                             : 0U);
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle 
        = (0x7ffU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle) 
                     + (((IData)(3U) * ((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                        - (IData)(0x140U))) 
                        >> 5U)));
    __Vtableidx2 = (((8U & ((VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                             (7U & ((VL_SHIFTL_III(8,8,32, 
                                                   (0xfU 
                                                    & (((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                                        - (IData)(0x4aU)) 
                                                       >> 3U)), 4U) 
                                     + (0xfU & (((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                 - (IData)(0xaU)) 
                                                >> 3U))) 
                                    >> 5U))] >> (0x1fU 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  (0xfU 
                                                                   & (((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                                                       - (IData)(0x4aU)) 
                                                                      >> 3U)), 4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                         - (IData)(0xaU)) 
                                                        >> 3U))))) 
                            << 3U)) | ((((0xffU & ((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                   - (IData)(0xaU))) 
                                         == (0xffU 
                                             & ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX) 
                                                + (
                                                   ((0x2dU 
                                                     > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)) 
                                                    | (0x13bU 
                                                       <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_0)
                                                     ? 0U
                                                     : 
                                                    ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_1)
                                                      ? 0xfeU
                                                      : 0U)))))) 
                                        & ((0xffU & 
                                            ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                             - (IData)(0x4aU))) 
                                           == (0xffU 
                                               & ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY) 
                                                  + 
                                                  ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_0)
                                                    ? 2U
                                                    : 
                                                   ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_1)
                                                     ? 0U
                                                     : 
                                                    (((0xe1U 
                                                       <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)) 
                                                      & (0x13bU 
                                                         > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)))
                                                      ? 0xfeU
                                                      : 0U))))))) 
                                       << 2U)) | ((
                                                   (((0xffU 
                                                      & ((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                         - (IData)(0xaU))) 
                                                     >= 
                                                     ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX) 
                                                      - (IData)(1U))) 
                                                    & (((0xffU 
                                                         & ((IData)(vlSelfRef.tbGenericVga__DOT__xReg) 
                                                            - (IData)(0xaU))) 
                                                        <= 
                                                        ((IData)(1U) 
                                                         + (IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX))) 
                                                       & (((0xffU 
                                                            & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                                               - (IData)(0x4aU))) 
                                                           >= 
                                                           ((IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY) 
                                                            - (IData)(1U))) 
                                                          & ((0xffU 
                                                              & ((IData)(vlSelfRef.tbGenericVga__DOT__yReg) 
                                                                 - (IData)(0x4aU))) 
                                                             <= 
                                                             ((IData)(1U) 
                                                              + (IData)(tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY)))))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tbGenericVga__DOT__visibleReg) 
                                                     & ((0xaU 
                                                         <= (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                        & ((0x8aU 
                                                            > (IData)(vlSelfRef.tbGenericVga__DOT__xReg)) 
                                                           & ((0x14aU 
                                                               <= (IData)(vlSelfRef.tbGenericVga__DOT__yReg)) 
                                                              & (0x1caU 
                                                                 > (IData)(vlSelfRef.tbGenericVga__DOT__yReg))))))));
    tbGenericVga__DOT__dut__DOT__isMinimapPixel = VtbGenericVga__ConstPool__TABLE_h232c0c6a_0
        [__Vtableidx2];
    tbGenericVga__DOT__dut__DOT__minimapRed = VtbGenericVga__ConstPool__TABLE_ha7785919_0
        [__Vtableidx2];
    tbGenericVga__DOT__dut__DOT__minimapGreen = VtbGenericVga__ConstPool__TABLE_h7812a44d_0
        [__Vtableidx2];
    tbGenericVga__DOT__dut__DOT__minimapBlue = VtbGenericVga__ConstPool__TABLE_h16b99a55_0
        [__Vtableidx2];
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount 
        = __Vdly__tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount;
    __Vtableidx1 = (7U & VL_DIV_III(11, (0x7ffU & (
                                                   VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,11, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle)))
                                                    ? 
                                                   ((IData)(0x168U) 
                                                    + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle))
                                                    : 
                                                   (VL_LTES_III(32, 0x168U, 
                                                                VL_EXTENDS_II(32,11, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle)))
                                                     ? 
                                                    ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle) 
                                                     - (IData)(0x168U))
                                                     : (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayAngle)))), (IData)(0x2dU)));
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX 
        = VtbGenericVga__ConstPool__TABLE_h30793c68_0
        [__Vtableidx1];
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY 
        = VtbGenericVga__ConstPool__TABLE_hd06a5b75_0
        [__Vtableidx1];
    if ((0U != (IData)(tbGenericVga__DOT__dut__DOT__textRed))) {
        vlSelfRef.red = tbGenericVga__DOT__dut__DOT__textRed;
        vlSelfRef.green = tbGenericVga__DOT__dut__DOT__textRed;
        vlSelfRef.blue = tbGenericVga__DOT__dut__DOT__textRed;
    } else if (tbGenericVga__DOT__dut__DOT__isMinimapPixel) {
        vlSelfRef.red = tbGenericVga__DOT__dut__DOT__minimapRed;
        vlSelfRef.green = tbGenericVga__DOT__dut__DOT__minimapGreen;
        vlSelfRef.blue = tbGenericVga__DOT__dut__DOT__minimapBlue;
    } else {
        vlSelfRef.red = vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterRed;
        vlSelfRef.green = vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterGreen;
        vlSelfRef.blue = vlSelfRef.tbGenericVga__DOT__dut__DOT__raycasterBlue;
    }
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__asciiFromScancode 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__converter__DOT__scancodeMemory
        [(((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData) 
           << 1U) | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__shiftPressed))];
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__validAscii 
        = (0U != (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__asciiFromScancode));
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__prevPs2Clk = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 0U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0xffU;
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX 
        = (0x3fU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                    >> 8U));
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY 
        = (0x3fU & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                    >> 8U));
    if ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX))) 
         & (0xfU > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)))) {
        if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                   (7U & (((IData)(1U) + (VL_SHIFTL_III(8,32,32, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY), 4U) 
                                          + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
                          >> 5U))] >> (0x1fU & ((IData)(1U) 
                                                + (
                                                   VL_SHIFTL_III(8,32,32, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY), 4U) 
                                                   + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x40U;
        }
    } else if ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX))) 
                & (0U < (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)))) {
        if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                   (7U & (((VL_SHIFTL_III(8,32,32, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY), 4U) 
                            + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                           - (IData)(1U)) >> 5U))] 
                   >> (0x1fU & ((VL_SHIFTL_III(8,32,32, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY), 4U) 
                                 + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                                - (IData)(1U)))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
            vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x40U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall)))) {
        if ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY))) 
             & (0xfU > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)))) {
            if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                       (7U & ((VL_SHIFTL_III(8,32,32, 
                                             ((IData)(1U) 
                                              + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)), 4U) 
                               + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                              >> 5U))] >> (0x1fU & 
                                           (VL_SHIFTL_III(8,32,32, 
                                                          ((IData)(1U) 
                                                           + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)), 4U) 
                                            + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x40U;
            }
        } else if ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY))) 
                    & (0U < (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)))) {
            if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                       (7U & ((VL_SHIFTL_III(8,32,32, 
                                             ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY) 
                                              - (IData)(1U)), 4U) 
                               + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                              >> 5U))] >> (0x1fU & 
                                           (VL_SHIFTL_III(8,32,32, 
                                                          ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY) 
                                                           - (IData)(1U)), 4U) 
                                            + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x40U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall)))) {
        if ((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX))) 
               & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY)))) 
              & (0xfU > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
             & (0xfU > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)))) {
            if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                       (7U & (((IData)(1U) + (VL_SHIFTL_III(8,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)), 4U) 
                                              + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (VL_SHIFTL_III(8,32,32, 
                                                             ((IData)(1U) 
                                                              + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)), 4U) 
                                               + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x5aU;
            }
        } else if ((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX))) 
                      & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY)))) 
                     & (0U < (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
                    & (0xfU > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)))) {
            if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                       (7U & (((VL_SHIFTL_III(8,32,32, 
                                              ((IData)(1U) 
                                               + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)), 4U) 
                                + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                               - (IData)(1U)) >> 5U))] 
                       >> (0x1fU & ((VL_SHIFTL_III(8,32,32, 
                                                   ((IData)(1U) 
                                                    + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)), 4U) 
                                     + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                                    - (IData)(1U)))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x5aU;
            }
        } else if ((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX))) 
                      & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY)))) 
                     & (0U < (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
                    & (0U < (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)))) {
            if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                       (7U & (((VL_SHIFTL_III(8,32,32, 
                                              ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY) 
                                               - (IData)(1U)), 4U) 
                                + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                               - (IData)(1U)) >> 5U))] 
                       >> (0x1fU & ((VL_SHIFTL_III(8,32,32, 
                                                   ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY) 
                                                    - (IData)(1U)), 4U) 
                                     + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX)) 
                                    - (IData)(1U)))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x5aU;
            }
        } else if ((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirX))) 
                      & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__rayDirY)))) 
                     & (0xfU > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
                    & (0U < (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY)))) {
            if ((1U & (VtbGenericVga__ConstPool__CONST_hb0c3bb81_0[
                       (7U & (((IData)(1U) + (VL_SHIFTL_III(8,32,32, 
                                                            ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY) 
                                                             - (IData)(1U)), 4U) 
                                              + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (VL_SHIFTL_III(8,32,32, 
                                                             ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapY) 
                                                              - (IData)(1U)), 4U) 
                                               + (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__mapX))))))) {
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = 1U;
                vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0x5aU;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall)))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = 0xc8U;
    }
    tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallHeight 
        = ((0U < (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance))
            ? (0x3ffU & VL_DIV_III(32, (IData)(0x1e00U), (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance)))
            : 0x1e0U);
    if ((0xf0U > (IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallHeight))) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallTop 
            = (0x3ffU & ((IData)(0xf0U) - ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallHeight) 
                                           >> 1U)));
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallBottom 
            = (0x3ffU & ((IData)(0xf0U) + ((IData)(tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallHeight) 
                                           >> 1U)));
    } else {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallTop = 0U;
        vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallBottom = 0x1e0U;
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
