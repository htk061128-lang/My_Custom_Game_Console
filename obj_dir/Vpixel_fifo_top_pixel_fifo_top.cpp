// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_fifo_top.h for the primary calling header

#include "Vpixel_fifo_top_pixel_fifo_top.h"
#include "Vpixel_fifo_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vpixel_fifo_top_pixel_fifo_top::_sequent__TOP__pixel_fifo_top__3(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpixel_fifo_top_pixel_fifo_top::_sequent__TOP__pixel_fifo_top__3\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char1_fifo_count;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char3_fifo_count;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char4_fifo_count;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__script_fifo_count;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__uni1_fifo_count;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__uni2_fifo_count;
    CData/*3:0*/ __Vdly__u_compressed_fifo__DOT__main_state;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__uni1_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__uni2_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__script_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__status_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char1_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char2_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char3_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__char4_fifo_rear;
    CData/*7:0*/ __Vdly__u_compressed_fifo__DOT__emem_r_counter;
    SData/*8:0*/ __Vdly__u_compressed_fifo__DOT__back1_fifo_count;
    SData/*8:0*/ __Vdly__u_compressed_fifo__DOT__back2_fifo_count;
    SData/*8:0*/ __Vdly__u_compressed_fifo__DOT__back1_fifo_rear;
    SData/*8:0*/ __Vdly__u_compressed_fifo__DOT__back2_fifo_rear;
    SData/*9:0*/ __Vdly__u_compressed_fifo__DOT__should_read_layer;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__uni1_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__uni2_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__status_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__script_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__char1_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__char2_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__char3_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__char4_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__back1_next_ad;
    IData/*31:0*/ __Vdly__u_compressed_fifo__DOT__back2_next_ad;
    // Body
    __Vdly__u_compressed_fifo__DOT__back2_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_next_ad;
    __Vdly__u_compressed_fifo__DOT__back1_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_next_ad;
    __Vdly__u_compressed_fifo__DOT__char4_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_next_ad;
    __Vdly__u_compressed_fifo__DOT__char3_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_next_ad;
    __Vdly__u_compressed_fifo__DOT__char2_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_next_ad;
    __Vdly__u_compressed_fifo__DOT__char1_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_next_ad;
    __Vdly__u_compressed_fifo__DOT__script_next_ad 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_next_ad;
    __Vdly__u_compressed_fifo__DOT__status_next_ad 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_next_ad;
    __Vdly__u_compressed_fifo__DOT__uni2_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_next_ad;
    __Vdly__u_compressed_fifo__DOT__uni1_next_ad = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_next_ad;
    __Vdly__u_compressed_fifo__DOT__back2_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__back1_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__char4_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__char3_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__char2_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__char1_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__status_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__script_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__uni2_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__uni1_fifo_rear 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_rear;
    __Vdly__u_compressed_fifo__DOT__back2_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count;
    __Vdly__u_compressed_fifo__DOT__back1_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count;
    __Vdly__u_compressed_fifo__DOT__uni2_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count;
    __Vdly__u_compressed_fifo__DOT__uni1_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count;
    __Vdly__u_compressed_fifo__DOT__script_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count;
    __Vdly__u_compressed_fifo__DOT__char4_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count;
    __Vdly__u_compressed_fifo__DOT__char3_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count;
    __Vdly__u_compressed_fifo__DOT__char1_fifo_count 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count;
    __Vdly__u_compressed_fifo__DOT__emem_r_counter 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter;
    __Vdly__u_compressed_fifo__DOT__should_read_layer 
        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer;
    __Vdly__u_compressed_fifo__DOT__main_state = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state;
    if (vlTOPp->resetn) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state 
            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state 
            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state 
            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next;
    } else {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode) 
             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__round_end))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent = 0U;
        }
        if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)) 
             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__round_end))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic = 0U;
        }
        if ((((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want) 
                    & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want))) 
                   | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want)) 
                      & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want))) 
                  | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want) 
                     & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want)))) 
                 | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want)) 
                    & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want))) 
                | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want) 
                   & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want)))) 
               | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want)) 
                  & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want))) 
              | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want) 
                 & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want)))) 
             | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want)) 
                & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want)))) {
            if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want) 
                 & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want)))) {
                __Vdly__u_compressed_fifo__DOT__back1_fifo_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count)));
            } else {
                if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want)) 
                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want))) {
                    __Vdly__u_compressed_fifo__DOT__back1_fifo_count 
                        = (0x1ffU & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count) 
                                     - (IData)(1U)));
                } else {
                    if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want) 
                         & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want)))) {
                        __Vdly__u_compressed_fifo__DOT__back2_fifo_count 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count)));
                    } else {
                        if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want)) 
                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want))) {
                            __Vdly__u_compressed_fifo__DOT__back2_fifo_count 
                                = (0x1ffU & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count) 
                                             - (IData)(1U)));
                        } else {
                            if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want) 
                                 & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want)))) {
                                __Vdly__u_compressed_fifo__DOT__char1_fifo_count 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count)));
                            } else {
                                if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want)) 
                                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want))) {
                                    __Vdly__u_compressed_fifo__DOT__char1_fifo_count 
                                        = (0xffU & 
                                           ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count) 
                                            - (IData)(1U)));
                                } else {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count 
                                        = (0xffU & 
                                           (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want) 
                                             & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))
                                             : ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count) 
                                                - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want) 
                        & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want))) 
                       | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want)) 
                          & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want))) 
                      | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want) 
                         & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want)))) 
                     | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want)) 
                        & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want))) 
                    | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want) 
                       & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want)))) 
                   | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want)) 
                      & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want))) 
                  | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want) 
                     & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want)))) 
                 | ((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want)) 
                    & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want)))) {
                if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want) 
                     & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want)))) {
                    __Vdly__u_compressed_fifo__DOT__char3_fifo_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count)));
                } else {
                    if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want)) 
                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want))) {
                        __Vdly__u_compressed_fifo__DOT__char3_fifo_count 
                            = (0xffU & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count) 
                                        - (IData)(1U)));
                    } else {
                        if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want) 
                             & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want)))) {
                            __Vdly__u_compressed_fifo__DOT__char4_fifo_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count)));
                        } else {
                            if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want)) 
                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want))) {
                                __Vdly__u_compressed_fifo__DOT__char4_fifo_count 
                                    = (0xffU & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count) 
                                                - (IData)(1U)));
                            } else {
                                if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want) 
                                     & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want)))) {
                                    __Vdly__u_compressed_fifo__DOT__script_fifo_count 
                                        = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count)));
                                } else {
                                    if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want)) 
                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want))) {
                                        __Vdly__u_compressed_fifo__DOT__script_fifo_count 
                                            = (0xffU 
                                               & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count) 
                                                  - (IData)(1U)));
                                    } else {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count 
                                            = (0xffU 
                                               & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want) 
                                                   & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count) 
                                                   - (IData)(1U))));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want) 
                     & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want)))) {
                    __Vdly__u_compressed_fifo__DOT__uni1_fifo_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count)));
                } else {
                    if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want)) 
                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want))) {
                        __Vdly__u_compressed_fifo__DOT__uni1_fifo_count 
                            = (0xffU & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count) 
                                        - (IData)(1U)));
                    } else {
                        if (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want) 
                             & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want)))) {
                            __Vdly__u_compressed_fifo__DOT__uni2_fifo_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count)));
                        } else {
                            if (((~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want)) 
                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want))) {
                                __Vdly__u_compressed_fifo__DOT__uni2_fifo_count 
                                    = (0xffU & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count) 
                                                - (IData)(1U)));
                            }
                        }
                    }
                }
            }
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_front)));
        }
        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_front)));
        }
        if ((0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if (vlTOPp->PPU_start) {
                __Vdly__u_compressed_fifo__DOT__main_state = 1U;
                __Vdly__u_compressed_fifo__DOT__uni1_next_ad 
                    = vlTOPp->Universal_Layer1_Address;
                __Vdly__u_compressed_fifo__DOT__uni2_next_ad 
                    = vlTOPp->Universal_Layer2_Address;
                __Vdly__u_compressed_fifo__DOT__status_next_ad 
                    = vlTOPp->Status_Layer_Address;
                __Vdly__u_compressed_fifo__DOT__script_next_ad 
                    = vlTOPp->Script_Layer_Address;
                __Vdly__u_compressed_fifo__DOT__char1_next_ad 
                    = vlTOPp->Character_Layer1_Address;
                __Vdly__u_compressed_fifo__DOT__char2_next_ad 
                    = vlTOPp->Character_Layer2_Address;
                __Vdly__u_compressed_fifo__DOT__char3_next_ad 
                    = vlTOPp->Character_Layer3_Address;
                __Vdly__u_compressed_fifo__DOT__char4_next_ad 
                    = vlTOPp->Character_Layer4_Address;
                __Vdly__u_compressed_fifo__DOT__back1_next_ad 
                    = vlTOPp->Background_Layer1_Address;
                __Vdly__u_compressed_fifo__DOT__back2_next_ad 
                    = vlTOPp->Background_Layer2_Address;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__uni1_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__uni1_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__uni2_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__uni2_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__script_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__script_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__status_fifo_rear = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__char1_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__char1_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__char2_fifo_rear = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__char3_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__char3_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__char4_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__char4_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__back1_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__back1_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_front = 0U;
                __Vdly__u_compressed_fifo__DOT__back2_fifo_rear = 0U;
                __Vdly__u_compressed_fifo__DOT__back2_fifo_count = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent = 0U;
                __Vdly__u_compressed_fifo__DOT__should_read_layer = 0U;
                __Vdly__u_compressed_fifo__DOT__emem_r_counter = 0U;
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg = 0U;
            } else {
                __Vdly__u_compressed_fifo__DOT__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                    if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode) {
                        if (vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode) {
                            __Vdly__u_compressed_fifo__DOT__main_state = 2U;
                            __Vdly__u_compressed_fifo__DOT__should_read_layer 
                                = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer;
                            __Vdly__u_compressed_fifo__DOT__emem_r_counter = 0U;
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg = 0U;
                            if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                             | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                >> 1U)) 
                                            | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                               >> 2U)) 
                                           | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                              >> 3U)) 
                                          | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                             >> 4U)) 
                                         | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                            >> 5U)) 
                                        | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                           >> 6U)) 
                                       | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                          >> 7U)))) {
                                if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                        = (1U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_next_ad;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                            = (2U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_next_ad;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                    } else {
                                        if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                                = (4U 
                                                   | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_next_ad;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                                    = 
                                                    (8U 
                                                     | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                    = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_next_ad;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                                        = 
                                                        (0x10U 
                                                         | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_next_ad;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                                            = 
                                                            (0x20U 
                                                             | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_next_ad;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                    } else {
                                                        if (
                                                            (0x40U 
                                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                                                = 
                                                                (0x40U 
                                                                 | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                                = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_next_ad;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                        } else {
                                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                                                = 
                                                                (0x80U 
                                                                 | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                                = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_next_ad;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                        = (0x100U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_next_ad;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent 
                                            = (0x200U 
                                               | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent));
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_next_ad;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                    }
                                }
                            }
                        }
                    } else {
                        __Vdly__u_compressed_fifo__DOT__main_state = 2U;
                        __Vdly__u_compressed_fifo__DOT__should_read_layer 
                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer;
                        __Vdly__u_compressed_fifo__DOT__emem_r_counter = 0U;
                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg = 0U;
                        if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                         | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                            >> 1U)) 
                                        | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                           >> 2U)) 
                                       | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                          >> 3U)) | 
                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                       >> 4U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                  >> 5U)) 
                                    | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                       >> 6U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                  >> 7U)))) {
                            if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                    = (1U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                    = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_next_ad;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                            } else {
                                if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                        = (2U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_next_ad;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                } else {
                                    if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                            = (4U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_next_ad;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                    } else {
                                        if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                                = (8U 
                                                   | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_next_ad;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                                    = 
                                                    (0x10U 
                                                     | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                    = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_next_ad;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                                        = 
                                                        (0x20U 
                                                         | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_next_ad;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x40U 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                                            = 
                                                            (0x40U 
                                                             | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_next_ad;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                    } else {
                                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                                            = 
                                                            (0x80U 
                                                             | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                                            = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_next_ad;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                                        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                    = (0x100U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                    = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_next_ad;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                            } else {
                                if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic 
                                        = (0x200U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic));
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_addr 
                                        = vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_next_ad;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 1U;
                                    vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0x1fU;
                                }
                            }
                        }
                    }
                } else {
                    if ((0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer))) {
                        if (vlTOPp->PPU_start) {
                            __Vdly__u_compressed_fifo__DOT__main_state = 1U;
                        } else {
                            if ((1U & (~ (IData)(vlTOPp->PPU_start)))) {
                                __Vdly__u_compressed_fifo__DOT__main_state = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                    if (vlTOPp->EMEM_ready) {
                        if ((0x1fU == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                            __Vdly__u_compressed_fifo__DOT__main_state = 1U;
                            __Vdly__u_compressed_fifo__DOT__emem_r_counter = 0U;
                            vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 0U;
                            vlSymsp->TOP__pixel_fifo_top.EMEM_addr = 0U;
                            vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0U;
                            vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 0U;
                            vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0U;
                        } else {
                            __Vdly__u_compressed_fifo__DOT__emem_r_counter 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter)));
                            __Vdly__u_compressed_fifo__DOT__main_state = 2U;
                        }
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                            if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                                if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 1U)) 
                                                | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)) 
                                              | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                             | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                >> 5U)) 
                                            | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                                           | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 7U)))) {
                                    if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        __Vdly__u_compressed_fifo__DOT__back1_next_ad 
                                            = ((IData)(8U) 
                                               + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_next_ad);
                                        __Vdly__u_compressed_fifo__DOT__back1_fifo_rear 
                                            = (0x1ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_rear)));
                                    } else {
                                        if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            __Vdly__u_compressed_fifo__DOT__back2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_next_ad);
                                            __Vdly__u_compressed_fifo__DOT__back2_fifo_rear 
                                                = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_rear)));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                __Vdly__u_compressed_fifo__DOT__char1_next_ad 
                                                    = 
                                                    ((IData)(8U) 
                                                     + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_next_ad);
                                                __Vdly__u_compressed_fifo__DOT__char1_fifo_rear 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_rear)));
                                            } else {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    __Vdly__u_compressed_fifo__DOT__char2_next_ad 
                                                        = 
                                                        ((IData)(8U) 
                                                         + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_next_ad);
                                                    __Vdly__u_compressed_fifo__DOT__char2_fifo_rear 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_rear)));
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                        __Vdly__u_compressed_fifo__DOT__char3_next_ad 
                                                            = 
                                                            ((IData)(8U) 
                                                             + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_next_ad);
                                                        __Vdly__u_compressed_fifo__DOT__char3_fifo_rear 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_rear)));
                                                    } else {
                                                        if (
                                                            (0x20U 
                                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                            __Vdly__u_compressed_fifo__DOT__char4_next_ad 
                                                                = 
                                                                ((IData)(8U) 
                                                                 + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_next_ad);
                                                            __Vdly__u_compressed_fifo__DOT__char4_fifo_rear 
                                                                = 
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_rear)));
                                                        } else {
                                                            if (
                                                                (0x40U 
                                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                                __Vdly__u_compressed_fifo__DOT__script_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_next_ad);
                                                                __Vdly__u_compressed_fifo__DOT__script_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_rear)));
                                                            } else {
                                                                __Vdly__u_compressed_fifo__DOT__status_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_next_ad);
                                                                __Vdly__u_compressed_fifo__DOT__status_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_rear)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        __Vdly__u_compressed_fifo__DOT__uni1_next_ad 
                                            = ((IData)(8U) 
                                               + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_next_ad);
                                        __Vdly__u_compressed_fifo__DOT__uni1_fifo_rear 
                                            = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_rear)));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            __Vdly__u_compressed_fifo__DOT__uni2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_next_ad);
                                            __Vdly__u_compressed_fifo__DOT__uni2_fifo_rear 
                                                = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_rear)));
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg 
                                = vlTOPp->EMEM_rdata;
                        }
                    } else {
                        __Vdly__u_compressed_fifo__DOT__main_state = 2U;
                    }
                }
            }
        }
    } else {
        __Vdly__u_compressed_fifo__DOT__main_state = 0U;
        __Vdly__u_compressed_fifo__DOT__uni1_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__uni2_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__status_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__script_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__char1_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__char2_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__char3_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__char4_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__back1_next_ad = 0U;
        __Vdly__u_compressed_fifo__DOT__back2_next_ad = 0U;
        vlSymsp->TOP__pixel_fifo_top.EMEM_valid = 0U;
        vlSymsp->TOP__pixel_fifo_top.EMEM_addr = 0U;
        vlSymsp->TOP__pixel_fifo_top.EMEM_wdata = 0U;
        vlSymsp->TOP__pixel_fifo_top.EMEM_wstrb = 0xfU;
        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_en = 0U;
        vlSymsp->TOP__pixel_fifo_top.EMEM_burst_len = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__uni1_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__uni1_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__uni2_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__uni2_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__script_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__script_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__status_fifo_rear = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__char1_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__char1_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__char2_fifo_rear = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__char3_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__char3_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__char4_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__char4_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__back1_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__back1_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_front = 0U;
        __Vdly__u_compressed_fifo__DOT__back2_fifo_rear = 0U;
        __Vdly__u_compressed_fifo__DOT__back2_fifo_count = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent = 0U;
        __Vdly__u_compressed_fifo__DOT__should_read_layer = 0U;
        __Vdly__u_compressed_fifo__DOT__emem_r_counter = 0U;
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg = 0U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter 
        = ((IData)(vlTOPp->resetn) ? (3U & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))
            : 0U);
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_next_ad 
        = __Vdly__u_compressed_fifo__DOT__uni1_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_next_ad 
        = __Vdly__u_compressed_fifo__DOT__uni2_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_next_ad 
        = __Vdly__u_compressed_fifo__DOT__status_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_next_ad 
        = __Vdly__u_compressed_fifo__DOT__script_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_next_ad 
        = __Vdly__u_compressed_fifo__DOT__char1_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_next_ad 
        = __Vdly__u_compressed_fifo__DOT__char2_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_next_ad 
        = __Vdly__u_compressed_fifo__DOT__char3_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_next_ad 
        = __Vdly__u_compressed_fifo__DOT__char4_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_next_ad 
        = __Vdly__u_compressed_fifo__DOT__back1_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_next_ad 
        = __Vdly__u_compressed_fifo__DOT__back2_next_ad;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__back1_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__back2_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__uni1_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__uni2_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__script_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__status_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__char1_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__char2_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__char3_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_rear 
        = __Vdly__u_compressed_fifo__DOT__char4_fifo_rear;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__back1_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__back2_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__char1_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__char3_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__char4_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__script_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__uni1_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count 
        = __Vdly__u_compressed_fifo__DOT__uni2_fifo_count;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state 
        = __Vdly__u_compressed_fifo__DOT__main_state;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer 
        = __Vdly__u_compressed_fifo__DOT__should_read_layer;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter 
        = __Vdly__u_compressed_fifo__DOT__emem_r_counter;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer = 0U;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req 
        = ((((0x40U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count)) 
             & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_ena)) 
            << 9U) | ((((0x40U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count)) 
                        & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_ena)) 
                       << 8U) | ((((0x20U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_ena)) 
                                  << 7U) | ((((0x20U 
                                               >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                              & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_ena)) 
                                             << 6U) 
                                            | ((((0x20U 
                                                  >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_ena)) 
                                                << 5U) 
                                               | ((((0x20U 
                                                     >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                                    & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_ena)) 
                                                   << 4U) 
                                                  | ((((0x20U 
                                                        >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count)) 
                                                       & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_ena)) 
                                                      << 3U) 
                                                     | ((((0x20U 
                                                           >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count)) 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_ena)) 
                                                         << 2U) 
                                                        | ((((0x20U 
                                                              >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                                                             & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_ena)) 
                                                            << 1U) 
                                                           | ((0x20U 
                                                               >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count)) 
                                                              & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_ena)))))))))));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode 
        = (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3feU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | ((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_ena) 
              & (0xf0U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fdU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_ena) 
               & (0xf0U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
              << 1U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fbU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
              << 2U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3f7U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
              << 3U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3efU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
              << 4U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3dfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
              << 5U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3bfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
              << 6U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x37fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
              << 7U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x2ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
              << 8U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x1ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
              << 9U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req 
        = ((0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req))
            ? (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)
            : (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3feU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (1U & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                     ? ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent)))
                     : ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic))))));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fdU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (2U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 1U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 1U))) : (
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 1U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 1U)))) 
                    << 1U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fbU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (4U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 2U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 2U))) : (
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 2U)))) 
                    << 2U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3f7U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (8U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 3U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 3U))) : (
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 3U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 3U)))) 
                    << 3U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3efU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x10U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 4U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 4U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 4U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 4U)))) << 4U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3dfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x20U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 5U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 5U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 5U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 5U)))) << 5U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3bfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x40U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 6U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 6U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 6U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 6U)))) << 6U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x37fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x80U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 7U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 7U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 7U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 7U)))) << 7U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x2ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x100U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 8U)))
                          : (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 8U)))) 
                        << 8U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x1ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x200U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 9U)))
                          : (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 9U)))) 
                        << 9U)));
    if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
            = (1U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
    } else {
        if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                = (2U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
        } else {
            if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                    = (4U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
            } else {
                if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                        = (8U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                } else {
                    if ((0x10U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                            = (0x10U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                    } else {
                        if ((0x20U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                = (0x20U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                        } else {
                            if ((0x40U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                    = (0x40U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                            } else {
                                if ((0x80U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                        = (0x80U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                                } else {
                                    if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                            = (0x100U 
                                               | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                                = (0x200U 
                                                   | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__round_end 
        = ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req)) 
           & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)) 
           | (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)) 
           | (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)));
}

VL_INLINE_OPT void Vpixel_fifo_top_pixel_fifo_top::_sequent__TOP__pixel_fifo_top__4(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpixel_fifo_top_pixel_fifo_top::_sequent__TOP__pixel_fifo_top__4\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 2U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x1ffU & ((IData)(0x100U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x1ffU & ((IData)(0x180U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x1ffU & ((IData)(0x80U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_front))));
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 4U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x1ffU & ((IData)(0x80U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x1ffU & ((IData)(0x100U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x1ffU & ((IData)(0x180U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_front))));
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = 2U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_en_b = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_b = 
            (0xffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_b = 
            (0x1ffU & ((IData)(0x100U) + (0xffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_front))));
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_pixel_fifo_top::_combo__TOP__pixel_fifo_top__5(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpixel_fifo_top_pixel_fifo_top::_combo__TOP__pixel_fifo_top__5\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pixel_fifo_top.__PVT__bg2_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__bg2_comp_data 
                    = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__bg1_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__bg1_comp_data 
                = vlTOPp->BRAM9_dout_b;
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__uni2_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__uni2_comp_data 
                    = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__uni1_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__uni1_comp_data 
                = vlTOPp->BRAM7_dout_b;
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__st_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                        vlSymsp->TOP__pixel_fifo_top.__PVT__st_comp_data 
                            = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__sc_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    vlSymsp->TOP__pixel_fifo_top.__PVT__sc_comp_data 
                        = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch4_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                        vlSymsp->TOP__pixel_fifo_top.__PVT__ch4_comp_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch3_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    vlSymsp->TOP__pixel_fifo_top.__PVT__ch3_comp_data 
                        = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch2_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__ch2_comp_data 
                    = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch1_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__ch1_comp_data 
                = vlTOPp->BRAM8_dout_b;
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_we_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_en_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_a 
                                = (0xffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_din_a 
                                = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a 
                                = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
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
    vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_rear))));
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
    vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a 
                                = (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
}
