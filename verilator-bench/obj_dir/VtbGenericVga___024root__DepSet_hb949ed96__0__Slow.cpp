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
    // Init
    IData/*31:0*/ tbGenericVga__DOT__dut__DOT__charRam__DOT__i;
    tbGenericVga__DOT__dut__DOT__charRam__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x636f6465U;
    __Vtemp_1[2U] = 0x7363616eU;
    VL_READMEM_N(false, 8, 512, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__converter__DOT__scancodeMemory)
                 , 0, ~0ULL);
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX = 0x280U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY = 0x280U;
    vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle = 0U;
    tbGenericVga__DOT__dut__DOT__charRam__DOT__i = 0U;
    while (VL_GTS_III(32, 0x12c0U, tbGenericVga__DOT__dut__DOT__charRam__DOT__i)) {
        vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0 = 0x20U;
        if (VL_LIKELY(((0x12bfU >= (0x1fffU & tbGenericVga__DOT__dut__DOT__charRam__DOT__i))))) {
            vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT__memory[(0x1fffU 
                                                                         & tbGenericVga__DOT__dut__DOT__charRam__DOT__i)] 
                = vlSelfRef.tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0;
        }
        tbGenericVga__DOT__dut__DOT__charRam__DOT__i 
            = ((IData)(1U) + tbGenericVga__DOT__dut__DOT__charRam__DOT__i);
    }
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x74387838U;
    __Vtemp_2[2U] = 0x666f6eU;
    VL_READMEM_N(false, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory)
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

extern const VlUnpacked<SData/*15:0*/, 8> VtbGenericVga__ConstPool__TABLE_h30793c68_0;
extern const VlUnpacked<SData/*15:0*/, 8> VtbGenericVga__ConstPool__TABLE_hd06a5b75_0;
extern const VlWide<8>/*255:0*/ VtbGenericVga__ConstPool__CONST_hb0c3bb81_0;
extern const VlUnpacked<CData/*0:0*/, 16> VtbGenericVga__ConstPool__TABLE_h232c0c6a_0;
extern const VlUnpacked<CData/*7:0*/, 16> VtbGenericVga__ConstPool__TABLE_ha7785919_0;
extern const VlUnpacked<CData/*7:0*/, 16> VtbGenericVga__ConstPool__TABLE_h7812a44d_0;
extern const VlUnpacked<CData/*7:0*/, 16> VtbGenericVga__ConstPool__TABLE_h16b99a55_0;

VL_ATTR_COLD void VtbGenericVga___024root___stl_sequent__TOP__0(VtbGenericVga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbGenericVga___024root___stl_sequent__TOP__0\n"); );
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
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__asciiFromScancode 
        = vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__converter__DOT__scancodeMemory
        [(((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData) 
           << 1U) | (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__shiftPressed))];
    vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__validAscii 
        = (0U != (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__keyboard__DOT__asciiFromScancode));
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
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapX 
        = (0xffU & (VL_SHIFTL_III(8,8,32, ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                                           >> 8U), 3U) 
                    + (7U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX) 
                             >> 5U))));
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_0 
        = ((0x2dU <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)) 
           & (0x87U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)));
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT____VdfgRegularize_h0374a660_0_1 
        = ((0x87U <= (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)) 
           & (0xe1U > (IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle)));
    tbGenericVga__DOT__dut__DOT__minimap_inst__DOT__playerMinimapY 
        = (0xffU & (VL_SHIFTL_III(8,8,32, ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                                           >> 8U), 3U) 
                    + (7U & ((IData)(vlSelfRef.tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY) 
                             >> 5U))));
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
    vlSelf->tbGenericVga__DOT__dut__DOT__asciiCode = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9596248323956434300ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__asciiReady = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17504778505231283559ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycasterRed = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3551410554276618472ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycasterGreen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1058466941195850979ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycasterBlue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17629188672421290921ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__hours = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7988057406956029521ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__minutes = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7713325126008035019ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__seconds = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5505490747895323579ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__subSeconds = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17483063821676433689ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerWrEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11924154759370711739ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerAddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6736080339559463047ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerData = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17287148638569101271ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRamAddrB = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18027942665082243348ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRamDataRdB = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14114270621304948864ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4519440879638940782ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__rawDataReady = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17847068251986378814ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__parityErr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3886078778869637324ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9486230829468273840ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__shiftPressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3463353246157473483ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__asciiFromScancode = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5113841679106704491ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__validAscii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460033966234175883ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__prevPs2Clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9160288590977966512ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__shiftReg = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6458335683358355533ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__bitCount = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6815367114903829998ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__receiver__DOT__processData = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1145960863242952128ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__keyboard__DOT__converter__DOT__scancodeMemory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7170302927478624642ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__posX = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10555344396367634982ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__posY = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8967137055037341599ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__angle = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9156232735675727026ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallDistance = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15685462756889899061ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__hitWall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1806081907548278989ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallTop = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14984208839007368743ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__raycaster__DOT__wallBottom = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5218104517940401500ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timer__DOT__tickCounter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 975247496654866523ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerDisp__DOT__writeIndex = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5224843156310338088ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerDisp__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2155930402027152259ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__timerDisp__DOT__updateCounter = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8634171137825114994ull);
    for (int __Vi0 = 0; __Vi0 < 4800; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__charRam__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5003027723508065693ull);
    }
    vlSelf->tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h9db3a3ed__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 560031574610008369ull);
    vlSelf->tbGenericVga__DOT__dut__DOT__charRam__DOT____Vlvbound_h044ee20f__0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5169143571303370220ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tbGenericVga__DOT__dut__DOT__textGen__DOT__font__DOT__fontMemory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3416516092440269548ull);
    }
    vlSelf->__Vtrigprevexpr___TOP__clock50MHz__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128179198767269375ull);
}
