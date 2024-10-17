// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__myDecoder__DOT__result = 0U;
    vlSelfRef.top__DOT__myDecoder__DOT__result = ((0xfff00U 
                                                   & vlSelfRef.top__DOT__myDecoder__DOT__result) 
                                                  | (IData)(vlSelfRef.top__DOT__count));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    vlSelfRef.bcd = (0xfffU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->bcd = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__myDecoder__DOT__result = VL_RAND_RESET_I(20);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
