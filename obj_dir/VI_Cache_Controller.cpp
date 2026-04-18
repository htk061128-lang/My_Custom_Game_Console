// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VI_Cache_Controller.h for the primary calling header

#include "VI_Cache_Controller.h"
#include "VI_Cache_Controller__Syms.h"

//==========

void VI_Cache_Controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VI_Cache_Controller::eval\n"); );
    VI_Cache_Controller__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("I_Cache_Controller.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VI_Cache_Controller::_eval_initial_loop(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("I_Cache_Controller.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VI_Cache_Controller::_sequent__TOP__1(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_sequent__TOP__1\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v0;
    CData/*0:0*/ __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v1;
    CData/*0:0*/ __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v2;
    CData/*0:0*/ __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v3;
    CData/*0:0*/ __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v4;
    IData/*31:0*/ __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v0;
    IData/*31:0*/ __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v1;
    IData/*31:0*/ __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v2;
    IData/*31:0*/ __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v3;
    // Body
    __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v0 = 0U;
    __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v1 = 0U;
    __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v2 = 0U;
    __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v3 = 0U;
    __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v4 = 0U;
    vlTOPp->I_Cache_Controller__DOT__random_bit = ((IData)(vlTOPp->resetn) 
                                                   & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)));
    if (vlTOPp->resetn) {
        if (vlTOPp->I_Cache_Controller__DOT__cpu_tag_save) {
            vlTOPp->I_Cache_Controller__DOT__cpu_I_tag 
                = (0x7fffU & (vlTOPp->CPU_addr >> 0xdU));
        }
    } else {
        vlTOPp->I_Cache_Controller__DOT__cpu_I_tag = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->I_Cache_Controller__DOT__burst_counter_plus) {
            vlTOPp->I_Cache_Controller__DOT__burst_counter 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter)));
        }
        if (vlTOPp->I_Cache_Controller__DOT__burst_counter_reset) {
            vlTOPp->I_Cache_Controller__DOT__burst_counter = 0U;
        }
    } else {
        vlTOPp->I_Cache_Controller__DOT__burst_counter = 0U;
    }
    vlTOPp->I_Cache_Controller__DOT__main_state = ((IData)(vlTOPp->resetn)
                                                    ? (IData)(vlTOPp->I_Cache_Controller__DOT__main_next)
                                                    : 0U);
    if (vlTOPp->resetn) {
        if (vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0) {
            __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v0 
                = vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata
                [0U];
            __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v0 = 1U;
        }
        if (vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1) {
            __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v1 
                = vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata
                [1U];
            __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v1 = 1U;
        }
        if (vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2) {
            __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v2 
                = vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata
                [2U];
            __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v2 = 1U;
        }
        if (vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3) {
            __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v3 
                = vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata
                [3U];
            __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v3 = 1U;
        }
    } else {
        __Vdlyvset__I_Cache_Controller__DOT__word_buffer__v4 = 1U;
    }
    if (__Vdlyvset__I_Cache_Controller__DOT__word_buffer__v0) {
        vlTOPp->I_Cache_Controller__DOT__word_buffer[0U] 
            = __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v0;
    }
    if (__Vdlyvset__I_Cache_Controller__DOT__word_buffer__v1) {
        vlTOPp->I_Cache_Controller__DOT__word_buffer[1U] 
            = __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v1;
    }
    if (__Vdlyvset__I_Cache_Controller__DOT__word_buffer__v2) {
        vlTOPp->I_Cache_Controller__DOT__word_buffer[2U] 
            = __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v2;
    }
    if (__Vdlyvset__I_Cache_Controller__DOT__word_buffer__v3) {
        vlTOPp->I_Cache_Controller__DOT__word_buffer[3U] 
            = __Vdlyvval__I_Cache_Controller__DOT__word_buffer__v3;
    }
    if (__Vdlyvset__I_Cache_Controller__DOT__word_buffer__v4) {
        vlTOPp->I_Cache_Controller__DOT__word_buffer[0U] = 0U;
        vlTOPp->I_Cache_Controller__DOT__word_buffer[1U] = 0U;
        vlTOPp->I_Cache_Controller__DOT__word_buffer[2U] = 0U;
        vlTOPp->I_Cache_Controller__DOT__word_buffer[3U] = 0U;
    }
    vlTOPp->BRAM0_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_din[0U] = 0U;
    vlTOPp->BRAM1_din[1U] = 0U;
    vlTOPp->BRAM1_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_din[0U] = (0x80U 
                                                 | ((0xffffff00U 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U])))) 
                                                        << 8U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag) 
                                                          >> 8U))));
                        vlTOPp->BRAM1_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM1_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_din[0U] = 0U;
    vlTOPp->BRAM0_din[1U] = 0U;
    vlTOPp->BRAM0_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_din[0U] = ((0xffffff00U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U])))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)));
                        vlTOPp->BRAM0_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM0_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_din[0U] = 0U;
    vlTOPp->BRAM3_din[1U] = 0U;
    vlTOPp->BRAM3_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_din[0U] = 
                                (0x80U | ((0xffffff00U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                        [3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                         [2U])))) 
                                              << 8U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag) 
                                                >> 8U))));
                            vlTOPp->BRAM3_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [2U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                              [3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [2U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM3_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_din[0U] = 0U;
    vlTOPp->BRAM2_din[1U] = 0U;
    vlTOPp->BRAM2_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_din[0U] = 
                                ((0xffffff00U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                           [1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                            [0U])))) 
                                                 << 8U)) 
                                 | (0xffU & (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)));
                            vlTOPp->BRAM2_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [0U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                              [1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [0U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM2_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VI_Cache_Controller::_combo__TOP__3(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_combo__TOP__3\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if ((2U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                if (vlTOPp->EMEM_ready) {
                                    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if (vlTOPp->EMEM_ready) {
                                vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if (vlTOPp->EMEM_ready) {
                            vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1 = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_waddr = (0x1ffU 
                                               & (vlTOPp->CPU_addr 
                                                  >> 4U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_waddr = (0x1ffU 
                                                   & (vlTOPp->CPU_addr 
                                                      >> 4U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_waddr = (0x1ffU 
                                               & (vlTOPp->CPU_addr 
                                                  >> 4U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_waddr = (0x1ffU 
                                                   & (vlTOPp->CPU_addr 
                                                      >> 4U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__cpu_tag_save = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->I_Cache_Controller__DOT__cpu_tag_save = 1U;
        }
    }
    vlTOPp->BRAM3_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM3_ren = 1U;
        }
    }
    vlTOPp->BRAM0_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM0_ren = 1U;
        }
    }
    vlTOPp->BRAM1_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM1_ren = 1U;
        }
    }
    vlTOPp->BRAM2_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM2_ren = 1U;
        }
    }
    vlTOPp->BRAM0_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM0_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM3_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM3_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM1_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM1_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM2_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM2_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->cache_hit = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                vlTOPp->cache_hit = 1U;
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                    vlTOPp->cache_hit = 1U;
                }
            }
        }
    }
    vlTOPp->EMEM_burst_len = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_burst_len = 3U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_burst_len = 3U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_burst_len = 3U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_burst_len = 3U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_burst_len = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0 = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0 = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if (vlTOPp->EMEM_ready) {
                            vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if (vlTOPp->EMEM_ready) {
                                vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__burst_counter_reset = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if ((1U & (~ (IData)(vlTOPp->EMEM_ready)))) {
                        vlTOPp->I_Cache_Controller__DOT__burst_counter_reset = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if ((2U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                if (vlTOPp->EMEM_ready) {
                                    vlTOPp->I_Cache_Controller__DOT__burst_counter_reset = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0U] = 0U;
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[1U] = 0U;
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[2U] = 0U;
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[3U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0U] 
                            = vlTOPp->EMEM_rdata;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0U] 
                            = vlTOPp->EMEM_rdata;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if (vlTOPp->EMEM_ready) {
                            vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[1U] 
                                = vlTOPp->EMEM_rdata;
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if (vlTOPp->EMEM_ready) {
                                vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[2U] 
                                    = vlTOPp->EMEM_rdata;
                            }
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                if (vlTOPp->EMEM_ready) {
                                    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[3U] 
                                        = vlTOPp->EMEM_rdata;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_wstrb = 0xfU;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_wstrb = 0U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_wstrb = 0U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_wstrb = 0U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_wstrb = 0U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_wstrb = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_burst_en = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_burst_en = 0U;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_burst_en = 0U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_burst_en = 1U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_burst_en = 1U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_burst_en = 1U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_burst_en = 1U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_burst_en = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_burst_en = 0U;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_burst_en = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_valid = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_valid = 1U;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_valid = 1U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_valid = 1U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_valid = 1U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_valid = 1U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_valid = 1U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_valid = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CPU_ready = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                if (vlTOPp->EMEM_ready) {
                    vlTOPp->CPU_ready = 1U;
                }
            } else {
                if (vlTOPp->CPU_valid) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->CPU_ready = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                vlTOPp->CPU_ready = 1U;
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                    vlTOPp->CPU_ready = 1U;
                }
            }
        } else {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->CPU_ready = vlTOPp->EMEM_ready;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->CPU_ready = vlTOPp->EMEM_ready;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_wdata = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_wdata 
                                    = vlTOPp->CPU_wdata;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_addr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_addr = (0xffffff0U 
                                         & vlTOPp->CPU_addr);
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_addr = (0xffffff0U 
                                         & vlTOPp->CPU_addr);
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_addr = (0xffffff0U 
                                             & vlTOPp->CPU_addr);
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_addr = (0xffffff0U 
                                                 & vlTOPp->CPU_addr);
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_addr = 
                                    (0xffffff0U & vlTOPp->CPU_addr);
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->I_Cache_Controller__DOT__main_next = 1U;
        } else {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->I_Cache_Controller__DOT__main_next = 3U;
                if (vlTOPp->EMEM_ready) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                }
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 4U;
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                    }
                } else {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            vlTOPp->I_Cache_Controller__DOT__main_next 
                = (((vlTOPp->BRAM1_dout[0U] >> 7U) 
                    & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                    << 8U)) | (0xffU 
                                               & vlTOPp->BRAM0_dout[0U])) 
                       == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))
                    ? 0U : (((vlTOPp->BRAM3_dout[0U] 
                              >> 7U) & (((0x7f00U & 
                                          (vlTOPp->BRAM3_dout[0U] 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlTOPp->BRAM2_dout[0U])) 
                                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))
                             ? 0U : 5U));
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 5U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->I_Cache_Controller__DOT__main_next = 5U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->I_Cache_Controller__DOT__main_next = 5U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->I_Cache_Controller__DOT__main_next 
                                    = ((IData)(vlTOPp->EMEM_ready)
                                        ? 6U : 5U);
                            }
                        }
                    }
                }
            } else {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                } else {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->I_Cache_Controller__DOT__main_next 
                            = ((IData)(vlTOPp->EMEM_ready)
                                ? 0U : 3U);
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->I_Cache_Controller__DOT__main_next 
                                = ((IData)(vlTOPp->EMEM_ready)
                                    ? 0U : 4U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CPU_rdata = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                if (vlTOPp->EMEM_ready) {
                    vlTOPp->CPU_rdata = vlTOPp->EMEM_rdata;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                vlTOPp->CPU_rdata = ((8U & vlTOPp->CPU_addr)
                                      ? ((4U & vlTOPp->CPU_addr)
                                          ? ((vlTOPp->BRAM1_dout[2U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM1_dout[1U] 
                                                >> 8U))
                                          : ((vlTOPp->BRAM1_dout[1U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM1_dout[0U] 
                                                >> 8U)))
                                      : ((4U & vlTOPp->CPU_addr)
                                          ? ((vlTOPp->BRAM0_dout[2U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM0_dout[1U] 
                                                >> 8U))
                                          : ((vlTOPp->BRAM0_dout[1U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM0_dout[0U] 
                                                >> 8U))));
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                    vlTOPp->CPU_rdata = ((8U & vlTOPp->CPU_addr)
                                          ? ((4U & vlTOPp->CPU_addr)
                                              ? ((vlTOPp->BRAM3_dout[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM3_dout[1U] 
                                                    >> 8U))
                                              : ((vlTOPp->BRAM3_dout[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM3_dout[0U] 
                                                    >> 8U)))
                                          : ((4U & vlTOPp->CPU_addr)
                                              ? ((vlTOPp->BRAM2_dout[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM2_dout[1U] 
                                                    >> 8U))
                                              : ((vlTOPp->BRAM2_dout[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM2_dout[0U] 
                                                    >> 8U))));
                }
            }
        } else {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->CPU_rdata = ((IData)(vlTOPp->EMEM_ready)
                                              ? vlTOPp->EMEM_rdata
                                              : 0U);
                    }
                }
            }
        }
    }
}

void VI_Cache_Controller::_eval(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_eval\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->resetn)) & (IData)(vlTOPp->__Vclklast__TOP__resetn)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__resetn = vlTOPp->resetn;
}

VL_INLINE_OPT QData VI_Cache_Controller::_change_request(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_change_request\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VI_Cache_Controller::_change_request_1(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_change_request_1\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VI_Cache_Controller::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((CPU_valid & 0xfeU))) {
        Verilated::overWidthError("CPU_valid");}
    if (VL_UNLIKELY((CPU_instr & 0xfeU))) {
        Verilated::overWidthError("CPU_instr");}
    if (VL_UNLIKELY((CPU_wstrb & 0xf0U))) {
        Verilated::overWidthError("CPU_wstrb");}
    if (VL_UNLIKELY((EMEM_ready & 0xfeU))) {
        Verilated::overWidthError("EMEM_ready");}
    if (VL_UNLIKELY((BRAM0_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM0_dout");}
    if (VL_UNLIKELY((BRAM1_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM1_dout");}
    if (VL_UNLIKELY((BRAM2_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM2_dout");}
    if (VL_UNLIKELY((BRAM3_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM3_dout");}
}
#endif  // VL_DEBUG
