// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbGenericVga.h for the primary calling header

#ifndef VERILATED_VTBGENERICVGA___024ROOT_H_
#define VERILATED_VTBGENERICVGA___024ROOT_H_  // guard

#include "verilated.h"


class VtbGenericVga__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbGenericVga___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock50MHz,0,0);
        VL_IN8(resetn,0,0);
        VL_OUT8(hSync,0,0);
        VL_OUT8(vSync,0,0);
        VL_OUT8(visible,0,0);
        VL_OUT8(red,7,0);
        VL_OUT8(green,7,0);
        VL_OUT8(blue,7,0);
        CData/*0:0*/ tbGenericVga__DOT__hSyncReg;
        CData/*0:0*/ tbGenericVga__DOT__vSyncReg;
        CData/*0:0*/ tbGenericVga__DOT__visibleReg;
        CData/*0:0*/ tbGenericVga__DOT__dut__DOT__bestHitComb;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bestColorRComb;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bestColorGComb;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bestColorBComb;
        CData/*0:0*/ tbGenericVga__DOT__dut__DOT__bestHit;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bestColorR;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bestColorG;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__bestColorB;
        CData/*0:0*/ tbGenericVga__DOT__dut__DOT__regValid;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__rayR;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__rayG;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__rayB;
        CData/*5:0*/ tbGenericVga__DOT__dut__DOT__timerH;
        CData/*5:0*/ tbGenericVga__DOT__dut__DOT__timerM;
        CData/*5:0*/ tbGenericVga__DOT__dut__DOT__timerS;
        CData/*0:0*/ tbGenericVga__DOT__dut__DOT__timerWrEn;
        CData/*6:0*/ tbGenericVga__DOT__dut__DOT__timerData;
        CData/*6:0*/ tbGenericVga__DOT__dut__DOT__charRamDataB;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__textR;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorR;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorG;
        CData/*7:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sColorB;
        CData/*3:0*/ tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__writeIndex;
        CData/*3:0*/ tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__state;
        CData/*6:0*/ tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h9db3a3ed__0;
        CData/*6:0*/ tbGenericVga__DOT__dut__DOT__u_charRAM__DOT____Vlvbound_h044ee20f__0;
        CData/*7:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__Vfuncout;
        CData/*7:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__Vfuncout;
        CData/*7:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__Vfuncout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock50MHz__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__resetn__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(xOrd,9,0);
        VL_OUT16(yOrd,9,0);
        SData/*9:0*/ tbGenericVga__DOT__xReg;
        SData/*9:0*/ tbGenericVga__DOT__yReg;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normDx;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normDy;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__normDz;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestTComb;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestCxComb;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestCyComb;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestCzComb;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestReflComb;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestT;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestCx;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestCy;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestCz;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__bestRefl;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__regNormDx;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__regNormDy;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__regNormDz;
    };
    struct {
        SData/*12:0*/ tbGenericVga__DOT__dut__DOT__timerAddr;
        SData/*12:0*/ tbGenericVga__DOT__dut__DOT__charRamAddrB;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCx;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCy;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sCz;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRadius;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__sRefl;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__mag;
        SData/*15:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__intRoot;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__mag;
        SData/*15:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__intRoot;
        SData/*8:0*/ tbGenericVga__DOT__dut__DOT__u_clkCounter__DOT__tickCounter;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__sqrtDisc;
        SData/*15:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__sqrtDisc;
        SData/*15:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__intRoot;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__mag;
        SData/*15:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot;
        SData/*11:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__mag;
        SData/*15:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__intRoot;
        SData/*9:0*/ __Vdly__tbGenericVga__DOT__yReg;
        SData/*9:0*/ __Vdly__tbGenericVga__DOT__xReg;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__difQInt;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__cR;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__cG;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__cB;
        IData/*16:0*/ tbGenericVga__DOT__dut__DOT__timerSub;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__val;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__rem;
        IData/*17:0*/ tbGenericVga__DOT__dut__DOT__u_camNormalize__DOT__u_magSqrt__DOT__trial;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__val;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__rem;
        IData/*17:0*/ tbGenericVga__DOT__dut__DOT__u_normalizeNormal__DOT__u_magSqrt__DOT__trial;
        IData/*19:0*/ tbGenericVga__DOT__dut__DOT__u_timerDisp__DOT__updateCounter;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem;
        IData/*17:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__0__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial;
        IData/*23:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_r2Mul__DOT__shifted;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__val;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__rem;
        IData/*17:0*/ tbGenericVga__DOT__dut__DOT__g_sphere__BRA__1__KET____DOT__u_intersect__DOT__u_discSqrt__DOT__trial;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem;
        IData/*17:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__0__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__val;
        IData/*31:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__rem;
        IData/*17:0*/ tbGenericVga__DOT__dut__DOT__g_light__BRA__1__KET____DOT__u_lnorm__DOT__u_magSqrt__DOT__trial;
        IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__3__v;
        IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__4__v;
        IData/*31:0*/ __Vfunc_tbGenericVga__DOT__dut__DOT__clamp8__5__v;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> tbGenericVga__DOT__dut__DOT__sHitArr;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__sTArr;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__sCxArr;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__sCyArr;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__sCzArr;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__sReflArr;
        VlUnpacked<CData/*7:0*/, 2> tbGenericVga__DOT__dut__DOT__sColorRArr;
        VlUnpacked<CData/*7:0*/, 2> tbGenericVga__DOT__dut__DOT__sColorGArr;
        VlUnpacked<CData/*7:0*/, 2> tbGenericVga__DOT__dut__DOT__sColorBArr;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__lightPosX;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__lightPosY;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__lightPosZ;
        VlUnpacked<CData/*7:0*/, 2> tbGenericVga__DOT__dut__DOT__lightColR;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 2> tbGenericVga__DOT__dut__DOT__lightColG;
        VlUnpacked<CData/*7:0*/, 2> tbGenericVga__DOT__dut__DOT__lightColB;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__lightIntens;
        VlUnpacked<SData/*11:0*/, 2> tbGenericVga__DOT__dut__DOT__difQ;
        VlUnpacked<CData/*0:0*/, 2> tbGenericVga__DOT__dut__DOT__ndotlGt;
        VlUnpacked<CData/*6:0*/, 4800> tbGenericVga__DOT__dut__DOT__u_charRAM__DOT__memory;
        VlUnpacked<CData/*7:0*/, 1024> tbGenericVga__DOT__dut__DOT__u_textGen__DOT__font__DOT__fontMemory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VtbGenericVga__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtbGenericVga___024root(VtbGenericVga__Syms* symsp, const char* v__name);
    ~VtbGenericVga___024root();
    VL_UNCOPYABLE(VtbGenericVga___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
