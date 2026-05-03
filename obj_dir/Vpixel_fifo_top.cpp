// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_fifo_top.h for the primary calling header

#include "Vpixel_fifo_top.h"
#include "Vpixel_fifo_top__Syms.h"

//==========

void Vpixel_fifo_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpixel_fifo_top::eval\n"); );
    Vpixel_fifo_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("pixel_fifo_top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpixel_fifo_top::_eval_initial_loop(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("pixel_fifo_top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vpixel_fifo_top::_sequent__TOP__3(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_sequent__TOP__3\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
    CData/*3:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
    CData/*7:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter;
    SData/*8:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count;
    SData/*8:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count;
    SData/*8:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
    SData/*8:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
    SData/*9:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad;
    IData/*31:0*/ __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad;
    // Body
    vlTOPp->uni1_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.__PVT__fifo_empty_128;
    vlTOPp->uni2_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.__PVT__fifo_empty_128;
    vlTOPp->sc_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.__PVT__fifo_empty_128;
    vlTOPp->st_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.__PVT__fifo_empty_128;
    vlTOPp->ch1_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.__PVT__fifo_empty_128;
    vlTOPp->ch2_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.__PVT__fifo_empty_128;
    vlTOPp->ch3_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.__PVT__fifo_empty_128;
    vlTOPp->ch4_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.__PVT__fifo_empty_128;
    vlTOPp->bg1_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.__PVT__fifo_empty_256;
    vlTOPp->bg2_decomp_empty = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.__PVT__fifo_empty_256;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count;
    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count 
        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count;
    if (vlTOPp->resetn) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state 
            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state 
            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state 
            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next;
    } else {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__round_end))) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent = 0U;
        }
        if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__round_end))) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic = 0U;
        }
        if ((((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want) 
                    & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want))) 
                   | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want)) 
                      & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want))) 
                  | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want)))) 
                 | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want)) 
                    & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want))) 
                | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want) 
                   & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want)))) 
               | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want)) 
                  & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want))) 
              | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want) 
                 & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want)))) 
             | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want)) 
                & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want)))) {
            if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want) 
                 & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want)))) {
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count)));
            } else {
                if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want)) 
                     & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want))) {
                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count 
                        = (0x1ffU & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count) 
                                     - (IData)(1U)));
                } else {
                    if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want) 
                         & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want)))) {
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count)));
                    } else {
                        if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want)) 
                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want))) {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count 
                                = (0x1ffU & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count) 
                                             - (IData)(1U)));
                        } else {
                            if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want) 
                                 & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want)))) {
                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count)));
                            } else {
                                if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want)) 
                                     & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want))) {
                                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count) 
                                            - (IData)(1U)));
                                } else {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count 
                                        = (0xffU & 
                                           (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want) 
                                             & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))
                                             : ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count) 
                                                - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want) 
                        & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want))) 
                       | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want)) 
                          & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want))) 
                      | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want) 
                         & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want)))) 
                     | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want)) 
                        & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want))) 
                    | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want) 
                       & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want)))) 
                   | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want)) 
                      & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want))) 
                  | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want)))) 
                 | ((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_inc_want)) 
                    & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want)))) {
                if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want)))) {
                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count)));
                } else {
                    if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want)) 
                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want))) {
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count 
                            = (0xffU & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count) 
                                        - (IData)(1U)));
                    } else {
                        if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want) 
                             & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want)))) {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count)));
                        } else {
                            if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want)) 
                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want))) {
                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count 
                                    = (0xffU & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count) 
                                                - (IData)(1U)));
                            } else {
                                if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want) 
                                     & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want)))) {
                                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count 
                                        = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count)));
                                } else {
                                    if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want)) 
                                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want))) {
                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count) 
                                                  - (IData)(1U)));
                                    } else {
                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count 
                                            = (0xffU 
                                               & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_inc_want) 
                                                   & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))
                                                   : 
                                                  ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count) 
                                                   - (IData)(1U))));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want) 
                     & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want)))) {
                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count)));
                } else {
                    if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want)) 
                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want))) {
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
                            = (0xffU & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count) 
                                        - (IData)(1U)));
                    } else {
                        if (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want) 
                             & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want)))) {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count)));
                        } else {
                            if (((~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want)) 
                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want))) {
                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
                                    = (0xffU & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count) 
                                                - (IData)(1U)));
                            }
                        }
                    }
                }
            }
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_front)));
        }
        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_front)));
        }
        if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if (vlTOPp->PPU_start) {
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 1U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad 
                    = vlTOPp->Universal_Layer1_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad 
                    = vlTOPp->Universal_Layer2_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad 
                    = vlTOPp->Status_Layer_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad 
                    = vlTOPp->Script_Layer_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad 
                    = vlTOPp->Character_Layer1_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad 
                    = vlTOPp->Character_Layer2_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad 
                    = vlTOPp->Character_Layer3_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad 
                    = vlTOPp->Character_Layer4_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad 
                    = vlTOPp->Background_Layer1_Address;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad 
                    = vlTOPp->Background_Layer2_Address;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_front = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer = 0U;
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
            } else {
                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                    if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode) {
                        if (vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode) {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 2U;
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer 
                                = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer;
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
                            if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                             | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                >> 1U)) 
                                            | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                               >> 2U)) 
                                           | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                              >> 3U)) 
                                          | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                             >> 4U)) 
                                         | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                            >> 5U)) 
                                        | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                           >> 6U)) 
                                       | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                          >> 7U)))) {
                                if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                        = (1U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                            = (2U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                        vlTOPp->EMEM_valid = 1U;
                                        vlTOPp->EMEM_addr 
                                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad;
                                        vlTOPp->EMEM_wstrb = 0U;
                                        vlTOPp->EMEM_wdata = 0U;
                                        vlTOPp->EMEM_burst_en = 1U;
                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                = (4U 
                                                   | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                            vlTOPp->EMEM_valid = 1U;
                                            vlTOPp->EMEM_addr 
                                                = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad;
                                            vlTOPp->EMEM_wstrb = 0U;
                                            vlTOPp->EMEM_wdata = 0U;
                                            vlTOPp->EMEM_burst_en = 1U;
                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                    = 
                                                    (8U 
                                                     | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                vlTOPp->EMEM_valid = 1U;
                                                vlTOPp->EMEM_addr 
                                                    = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad;
                                                vlTOPp->EMEM_wstrb = 0U;
                                                vlTOPp->EMEM_wdata = 0U;
                                                vlTOPp->EMEM_burst_en = 1U;
                                                vlTOPp->EMEM_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                        = 
                                                        (0x10U 
                                                         | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                    vlTOPp->EMEM_valid = 1U;
                                                    vlTOPp->EMEM_addr 
                                                        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad;
                                                    vlTOPp->EMEM_wstrb = 0U;
                                                    vlTOPp->EMEM_wdata = 0U;
                                                    vlTOPp->EMEM_burst_en = 1U;
                                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                            = 
                                                            (0x20U 
                                                             | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                        vlTOPp->EMEM_valid = 1U;
                                                        vlTOPp->EMEM_addr 
                                                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad;
                                                        vlTOPp->EMEM_wstrb = 0U;
                                                        vlTOPp->EMEM_wdata = 0U;
                                                        vlTOPp->EMEM_burst_en = 1U;
                                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                                    } else {
                                                        if (
                                                            (0x40U 
                                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                                = 
                                                                (0x40U 
                                                                 | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                            vlTOPp->EMEM_valid = 1U;
                                                            vlTOPp->EMEM_addr 
                                                                = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad;
                                                            vlTOPp->EMEM_wstrb = 0U;
                                                            vlTOPp->EMEM_wdata = 0U;
                                                            vlTOPp->EMEM_burst_en = 1U;
                                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                                        } else {
                                                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                                = 
                                                                (0x80U 
                                                                 | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                            vlTOPp->EMEM_valid = 1U;
                                                            vlTOPp->EMEM_addr 
                                                                = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad;
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
                                if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                        = (0x100U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                            = (0x200U 
                                               | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                        vlTOPp->EMEM_valid = 1U;
                                        vlTOPp->EMEM_addr 
                                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad;
                                        vlTOPp->EMEM_wstrb = 0U;
                                        vlTOPp->EMEM_wdata = 0U;
                                        vlTOPp->EMEM_burst_en = 1U;
                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                    }
                                }
                            }
                        }
                    } else {
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 2U;
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer 
                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer;
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
                        if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                         | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                            >> 1U)) 
                                        | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                          >> 3U)) | 
                                      ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                       >> 4U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                  >> 5U)) 
                                    | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                       >> 6U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                  >> 7U)))) {
                            if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                    = (1U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                vlTOPp->EMEM_valid = 1U;
                                vlTOPp->EMEM_addr = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad;
                                vlTOPp->EMEM_wstrb = 0U;
                                vlTOPp->EMEM_wdata = 0U;
                                vlTOPp->EMEM_burst_en = 1U;
                                vlTOPp->EMEM_burst_len = 0x1fU;
                            } else {
                                if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                        = (2U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                            = (4U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                        vlTOPp->EMEM_valid = 1U;
                                        vlTOPp->EMEM_addr 
                                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad;
                                        vlTOPp->EMEM_wstrb = 0U;
                                        vlTOPp->EMEM_wdata = 0U;
                                        vlTOPp->EMEM_burst_en = 1U;
                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                    } else {
                                        if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                = (8U 
                                                   | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                            vlTOPp->EMEM_valid = 1U;
                                            vlTOPp->EMEM_addr 
                                                = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad;
                                            vlTOPp->EMEM_wstrb = 0U;
                                            vlTOPp->EMEM_wdata = 0U;
                                            vlTOPp->EMEM_burst_en = 1U;
                                            vlTOPp->EMEM_burst_len = 0x1fU;
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                    = 
                                                    (0x10U 
                                                     | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                vlTOPp->EMEM_valid = 1U;
                                                vlTOPp->EMEM_addr 
                                                    = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad;
                                                vlTOPp->EMEM_wstrb = 0U;
                                                vlTOPp->EMEM_wdata = 0U;
                                                vlTOPp->EMEM_burst_en = 1U;
                                                vlTOPp->EMEM_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                        = 
                                                        (0x20U 
                                                         | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                    vlTOPp->EMEM_valid = 1U;
                                                    vlTOPp->EMEM_addr 
                                                        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad;
                                                    vlTOPp->EMEM_wstrb = 0U;
                                                    vlTOPp->EMEM_wdata = 0U;
                                                    vlTOPp->EMEM_burst_en = 1U;
                                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x40U 
                                                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                            = 
                                                            (0x40U 
                                                             | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                        vlTOPp->EMEM_valid = 1U;
                                                        vlTOPp->EMEM_addr 
                                                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad;
                                                        vlTOPp->EMEM_wstrb = 0U;
                                                        vlTOPp->EMEM_wdata = 0U;
                                                        vlTOPp->EMEM_burst_en = 1U;
                                                        vlTOPp->EMEM_burst_len = 0x1fU;
                                                    } else {
                                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                            = 
                                                            (0x80U 
                                                             | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                        vlTOPp->EMEM_valid = 1U;
                                                        vlTOPp->EMEM_addr 
                                                            = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad;
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
                            if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                    = (0x100U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                vlTOPp->EMEM_valid = 1U;
                                vlTOPp->EMEM_addr = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad;
                                vlTOPp->EMEM_wstrb = 0U;
                                vlTOPp->EMEM_wdata = 0U;
                                vlTOPp->EMEM_burst_en = 1U;
                                vlTOPp->EMEM_burst_len = 0x1fU;
                            } else {
                                if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic 
                                        = (0x200U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic));
                                    vlTOPp->EMEM_valid = 1U;
                                    vlTOPp->EMEM_addr 
                                        = vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad;
                                    vlTOPp->EMEM_wstrb = 0U;
                                    vlTOPp->EMEM_wdata = 0U;
                                    vlTOPp->EMEM_burst_en = 1U;
                                    vlTOPp->EMEM_burst_len = 0x1fU;
                                }
                            }
                        }
                    }
                } else {
                    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                        if (vlTOPp->PPU_start) {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 1U;
                        } else {
                            if ((1U & (~ (IData)(vlTOPp->PPU_start)))) {
                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                    if (vlTOPp->EMEM_ready) {
                        if ((0x1fU == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 1U;
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                            vlTOPp->EMEM_valid = 0U;
                            vlTOPp->EMEM_addr = 0U;
                            vlTOPp->EMEM_wstrb = 0U;
                            vlTOPp->EMEM_wdata = 0U;
                            vlTOPp->EMEM_burst_en = 0U;
                            vlTOPp->EMEM_burst_len = 0U;
                        } else {
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter)));
                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 2U;
                        }
                        if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                            if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                                if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 1U)) 
                                                | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)) 
                                              | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                             | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                >> 5U)) 
                                            | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                                           | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 7U)))) {
                                    if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad 
                                            = ((IData)(8U) 
                                               + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad);
                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear 
                                            = (0x1ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear)));
                                    } else {
                                        if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad);
                                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear 
                                                = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear)));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad 
                                                    = 
                                                    ((IData)(8U) 
                                                     + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad);
                                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear)));
                                            } else {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad 
                                                        = 
                                                        ((IData)(8U) 
                                                         + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad);
                                                    __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear)));
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad 
                                                            = 
                                                            ((IData)(8U) 
                                                             + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad);
                                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear)));
                                                    } else {
                                                        if (
                                                            (0x20U 
                                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad 
                                                                = 
                                                                ((IData)(8U) 
                                                                 + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad);
                                                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear 
                                                                = 
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear)));
                                                        } else {
                                                            if (
                                                                (0x40U 
                                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad);
                                                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear)));
                                                            } else {
                                                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad);
                                                                __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad 
                                            = ((IData)(8U) 
                                               + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad);
                                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear 
                                            = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear)));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad);
                                            __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear 
                                                = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear)));
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg 
                                = vlTOPp->EMEM_rdata;
                        }
                    } else {
                        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 2U;
                    }
                }
            }
        }
    } else {
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad = 0U;
        vlTOPp->EMEM_valid = 0U;
        vlTOPp->EMEM_addr = 0U;
        vlTOPp->EMEM_wdata = 0U;
        vlTOPp->EMEM_wstrb = 0xfU;
        vlTOPp->EMEM_burst_en = 0U;
        vlTOPp->EMEM_burst_len = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_front = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer = 0U;
        __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter 
        = ((IData)(vlTOPp->resetn) ? (3U & ((IData)(1U) 
                                            + (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))
            : 0U);
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
        = __Vdly__pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer = 0U;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__urgent_req 
        = ((((0x40U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
             & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Compressed_FIFO_ena)) 
            << 9U) | ((((0x40U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                        & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Compressed_FIFO_ena)) 
                       << 8U) | ((((0x20U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Compressed_FIFO_ena)) 
                                  << 7U) | ((((0x20U 
                                               >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                              & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Compressed_FIFO_ena)) 
                                             << 6U) 
                                            | ((((0x20U 
                                                  >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Compressed_FIFO_ena)) 
                                                << 5U) 
                                               | ((((0x20U 
                                                     >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                                    & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Compressed_FIFO_ena)) 
                                                   << 4U) 
                                                  | ((((0x20U 
                                                        >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                                       & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Compressed_FIFO_ena)) 
                                                      << 3U) 
                                                     | ((((0x20U 
                                                           >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Compressed_FIFO_ena)) 
                                                         << 2U) 
                                                        | ((((0x20U 
                                                              >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                                                             & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Compressed_FIFO_ena)) 
                                                            << 1U) 
                                                           | ((0x20U 
                                                               >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
                                                              & (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Compressed_FIFO_ena)))))))))));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode 
        = (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3feU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | ((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Compressed_FIFO_ena) 
              & (0xf0U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fdU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Compressed_FIFO_ena) 
               & (0xf0U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
              << 1U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fbU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
              << 2U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3f7U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
              << 3U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3efU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
              << 4U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3dfU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
              << 5U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3bfU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
              << 6U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x37fU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
              << 7U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x2ffU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
              << 8U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x1ffU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
              << 9U));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req 
        = ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__urgent_req))
            ? (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req)
            : (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3feU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (1U & ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                     ? ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent)))
                     : ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic))))));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fdU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (2U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 1U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 1U))) : (
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 1U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 1U)))) 
                    << 1U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fbU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (4U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 2U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 2U))) : (
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 2U)))) 
                    << 2U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3f7U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (8U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 3U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 3U))) : (
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 3U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 3U)))) 
                    << 3U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3efU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x10U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 4U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 4U))) : 
                        (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 4U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 4U)))) << 4U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3dfU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x20U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 5U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 5U))) : 
                        (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 5U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 5U)))) << 5U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3bfU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x40U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 6U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 6U))) : 
                        (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 6U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 6U)))) << 6U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x37fU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x80U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 7U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 7U))) : 
                        (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 7U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 7U)))) << 7U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x2ffU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x100U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 8U)))
                          : (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 8U)))) 
                        << 8U)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x1ffU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x200U & (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 9U)))
                          : (((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 9U)))) 
                        << 9U)));
    if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
            = (1U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
    } else {
        if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                = (2U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
        } else {
            if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                    = (4U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
            } else {
                if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                        = (8U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                } else {
                    if ((0x10U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                            = (0x10U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                    } else {
                        if ((0x20U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                = (0x20U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                        } else {
                            if ((0x40U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                    = (0x40U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                            } else {
                                if ((0x80U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                        = (0x80U | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                            = (0x100U 
                                               | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req))) {
                                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                                = (0x200U 
                                                   | (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer));
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
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__round_end 
        = ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req)) 
           & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
           | (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)));
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
           | (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)));
}

VL_INLINE_OPT void Vpixel_fifo_top::_sequent__TOP__4(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_sequent__TOP__4\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uni1_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 1U;
    }
    vlTOPp->uni2_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 1U;
    }
    vlTOPp->sc_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 1U;
    }
    vlTOPp->st_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 1U;
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 2U;
    }
    vlTOPp->BRAM7_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    vlTOPp->BRAM7_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x7fU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_front))));
    }
    vlTOPp->ch1_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 1U;
    }
    vlTOPp->ch2_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 1U;
    }
    vlTOPp->ch3_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 1U;
    }
    vlTOPp->ch4_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 1U;
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 4U;
    }
    vlTOPp->BRAM8_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    vlTOPp->BRAM8_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x7fU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_front))));
    }
    vlTOPp->bg1_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 1U;
    }
    vlTOPp->bg2_decomp_r_master = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Decompressed_FIFO_r_master;
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 1U;
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 2U;
    }
    vlTOPp->BRAM9_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    vlTOPp->BRAM9_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0xffU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0xffU 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_front))));
    }
}

