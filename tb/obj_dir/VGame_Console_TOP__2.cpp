// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGame_Console_TOP.h for the primary calling header

#include "VGame_Console_TOP.h"
#include "VGame_Console_TOP__Syms.h"

#ifdef VL_DEBUG
void VGame_Console_TOP::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((DDR3_CPU_ready & 0xfeU))) {
        Verilated::overWidthError("DDR3_CPU_ready");}
    if (VL_UNLIKELY((DDR3_PPU_ready & 0xfeU))) {
        Verilated::overWidthError("DDR3_PPU_ready");}
    if (VL_UNLIKELY((BRAM0_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM0_dout");}
    if (VL_UNLIKELY((BRAM1_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM1_dout");}
    if (VL_UNLIKELY((BRAM2_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM2_dout");}
    if (VL_UNLIKELY((BRAM3_dout[2U] & 0xffffff00U))) {
        Verilated::overWidthError("BRAM3_dout");}
    if (VL_UNLIKELY((LUT_data_out1 & 0xfffc0000U))) {
        Verilated::overWidthError("LUT_data_out1");}
    if (VL_UNLIKELY((LUT_data_out2 & 0xfffc0000U))) {
        Verilated::overWidthError("LUT_data_out2");}
}
#endif  // VL_DEBUG
