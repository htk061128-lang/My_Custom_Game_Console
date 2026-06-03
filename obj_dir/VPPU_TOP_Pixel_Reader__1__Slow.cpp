// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPPU_TOP.h for the primary calling header

#include "VPPU_TOP_Pixel_Reader.h"
#include "VPPU_TOP__Syms.h"

void VPPU_TOP_Pixel_Reader::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    Clk_Counter = VL_RAND_RESET_I(2);
    PPU_start = VL_RAND_RESET_I(1);
    is_background = VL_RAND_RESET_I(1);
    is_character = VL_RAND_RESET_I(1);
    is_status = VL_RAND_RESET_I(1);
    is_script = VL_RAND_RESET_I(1);
    is_universal = VL_RAND_RESET_I(1);
    WX = VL_RAND_RESET_I(16);
    WY = VL_RAND_RESET_I(16);
    SCX = VL_RAND_RESET_I(16);
    SCY = VL_RAND_RESET_I(16);
    Pixel_valid = VL_RAND_RESET_I(1);
    Pixel_RGB = VL_RAND_RESET_I(18);
    Pixel_is_trans = VL_RAND_RESET_I(1);
    Pixel_ready = VL_RAND_RESET_I(1);
    Decomp_fifo_r_master = VL_RAND_RESET_I(1);
    Decomp_fifo_empty = VL_RAND_RESET_I(1);
    Decomp_fifo_data = VL_RAND_RESET_Q(64);
    Decomp_fifo_dequeue = VL_RAND_RESET_I(1);
    Lookup_ena = VL_RAND_RESET_I(1);
    Lookup_pixel = VL_RAND_RESET_I(8);
    Lookup_end = VL_RAND_RESET_I(1);
    Lookup_RGB = VL_RAND_RESET_I(18);
    Lookup_trans = VL_RAND_RESET_I(1);
    __PVT__decomp_pixel_reg = VL_RAND_RESET_Q(64);
    __PVT__RGB_reg = VL_RAND_RESET_I(18);
    __PVT__RGB_reg_trans = VL_RAND_RESET_I(1);
    __PVT__RGB_reg_w_ena = VL_RAND_RESET_I(1);
    __PVT__RGB_reg_valid = VL_RAND_RESET_I(1);
    __PVT__RGB_reg_ready = VL_RAND_RESET_I(1);
    __PVT__personal_counter_x = VL_RAND_RESET_I(9);
    __PVT__personal_counter_y = VL_RAND_RESET_I(9);
    __PVT__main_state = VL_RAND_RESET_I(4);
    __PVT__main_state_next = VL_RAND_RESET_I(4);
    __PVT__main_state_counter = VL_RAND_RESET_I(4);
    __PVT__main_state_counter_next = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state_next = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state_counter = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state_counter_next = VL_RAND_RESET_I(4);
    __PVT__valid_pixel_check = VL_RAND_RESET_I(8);
    __PVT__read_pixel_x = VL_RAND_RESET_I(6);
    __PVT__read_pixel_y = VL_RAND_RESET_I(9);
    __PVT__rgb_r_state = VL_RAND_RESET_I(4);
    __PVT__rgb_r_state_next = VL_RAND_RESET_I(4);
    __PVT__rgb_r_state_counter = VL_RAND_RESET_I(4);
    __PVT__rgb_r_state_counter_next = VL_RAND_RESET_I(4);
    __PVT__rgb_convert_req = VL_RAND_RESET_I(1);
    __PVT__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vdly__main_state_counter = VL_RAND_RESET_I(4);
    __Vdly__main_state = VL_RAND_RESET_I(4);
    __Vdly__personal_counter_x = VL_RAND_RESET_I(9);
    __Vdly__personal_counter_y = VL_RAND_RESET_I(9);
    __Vdly__fifo_r_state = VL_RAND_RESET_I(4);
    __Vdly__fifo_r_state_counter = VL_RAND_RESET_I(4);
    __Vdly__rgb_r_state = VL_RAND_RESET_I(4);
    __Vdly__read_pixel_x = VL_RAND_RESET_I(6);
    __Vdly__read_pixel_y = VL_RAND_RESET_I(9);
}