VL_INLINE_OPT void Vpixel_fifo_top::_combo__TOP__5(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_combo__TOP__5\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pixel_fifo_top__DOT__bg2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
                vlTOPp->pixel_fifo_top__DOT__bg2_comp_data 
                    = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__bg1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            vlTOPp->pixel_fifo_top__DOT__bg1_comp_data 
                = vlTOPp->BRAM9_dout_b;
        }
    }
    vlTOPp->pixel_fifo_top__DOT__uni2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                vlTOPp->pixel_fifo_top__DOT__uni2_comp_data 
                    = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__uni1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            vlTOPp->pixel_fifo_top__DOT__uni1_comp_data 
                = vlTOPp->BRAM7_dout_b;
        }
    }
    vlTOPp->pixel_fifo_top__DOT__st_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                        vlTOPp->pixel_fifo_top__DOT__st_comp_data 
                            = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__sc_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    vlTOPp->pixel_fifo_top__DOT__sc_comp_data 
                        = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__ch4_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                        vlTOPp->pixel_fifo_top__DOT__ch4_comp_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__ch3_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    vlTOPp->pixel_fifo_top__DOT__ch3_comp_data 
                        = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__ch2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                vlTOPp->pixel_fifo_top__DOT__ch2_comp_data 
                    = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__ch1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            vlTOPp->pixel_fifo_top__DOT__ch1_comp_data 
                = vlTOPp->BRAM8_dout_b;
        }
    }
    vlTOPp->BRAM9_we_a = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_en_a = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = 1U;
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
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = 1U;
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
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = 1U;
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
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = 1U;
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
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_en_a = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_we_a = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_en_a = 0U;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
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
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
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
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_addr_a = 
                                (0xffU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg)));
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
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear))));
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
    if ((0U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_addr_a = 
                                (0x7fU & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->uni1_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.Decompressed_FIFO_data;
    vlTOPp->uni2_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.Decompressed_FIFO_data;
    vlTOPp->sc_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.Decompressed_FIFO_data;
    vlTOPp->st_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.Decompressed_FIFO_data;
    vlTOPp->BRAM10_en_b = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.BRAM10_en_b) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.BRAM10_en_b)) 
                            | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.BRAM10_en_b)) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.BRAM10_en_b));
    vlTOPp->BRAM10_addr_b = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.BRAM10_addr_b) 
                               | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.BRAM10_addr_b)) 
                              | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.BRAM10_addr_b)) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.BRAM10_addr_b));
    vlTOPp->BRAM10_en_a = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.BRAM10_en_a) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.BRAM10_en_a)) 
                            | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.BRAM10_en_a)) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.BRAM10_en_a));
    vlTOPp->BRAM10_we_a = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.BRAM10_we_a) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.BRAM10_we_a)) 
                            | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.BRAM10_we_a)) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.BRAM10_we_a));
    vlTOPp->BRAM10_addr_a = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.BRAM10_addr_a) 
                               | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.BRAM10_addr_a)) 
                              | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.BRAM10_addr_a)) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.BRAM10_addr_a));
    vlTOPp->BRAM10_din_a = (((vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1.BRAM10_din_a 
                              | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2.BRAM10_din_a) 
                             | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script.BRAM10_din_a) 
                            | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status.BRAM10_din_a);
    vlTOPp->ch1_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.Decompressed_FIFO_data;
    vlTOPp->ch2_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.Decompressed_FIFO_data;
    vlTOPp->ch3_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.Decompressed_FIFO_data;
    vlTOPp->ch4_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.Decompressed_FIFO_data;
    vlTOPp->BRAM11_en_b = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.BRAM11_en_b) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.BRAM11_en_b)) 
                            | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.BRAM11_en_b)) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.BRAM11_en_b));
    vlTOPp->BRAM11_addr_b = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.BRAM11_addr_b) 
                               | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.BRAM11_addr_b)) 
                              | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.BRAM11_addr_b)) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.BRAM11_addr_b));
    vlTOPp->BRAM11_en_a = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.BRAM11_en_a) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.BRAM11_en_a)) 
                            | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.BRAM11_en_a)) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.BRAM11_en_a));
    vlTOPp->BRAM11_we_a = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.BRAM11_we_a) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.BRAM11_we_a)) 
                            | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.BRAM11_we_a)) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.BRAM11_we_a));
    vlTOPp->BRAM11_addr_a = ((((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.BRAM11_addr_a) 
                               | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.BRAM11_addr_a)) 
                              | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.BRAM11_addr_a)) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.BRAM11_addr_a));
    vlTOPp->BRAM11_din_a = (((vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1.BRAM11_din_a 
                              | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2.BRAM11_din_a) 
                             | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3.BRAM11_din_a) 
                            | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4.BRAM11_din_a);
    vlTOPp->bg1_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.Decompressed_FIFO_data;
    vlTOPp->bg2_decomp_data = vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.Decompressed_FIFO_data;
    vlTOPp->BRAM12_en_b = ((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.BRAM12_en_b) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.BRAM12_en_b));
    vlTOPp->BRAM12_addr_b = ((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.BRAM12_addr_b) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.BRAM12_addr_b));
    vlTOPp->BRAM12_en_a = ((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.BRAM12_en_a) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.BRAM12_en_a));
    vlTOPp->BRAM12_we_a = ((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.BRAM12_we_a) 
                           | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.BRAM12_we_a));
    vlTOPp->BRAM12_addr_a = ((IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.BRAM12_addr_a) 
                             | (IData)(vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.BRAM12_addr_a));
    vlTOPp->BRAM12_din_a = (vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1.BRAM12_din_a 
                            | vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2.BRAM12_din_a);
}

