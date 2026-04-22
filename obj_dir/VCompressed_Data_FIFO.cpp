// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCompressed_Data_FIFO.h for the primary calling header

#include "VCompressed_Data_FIFO.h"
#include "VCompressed_Data_FIFO__Syms.h"

//==========

void VCompressed_Data_FIFO::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCompressed_Data_FIFO::eval\n"); );
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Compressed_Data_FIFO.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCompressed_Data_FIFO::_eval_initial_loop(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Compressed_Data_FIFO.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCompressed_Data_FIFO::_sequent__TOP__1(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_sequent__TOP__1\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count;
    CData/*3:0*/ __Vdly__Compressed_Data_FIFO__DOT__main_state;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__script_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__status_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char2_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_rear;
    CData/*7:0*/ __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter;
    SData/*8:0*/ __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count;
    SData/*8:0*/ __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count;
    SData/*8:0*/ __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_rear;
    SData/*8:0*/ __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_rear;
    SData/*9:0*/ __Vdly__Compressed_Data_FIFO__DOT__should_read_layer;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__uni1_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__uni2_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__status_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__script_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__char1_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__char2_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__char3_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__char4_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__back1_next_ad;
    IData/*31:0*/ __Vdly__Compressed_Data_FIFO__DOT__back2_next_ad;
    // Body
    __Vdly__Compressed_Data_FIFO__DOT__back2_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__back1_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__char4_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__char3_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__char2_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__char1_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__script_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__status_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__uni2_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__uni1_next_ad 
        = vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad;
    __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__char2_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__status_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__script_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_rear 
        = vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear;
    __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count 
        = vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count;
    __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter 
        = vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter;
    __Vdly__Compressed_Data_FIFO__DOT__should_read_layer 
        = vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer;
    __Vdly__Compressed_Data_FIFO__DOT__main_state = vlTOPp->Compressed_Data_FIFO__DOT__main_state;
    if (vlTOPp->resetn) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state 
            = vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next;
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state 
            = vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next;
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state 
            = vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next;
        vlTOPp->Compressed_Data_FIFO__DOT__clk_counter 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)));
    } else {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__clk_counter = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode) 
             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__round_end))) {
            vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent = 0U;
        }
        if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)) 
             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__round_end))) {
            vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic = 0U;
        }
        if ((((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want) 
                    & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want))) 
                   | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want)) 
                      & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want))) 
                  | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want)))) 
                 | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want)) 
                    & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want))) 
                | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want) 
                   & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want)))) 
               | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want)) 
                  & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want))) 
              | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want) 
                 & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want)))) 
             | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want)) 
                & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want)))) {
            if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want) 
                 & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want)))) {
                __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count)));
            } else {
                if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want)) 
                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want))) {
                    __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count 
                        = (0x1ffU & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count) 
                                     - (IData)(1U)));
                } else {
                    if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want) 
                         & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want)))) {
                        __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count)));
                    } else {
                        if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want)) 
                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want))) {
                            __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count 
                                = (0x1ffU & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count) 
                                             - (IData)(1U)));
                        } else {
                            if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want) 
                                 & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want)))) {
                                __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count)));
                            } else {
                                if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want)) 
                                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want))) {
                                    __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count) 
                                            - (IData)(1U)));
                                } else {
                                    vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count 
                                        = (0xffU & 
                                           (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want) 
                                             & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))
                                             : ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count) 
                                                - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want) 
                        & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want))) 
                       | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want)) 
                          & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want))) 
                      | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want) 
                         & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want)))) 
                     | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want)) 
                        & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want))) 
                    | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want) 
                       & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want)))) 
                   | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want)) 
                      & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want))) 
                  | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want)))) 
                 | ((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want)) 
                    & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want)))) {
                if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want)))) {
                    __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count)));
                } else {
                    if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want)) 
                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want))) {
                        __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count 
                            = (0xffU & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count) 
                                        - (IData)(1U)));
                    } else {
                        if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want) 
                             & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want)))) {
                            __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count)));
                        } else {
                            if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want)) 
                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want))) {
                                __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count 
                                    = (0xffU & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count) 
                                                - (IData)(1U)));
                            } else {
                                if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want) 
                                     & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want)))) {
                                    __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count 
                                        = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count)));
                                } else {
                                    if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want)) 
                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want))) {
                                        __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count) 
                                                  - (IData)(1U)));
                                    } else {
                                        vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count 
                                            = (0xffU 
                                               & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want) 
                                                   & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))
                                                   : 
                                                  ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count) 
                                                   - (IData)(1U))));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want)))) {
                    __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count)));
                } else {
                    if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want)) 
                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want))) {
                        __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count 
                            = (0xffU & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count) 
                                        - (IData)(1U)));
                    } else {
                        if (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want) 
                             & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want)))) {
                            __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count)));
                        } else {
                            if (((~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want)) 
                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want))) {
                                __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count 
                                    = (0xffU & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count) 
                                                - (IData)(1U)));
                            }
                        }
                    }
                }
            }
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front)));
        }
        if (vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want) {
            vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front)));
        }
        if ((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if (vlTOPp->PPU_start) {
                __Vdly__Compressed_Data_FIFO__DOT__main_state = 1U;
                __Vdly__Compressed_Data_FIFO__DOT__uni1_next_ad 
                    = vlTOPp->Universal_Layer1_Address;
                __Vdly__Compressed_Data_FIFO__DOT__uni2_next_ad 
                    = vlTOPp->Universal_Layer2_Address;
                __Vdly__Compressed_Data_FIFO__DOT__status_next_ad 
                    = vlTOPp->Status_Layer_Address;
                __Vdly__Compressed_Data_FIFO__DOT__script_next_ad 
                    = vlTOPp->Script_Layer_Address;
                __Vdly__Compressed_Data_FIFO__DOT__char1_next_ad 
                    = vlTOPp->Character_Layer1_Address;
                __Vdly__Compressed_Data_FIFO__DOT__char2_next_ad 
                    = vlTOPp->Character_Layer2_Address;
                __Vdly__Compressed_Data_FIFO__DOT__char3_next_ad 
                    = vlTOPp->Character_Layer3_Address;
                __Vdly__Compressed_Data_FIFO__DOT__char4_next_ad 
                    = vlTOPp->Character_Layer4_Address;
                __Vdly__Compressed_Data_FIFO__DOT__back1_next_ad 
                    = vlTOPp->Background_Layer1_Address;
                __Vdly__Compressed_Data_FIFO__DOT__back2_next_ad 
                    = vlTOPp->Background_Layer2_Address;
                vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__script_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__status_fifo_rear = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char2_fifo_rear = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_rear = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__should_read_layer = 0U;
                __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter = 0U;
                vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg = 0U;
            } else {
                __Vdly__Compressed_Data_FIFO__DOT__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                    if (vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode) {
                        if (vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode) {
                            __Vdly__Compressed_Data_FIFO__DOT__main_state = 2U;
                            __Vdly__Compressed_Data_FIFO__DOT__should_read_layer 
                                = vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer;
                            __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter = 0U;
                            vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg = 0U;
                            if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                             | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                                >> 1U)) 
                                            | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                               >> 2U)) 
                                           | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                              >> 3U)) 
                                          | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                             >> 4U)) 
                                         | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                            >> 5U)) 
                                        | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                           >> 6U)) 
                                       | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                          >> 7U)))) {
                                if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                    vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                        = (1U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                        vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                            = (2U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                        vlTOPp->EMEM_valid = 1U;
                                        vlTOPp->EMEM_addr 
                                            = vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad;
                                        vlTOPp->EMEM_wstrb = 0U;
                                        vlTOPp->EMEM_wdata = 0U;
                                        vlTOPp->EMEM_burst_en = 1U;
                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                            vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                                = (4U 
                                                   | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                            vlTOPp->EMEM_valid = 1U;
                                            vlTOPp->EMEM_addr 
                                                = vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad;
                                            vlTOPp->EMEM_wstrb = 0U;
                                            vlTOPp->EMEM_wdata = 0U;
                                            vlTOPp->EMEM_burst_en = 1U;
                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                                    = 
                                                    (8U 
                                                     | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                                vlTOPp->EMEM_valid = 1U;
                                                vlTOPp->EMEM_addr 
                                                    = vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad;
                                                vlTOPp->EMEM_wstrb = 0U;
                                                vlTOPp->EMEM_wdata = 0U;
                                                vlTOPp->EMEM_burst_en = 1U;
                                                vlTOPp->EMEM_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                    vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                                        = 
                                                        (0x10U 
                                                         | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                                    vlTOPp->EMEM_valid = 1U;
                                                    vlTOPp->EMEM_addr 
                                                        = vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad;
                                                    vlTOPp->EMEM_wstrb = 0U;
                                                    vlTOPp->EMEM_wdata = 0U;
                                                    vlTOPp->EMEM_burst_en = 1U;
                                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                        vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                                            = 
                                                            (0x20U 
                                                             | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                                        vlTOPp->EMEM_valid = 1U;
                                                        vlTOPp->EMEM_addr 
                                                            = vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad;
                                                        vlTOPp->EMEM_wstrb = 0U;
                                                        vlTOPp->EMEM_wdata = 0U;
                                                        vlTOPp->EMEM_burst_en = 1U;
                                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                                    } else {
                                                        if (
                                                            (0x40U 
                                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                            vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                                                = 
                                                                (0x40U 
                                                                 | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                                            vlTOPp->EMEM_valid = 1U;
                                                            vlTOPp->EMEM_addr 
                                                                = vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad;
                                                            vlTOPp->EMEM_wstrb = 0U;
                                                            vlTOPp->EMEM_wdata = 0U;
                                                            vlTOPp->EMEM_burst_en = 1U;
                                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                                        } else {
                                                            vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                                                = 
                                                                (0x80U 
                                                                 | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                                            vlTOPp->EMEM_valid = 1U;
                                                            vlTOPp->EMEM_addr 
                                                                = vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad;
                                                            vlTOPp->EMEM_wstrb = 0U;
                                                            vlTOPp->EMEM_wdata = 0U;
                                                            vlTOPp->EMEM_burst_en = 1U;
                                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                    vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                        = (0x100U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                        vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent 
                                            = (0x200U 
                                               | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent));
                                        vlTOPp->EMEM_valid = 1U;
                                        vlTOPp->EMEM_addr 
                                            = vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad;
                                        vlTOPp->EMEM_wstrb = 0U;
                                        vlTOPp->EMEM_wdata = 0U;
                                        vlTOPp->EMEM_burst_en = 1U;
                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                    }
                                }
                            }
                        }
                    } else {
                        __Vdly__Compressed_Data_FIFO__DOT__main_state = 2U;
                        __Vdly__Compressed_Data_FIFO__DOT__should_read_layer 
                            = vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer;
                        __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter = 0U;
                        vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg = 0U;
                        if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                         | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                            >> 1U)) 
                                        | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                          >> 3U)) | 
                                      ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                       >> 4U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                                  >> 5U)) 
                                    | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                       >> 6U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer) 
                                                  >> 7U)))) {
                            if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                    = (1U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                vlTOPp->EMEM_valid = 1U;
                                vlTOPp->EMEM_addr = vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad;
                                vlTOPp->EMEM_wstrb = 0U;
                                vlTOPp->EMEM_wdata = 0U;
                                vlTOPp->EMEM_burst_en = 1U;
                                vlTOPp->EMEM_burst_len = 0x1fU;
                            } else {
                                if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                    vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                        = (2U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                        vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                            = (4U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                        vlTOPp->EMEM_valid = 1U;
                                        vlTOPp->EMEM_addr 
                                            = vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad;
                                        vlTOPp->EMEM_wstrb = 0U;
                                        vlTOPp->EMEM_wdata = 0U;
                                        vlTOPp->EMEM_burst_en = 1U;
                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                    } else {
                                        if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                            vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                                = (8U 
                                                   | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                            vlTOPp->EMEM_valid = 1U;
                                            vlTOPp->EMEM_addr 
                                                = vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad;
                                            vlTOPp->EMEM_wstrb = 0U;
                                            vlTOPp->EMEM_wdata = 0U;
                                            vlTOPp->EMEM_burst_en = 1U;
                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                                    = 
                                                    (0x10U 
                                                     | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                                vlTOPp->EMEM_valid = 1U;
                                                vlTOPp->EMEM_addr 
                                                    = vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad;
                                                vlTOPp->EMEM_wstrb = 0U;
                                                vlTOPp->EMEM_wdata = 0U;
                                                vlTOPp->EMEM_burst_en = 1U;
                                                vlTOPp->EMEM_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                    vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                                        = 
                                                        (0x20U 
                                                         | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                                    vlTOPp->EMEM_valid = 1U;
                                                    vlTOPp->EMEM_addr 
                                                        = vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad;
                                                    vlTOPp->EMEM_wstrb = 0U;
                                                    vlTOPp->EMEM_wdata = 0U;
                                                    vlTOPp->EMEM_burst_en = 1U;
                                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x40U 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                                        vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                                            = 
                                                            (0x40U 
                                                             | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                                        vlTOPp->EMEM_valid = 1U;
                                                        vlTOPp->EMEM_addr 
                                                            = vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad;
                                                        vlTOPp->EMEM_wstrb = 0U;
                                                        vlTOPp->EMEM_wdata = 0U;
                                                        vlTOPp->EMEM_burst_en = 1U;
                                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                                    } else {
                                                        vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                                            = 
                                                            (0x80U 
                                                             | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                                        vlTOPp->EMEM_valid = 1U;
                                                        vlTOPp->EMEM_addr 
                                                            = vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad;
                                                        vlTOPp->EMEM_wstrb = 0U;
                                                        vlTOPp->EMEM_wdata = 0U;
                                                        vlTOPp->EMEM_burst_en = 1U;
                                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                    = (0x100U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                vlTOPp->EMEM_valid = 1U;
                                vlTOPp->EMEM_addr = vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad;
                                vlTOPp->EMEM_wstrb = 0U;
                                vlTOPp->EMEM_wdata = 0U;
                                vlTOPp->EMEM_burst_en = 1U;
                                vlTOPp->EMEM_burst_len = 0x1fU;
                            } else {
                                if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                                    vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic 
                                        = (0x200U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                }
                            }
                        }
                    }
                } else {
                    if ((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))) {
                        if (vlTOPp->PPU_start) {
                            __Vdly__Compressed_Data_FIFO__DOT__main_state = 1U;
                        } else {
                            if ((1U & (~ (IData)(vlTOPp->PPU_start)))) {
                                __Vdly__Compressed_Data_FIFO__DOT__main_state = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                    if (vlTOPp->EMEM_ready) {
                        if ((0x1fU == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                            __Vdly__Compressed_Data_FIFO__DOT__main_state = 1U;
                            __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter = 0U;
                            vlTOPp->EMEM_valid = 0U;
                            vlTOPp->EMEM_addr = 0U;
                            vlTOPp->EMEM_wstrb = 0U;
                            vlTOPp->EMEM_wdata = 0U;
                            vlTOPp->EMEM_burst_en = 0U;
                            vlTOPp->EMEM_burst_len = 0U;
                        } else {
                            __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter)));
                            __Vdly__Compressed_Data_FIFO__DOT__main_state = 2U;
                        }
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                            if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                                if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 1U)) 
                                                | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)) 
                                              | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                             | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                >> 5U)) 
                                            | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                                           | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 7U)))) {
                                    if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        __Vdly__Compressed_Data_FIFO__DOT__back1_next_ad 
                                            = ((IData)(8U) 
                                               + vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad);
                                        __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_rear 
                                            = (0x1ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear)));
                                    } else {
                                        if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            __Vdly__Compressed_Data_FIFO__DOT__back2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad);
                                            __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_rear 
                                                = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear)));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                __Vdly__Compressed_Data_FIFO__DOT__char1_next_ad 
                                                    = 
                                                    ((IData)(8U) 
                                                     + vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad);
                                                __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_rear 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear)));
                                            } else {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                    __Vdly__Compressed_Data_FIFO__DOT__char2_next_ad 
                                                        = 
                                                        ((IData)(8U) 
                                                         + vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad);
                                                    __Vdly__Compressed_Data_FIFO__DOT__char2_fifo_rear 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear)));
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                        __Vdly__Compressed_Data_FIFO__DOT__char3_next_ad 
                                                            = 
                                                            ((IData)(8U) 
                                                             + vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad);
                                                        __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_rear 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear)));
                                                    } else {
                                                        if (
                                                            (0x20U 
                                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                            __Vdly__Compressed_Data_FIFO__DOT__char4_next_ad 
                                                                = 
                                                                ((IData)(8U) 
                                                                 + vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad);
                                                            __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_rear 
                                                                = 
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear)));
                                                        } else {
                                                            if (
                                                                (0x40U 
                                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                                __Vdly__Compressed_Data_FIFO__DOT__script_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad);
                                                                __Vdly__Compressed_Data_FIFO__DOT__script_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear)));
                                                            } else {
                                                                __Vdly__Compressed_Data_FIFO__DOT__status_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad);
                                                                __Vdly__Compressed_Data_FIFO__DOT__status_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        __Vdly__Compressed_Data_FIFO__DOT__uni1_next_ad 
                                            = ((IData)(8U) 
                                               + vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad);
                                        __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_rear 
                                            = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear)));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            __Vdly__Compressed_Data_FIFO__DOT__uni2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad);
                                            __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_rear 
                                                = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear)));
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg 
                                = vlTOPp->EMEM_rdata;
                        }
                    } else {
                        __Vdly__Compressed_Data_FIFO__DOT__main_state = 2U;
                    }
                }
            }
        }
    } else {
        __Vdly__Compressed_Data_FIFO__DOT__main_state = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__uni1_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__uni2_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__status_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__script_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char1_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char2_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char3_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char4_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__back1_next_ad = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__back2_next_ad = 0U;
        vlTOPp->EMEM_valid = 0U;
        vlTOPp->EMEM_addr = 0U;
        vlTOPp->EMEM_wdata = 0U;
        vlTOPp->EMEM_wstrb = 0xfU;
        vlTOPp->EMEM_burst_en = 0U;
        vlTOPp->EMEM_burst_len = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__script_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__status_fifo_rear = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char2_fifo_rear = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_rear = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__should_read_layer = 0U;
        __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter = 0U;
        vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg = 0U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__uni1_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__uni2_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__status_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__script_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__char1_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__char2_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__char3_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__char4_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__back1_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad 
        = __Vdly__Compressed_Data_FIFO__DOT__back2_next_ad;
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__script_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__status_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__char2_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear 
        = __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_rear;
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__back1_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__back2_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__char1_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__char3_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__char4_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__script_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__uni1_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count 
        = __Vdly__Compressed_Data_FIFO__DOT__uni2_fifo_count;
    vlTOPp->Compressed_Data_FIFO__DOT__main_state = __Vdly__Compressed_Data_FIFO__DOT__main_state;
    vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer 
        = __Vdly__Compressed_Data_FIFO__DOT__should_read_layer;
    vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter 
        = __Vdly__Compressed_Data_FIFO__DOT__emem_r_counter;
    vlTOPp->Character_Layer1_r_master = (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Character_Layer2_r_master = (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Character_Layer3_r_master = (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Character_Layer4_r_master = (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Script_Layer_r_master = (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Status_Layer_r_master = (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Universal_Layer1_r_master = (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Universal_Layer2_r_master = (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)) 
           | (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)));
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)) 
           | (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)));
    vlTOPp->Background_Layer1_count = vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count;
    vlTOPp->Background_Layer2_count = vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count;
    vlTOPp->Character_Layer1_count = vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count;
    vlTOPp->Character_Layer2_count = vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count;
    vlTOPp->Character_Layer3_count = vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count;
    vlTOPp->Character_Layer4_count = vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count;
    vlTOPp->Script_Layer_count = vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count;
    vlTOPp->Status_Layer_count = vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count;
    vlTOPp->Universal_Layer1_count = vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count;
    vlTOPp->Universal_Layer2_count = vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count;
    vlTOPp->Background_Layer1_r_master = vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master;
    vlTOPp->Background_Layer2_r_master = vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master;
}

