// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__count = ((IData)(vlSelfRef.rst)
                                  ? 0U : (0xffU & ((IData)(vlSelfRef.en)
                                                    ? 
                                                   ((IData)(vlSelfRef.top__DOT__count) 
                                                    + (IData)(vlSelfRef.en))
                                                    : 
                                                   ((IData)(0x7fU) 
                                                    + (IData)(vlSelfRef.top__DOT__count)))));
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