void Vpixel_fifo_top::_eval(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_eval\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->resetn)) & (IData)(vlTOPp->__Vclklast__TOP__resetn)))) {
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1._sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__29(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2._sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__29(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__31(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2._sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni2__32(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script._sequent__TOP__pixel_fifo_top__DOT__u_decomp_script__33(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status._sequent__TOP__pixel_fifo_top__DOT__u_decomp_status__34(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1._sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch1__35(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2._sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch2__36(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3._sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch3__37(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4._sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch4__38(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1._sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__39(vlSymsp);
        vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2._sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg2__40(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1._combo__TOP__pixel_fifo_top__DOT__u_decomp_uni1__41(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2._combo__TOP__pixel_fifo_top__DOT__u_decomp_uni2__42(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script._combo__TOP__pixel_fifo_top__DOT__u_decomp_script__43(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status._combo__TOP__pixel_fifo_top__DOT__u_decomp_status__44(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1._combo__TOP__pixel_fifo_top__DOT__u_decomp_ch1__45(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2._combo__TOP__pixel_fifo_top__DOT__u_decomp_ch2__46(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3._combo__TOP__pixel_fifo_top__DOT__u_decomp_ch3__47(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4._combo__TOP__pixel_fifo_top__DOT__u_decomp_ch4__48(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1._combo__TOP__pixel_fifo_top__DOT__u_decomp_bg1__49(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2._combo__TOP__pixel_fifo_top__DOT__u_decomp_bg2__50(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg2._combo__TOP__pixel_fifo_top__DOT__u_decomp_bg2__51(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_bg1._combo__TOP__pixel_fifo_top__DOT__u_decomp_bg1__52(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni2._settle__TOP__pixel_fifo_top__DOT__u_decomp_uni2__11(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_uni1._settle__TOP__pixel_fifo_top__DOT__u_decomp_uni1__12(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_status._settle__TOP__pixel_fifo_top__DOT__u_decomp_status__13(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_script._settle__TOP__pixel_fifo_top__DOT__u_decomp_script__14(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch4._settle__TOP__pixel_fifo_top__DOT__u_decomp_ch4__15(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch3._settle__TOP__pixel_fifo_top__DOT__u_decomp_ch3__16(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch2._settle__TOP__pixel_fifo_top__DOT__u_decomp_ch2__17(vlSymsp);
    vlSymsp->TOP__pixel_fifo_top__DOT__u_decomp_ch1._settle__TOP__pixel_fifo_top__DOT__u_decomp_ch1__18(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__resetn = vlTOPp->resetn;
}

VL_INLINE_OPT QData Vpixel_fifo_top::_change_request(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_change_request\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vpixel_fifo_top::_change_request_1(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_change_request_1\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpixel_fifo_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpixel_fifo_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((PPU_start & 0xfeU))) {
        Verilated::overWidthError("PPU_start");}
    if (VL_UNLIKELY((EMEM_ready & 0xfeU))) {
        Verilated::overWidthError("EMEM_ready");}
    if (VL_UNLIKELY((uni1_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("uni1_decomp_ena");}
    if (VL_UNLIKELY((uni1_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("uni1_decomp_dequeue");}
    if (VL_UNLIKELY((uni2_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("uni2_decomp_ena");}
    if (VL_UNLIKELY((uni2_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("uni2_decomp_dequeue");}
    if (VL_UNLIKELY((sc_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("sc_decomp_ena");}
    if (VL_UNLIKELY((sc_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("sc_decomp_dequeue");}
    if (VL_UNLIKELY((st_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("st_decomp_ena");}
    if (VL_UNLIKELY((st_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("st_decomp_dequeue");}
    if (VL_UNLIKELY((ch1_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("ch1_decomp_ena");}
    if (VL_UNLIKELY((ch1_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("ch1_decomp_dequeue");}
    if (VL_UNLIKELY((ch2_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("ch2_decomp_ena");}
    if (VL_UNLIKELY((ch2_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("ch2_decomp_dequeue");}
    if (VL_UNLIKELY((ch3_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("ch3_decomp_ena");}
    if (VL_UNLIKELY((ch3_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("ch3_decomp_dequeue");}
    if (VL_UNLIKELY((ch4_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("ch4_decomp_ena");}
    if (VL_UNLIKELY((ch4_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("ch4_decomp_dequeue");}
    if (VL_UNLIKELY((bg1_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("bg1_decomp_ena");}
    if (VL_UNLIKELY((bg1_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("bg1_decomp_dequeue");}
    if (VL_UNLIKELY((bg2_decomp_ena & 0xfeU))) {
        Verilated::overWidthError("bg2_decomp_ena");}
    if (VL_UNLIKELY((bg2_decomp_dequeue & 0xfeU))) {
        Verilated::overWidthError("bg2_decomp_dequeue");}
}
#endif  // VL_DEBUG