VL_INLINE_OPT void VCompressed_Data_FIFO::_combo__TOP__3(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_combo__TOP__3\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Background_Layer2_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
                vlTOPp->Background_Layer2_data = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlTOPp->Background_Layer1_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
            vlTOPp->Background_Layer1_data = vlTOPp->BRAM9_dout_b;
        }
    }
    vlTOPp->Universal_Layer2_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                vlTOPp->Universal_Layer2_data = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlTOPp->Universal_Layer1_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            vlTOPp->Universal_Layer1_data = vlTOPp->BRAM7_dout_b;
        }
    }
    vlTOPp->Status_Layer_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                        vlTOPp->Status_Layer_data = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->Script_Layer_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                    vlTOPp->Script_Layer_data = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlTOPp->Character_Layer4_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                        vlTOPp->Character_Layer4_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->Character_Layer3_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                    vlTOPp->Character_Layer3_data = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlTOPp->Character_Layer2_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                vlTOPp->Character_Layer2_data = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlTOPp->Character_Layer1_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            vlTOPp->Character_Layer1_data = vlTOPp->BRAM8_dout_b;
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 4U;
    }
    vlTOPp->BRAM8_en_b = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    vlTOPp->BRAM8_addr_b = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front));
    }
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front))));
    }
    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 2U;
    }
    vlTOPp->BRAM7_en_b = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    vlTOPp->BRAM7_addr_b = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front))));
    }
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front))));
    }
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front))));
    }
    vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer = 0U;
    vlTOPp->Compressed_Data_FIFO__DOT__urgent_req = 
        ((((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count)) 
           & (IData)(vlTOPp->Background_Layer1_ena)) 
          << 9U) | ((((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count)) 
                      & (IData)(vlTOPp->Background_Layer2_ena)) 
                     << 8U) | ((((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count)) 
                                 & (IData)(vlTOPp->Character_Layer1_ena)) 
                                << 7U) | ((((0x20U 
                                             >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count)) 
                                            & (IData)(vlTOPp->Character_Layer2_ena)) 
                                           << 6U) | 
                                          ((((0x20U 
                                              >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count)) 
                                             & (IData)(vlTOPp->Character_Layer3_ena)) 
                                            << 5U) 
                                           | ((((0x20U 
                                                 >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count)) 
                                                & (IData)(vlTOPp->Character_Layer4_ena)) 
                                               << 4U) 
                                              | ((((0x20U 
                                                    >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count)) 
                                                   & (IData)(vlTOPp->Script_Layer_ena)) 
                                                  << 3U) 
                                                 | ((((0x20U 
                                                       >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count)) 
                                                      & (IData)(vlTOPp->Status_Layer_ena)) 
                                                     << 2U) 
                                                    | ((((0x20U 
                                                          >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count)) 
                                                         & (IData)(vlTOPp->Universal_Layer1_ena)) 
                                                        << 1U) 
                                                       | ((0x20U 
                                                           >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count)) 
                                                          & (IData)(vlTOPp->Universal_Layer2_ena)))))))))));
    vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode 
        = (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3feU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | ((IData)(vlTOPp->Background_Layer1_ena) 
            & (0xf0U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3fdU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Background_Layer2_ena) 
             & (0xf0U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
            << 1U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3fbU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer1_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
            << 2U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3f7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer2_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
            << 3U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3efU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer3_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
            << 4U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3dfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer4_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
            << 5U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3bfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Script_Layer_ena) & (0x70U 
                                                  >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
            << 6U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x37fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Status_Layer_ena) & (0x70U 
                                                  >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
            << 7U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x2ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Universal_Layer1_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
            << 8U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x1ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Universal_Layer2_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
            << 9U));
    vlTOPp->Compressed_Data_FIFO__DOT__valid_req = 
        ((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req))
          ? (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)
          : (IData)(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3feU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (1U & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                   ? ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                      & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent)))
                   : ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                      & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic))))));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3fdU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (2U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                    ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 1U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                     >> 1U))) : (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                                                  >> 1U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                                     >> 1U)))) 
                  << 1U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3fbU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (4U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                    ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 2U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                     >> 2U))) : (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                                     >> 2U)))) 
                  << 2U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3f7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (8U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                    ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 3U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                     >> 3U))) : (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                                     >> 3U)))) 
                  << 3U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3efU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x10U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 4U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 4U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 4U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 4U)))) << 4U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3dfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x20U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 5U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 5U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 5U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 5U)))) << 5U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3bfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x40U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 6U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 6U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 6U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 6U)))) << 6U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x37fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x80U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 7U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 7U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 7U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 7U)))) << 7U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x2ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x100U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                        ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                            >> 8U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                         >> 8U))) : 
                       (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                         >> 8U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                      >> 8U)))) << 8U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x1ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x200U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                        ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                            >> 9U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                         >> 9U))) : 
                       (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                         >> 9U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                      >> 9U)))) << 9U)));
    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req) 
                     | (2U == (3U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                    | (4U == (7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                   | (8U == (0xfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                  | (0x10U == (0x1fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                 | (0x20U == (0x3fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                | (0x40U == (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
               | (0x80U == (0xffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))))) {
        vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer 
            = ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req))
                ? (1U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                : ((2U == (3U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                    ? (2U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                    : ((4U == (7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                        ? (4U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                        : ((8U == (0xfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                            ? (8U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                            : ((0x10U == (0x1fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                                ? (0x10U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                                : ((0x20U == (0x3fU 
                                              & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                                    ? (0x20U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                                    : ((0x40U == (0x7fU 
                                                  & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                                        ? (0x40U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                                        : (0x80U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer)))))))));
    } else {
        if ((0x100U == (0x1ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) {
            vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer 
                = (0x100U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer));
        } else {
            if ((0x200U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req))) {
                vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer 
                    = (0x200U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer));
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__round_end = 
        ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req)) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)));
    vlTOPp->BRAM9_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_addr_a = 
                                (0xffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_addr_a = 
                                (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next = 2U;
    }
    vlTOPp->BRAM9_en_b = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    vlTOPp->BRAM9_addr_b = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0xffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front));
    }
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0xffU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front))));
    }
}

void VCompressed_Data_FIFO::_eval(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_eval\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData VCompressed_Data_FIFO::_change_request(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_change_request\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCompressed_Data_FIFO::_change_request_1(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_change_request_1\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCompressed_Data_FIFO::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((PPU_start & 0xfeU))) {
        Verilated::overWidthError("PPU_start");}
    if (VL_UNLIKELY((EMEM_ready & 0xfeU))) {
        Verilated::overWidthError("EMEM_ready");}
    if (VL_UNLIKELY((Background_Layer1_ena & 0xfeU))) {
        Verilated::overWidthError("Background_Layer1_ena");}
    if (VL_UNLIKELY((Background_Layer1_dequeue & 0xfeU))) {
        Verilated::overWidthError("Background_Layer1_dequeue");}
    if (VL_UNLIKELY((Background_Layer2_ena & 0xfeU))) {
        Verilated::overWidthError("Background_Layer2_ena");}
    if (VL_UNLIKELY((Background_Layer2_dequeue & 0xfeU))) {
        Verilated::overWidthError("Background_Layer2_dequeue");}
    if (VL_UNLIKELY((Character_Layer1_ena & 0xfeU))) {
        Verilated::overWidthError("Character_Layer1_ena");}
    if (VL_UNLIKELY((Character_Layer1_dequeue & 0xfeU))) {
        Verilated::overWidthError("Character_Layer1_dequeue");}
    if (VL_UNLIKELY((Character_Layer2_ena & 0xfeU))) {
        Verilated::overWidthError("Character_Layer2_ena");}
    if (VL_UNLIKELY((Character_Layer2_dequeue & 0xfeU))) {
        Verilated::overWidthError("Character_Layer2_dequeue");}
    if (VL_UNLIKELY((Character_Layer3_ena & 0xfeU))) {
        Verilated::overWidthError("Character_Layer3_ena");}
    if (VL_UNLIKELY((Character_Layer3_dequeue & 0xfeU))) {
        Verilated::overWidthError("Character_Layer3_dequeue");}
    if (VL_UNLIKELY((Character_Layer4_ena & 0xfeU))) {
        Verilated::overWidthError("Character_Layer4_ena");}
    if (VL_UNLIKELY((Character_Layer4_dequeue & 0xfeU))) {
        Verilated::overWidthError("Character_Layer4_dequeue");}
    if (VL_UNLIKELY((Script_Layer_ena & 0xfeU))) {
        Verilated::overWidthError("Script_Layer_ena");}
    if (VL_UNLIKELY((Script_Layer_dequeue & 0xfeU))) {
        Verilated::overWidthError("Script_Layer_dequeue");}
    if (VL_UNLIKELY((Status_Layer_ena & 0xfeU))) {
        Verilated::overWidthError("Status_Layer_ena");}
    if (VL_UNLIKELY((Status_Layer_dequeue & 0xfeU))) {
        Verilated::overWidthError("Status_Layer_dequeue");}
    if (VL_UNLIKELY((Universal_Layer1_ena & 0xfeU))) {
        Verilated::overWidthError("Universal_Layer1_ena");}
    if (VL_UNLIKELY((Universal_Layer1_dequeue & 0xfeU))) {
        Verilated::overWidthError("Universal_Layer1_dequeue");}
    if (VL_UNLIKELY((Universal_Layer2_ena & 0xfeU))) {
        Verilated::overWidthError("Universal_Layer2_ena");}
    if (VL_UNLIKELY((Universal_Layer2_dequeue & 0xfeU))) {
        Verilated::overWidthError("Universal_Layer2_dequeue");}
}
#endif  // VL_DEBUG
