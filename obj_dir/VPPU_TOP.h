// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPPU_TOP_H_
#define _VPPU_TOP_H_  // guard

#include "verilated.h"

//==========

class VPPU_TOP__Syms;
class VPPU_TOP_VerilatedVcd;
class VPPU_TOP_Pixel_Reader;
class VPPU_TOP_Decompresser;


//----------

VL_MODULE(VPPU_TOP) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_bg1;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_bg2;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_ch1;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_ch2;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_ch3;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_ch4;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_sc;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_st;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_un1;
    VPPU_TOP_Pixel_Reader* __PVT__PPU_TOP__DOT__u_un2;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1;
    VPPU_TOP_Decompresser* __PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(PPU_start,0,0);
    VL_IN8(CPU_LUT_Cache1_pixel,7,0);
    VL_IN8(CPU_LUT_Cache2_pixel,7,0);
    VL_IN8(CPU_LUT_Cache3_pixel,7,0);
    VL_IN8(CPU_LUT_Cache4_pixel,7,0);
    VL_OUT8(EMEM_valid,0,0);
    VL_IN8(EMEM_ready,0,0);
    VL_OUT8(EMEM_wstrb,3,0);
    VL_OUT8(EMEM_burst_len,7,0);
    VL_OUT8(EMEM_burst_en,0,0);
    VL_OUT8(BRAM7_en_a,0,0);
    VL_OUT8(BRAM7_we_a,0,0);
    VL_OUT8(BRAM7_en_b,0,0);
    VL_OUT8(BRAM8_en_a,0,0);
    VL_OUT8(BRAM8_we_a,0,0);
    VL_OUT8(BRAM8_en_b,0,0);
    VL_OUT8(BRAM9_en_a,0,0);
    VL_OUT8(BRAM9_we_a,0,0);
    VL_OUT8(BRAM9_en_b,0,0);
    VL_OUT8(BRAM10_en_a,0,0);
    VL_OUT8(BRAM10_we_a,0,0);
    VL_OUT8(BRAM10_en_b,0,0);
    VL_OUT8(BRAM11_en_a,0,0);
    VL_OUT8(BRAM11_we_a,0,0);
    VL_OUT8(BRAM11_en_b,0,0);
    VL_OUT8(BRAM12_en_a,0,0);
    VL_OUT8(BRAM12_we_a,0,0);
    VL_OUT8(BRAM12_en_b,0,0);
    VL_OUT8(LUT_we,0,0);
    VL_OUT8(LUT_addr_w,7,0);
    VL_OUT8(LUT_addr_r1,7,0);
    VL_OUT8(LUT_addr_r2,7,0);
    VL_IN8(Background1_a,7,0);
    VL_IN8(Background1_z,7,0);
    VL_IN8(Background2_a,7,0);
    VL_IN8(Background2_z,7,0);
    VL_IN8(Character1_a,7,0);
    VL_IN8(Character1_z,7,0);
    VL_IN8(Character2_a,7,0);
    VL_IN8(Character2_z,7,0);
    VL_IN8(Character3_a,7,0);
    VL_IN8(Character3_z,7,0);
    VL_IN8(Character4_a,7,0);
    VL_IN8(Character4_z,7,0);
    VL_IN8(Script_a,7,0);
    VL_IN8(Script_z,7,0);
    VL_IN8(Status_a,7,0);
    VL_IN8(Status_z,7,0);
    VL_IN8(Universal1_a,7,0);
    VL_IN8(Universal1_z,7,0);
    VL_IN8(Universal2_a,7,0);
    VL_IN8(Universal2_z,7,0);
    VL_OUT8(Final_pixel_valid,0,0);
    VL_OUT16(BRAM7_addr_a,8,0);
    VL_OUT16(BRAM7_addr_b,8,0);
    VL_OUT16(BRAM8_addr_a,8,0);
    VL_OUT16(BRAM8_addr_b,8,0);
    VL_OUT16(BRAM9_addr_a,8,0);
    VL_OUT16(BRAM9_addr_b,8,0);
    VL_OUT16(BRAM10_addr_a,8,0);
    VL_OUT16(BRAM10_addr_b,8,0);
    VL_OUT16(BRAM11_addr_a,8,0);
    VL_OUT16(BRAM11_addr_b,8,0);
    VL_OUT16(BRAM12_addr_a,8,0);
    VL_OUT16(BRAM12_addr_b,8,0);
    VL_IN16(Background1_WX,15,0);
    VL_IN16(Background1_WY,15,0);
    VL_IN16(Background1_SCX,15,0);
    VL_IN16(Background1_SCY,15,0);
    VL_IN16(Background2_WX,15,0);
    VL_IN16(Background2_WY,15,0);
    VL_IN16(Background2_SCX,15,0);
    VL_IN16(Background2_SCY,15,0);
    VL_IN16(Character1_WX,15,0);
    VL_IN16(Character1_WY,15,0);
    VL_IN16(Character1_SCX,15,0);
    VL_IN16(Character1_SCY,15,0);
    VL_IN16(Character2_WX,15,0);
    VL_IN16(Character2_WY,15,0);
    VL_IN16(Character2_SCX,15,0);
    VL_IN16(Character2_SCY,15,0);
    VL_IN16(Character3_WX,15,0);
    VL_IN16(Character3_WY,15,0);
    VL_IN16(Character3_SCX,15,0);
    VL_IN16(Character3_SCY,15,0);
    VL_IN16(Character4_WX,15,0);
    VL_IN16(Character4_WY,15,0);
    VL_IN16(Character4_SCX,15,0);
    VL_IN16(Character4_SCY,15,0);
    VL_IN16(Script_WX,15,0);
    VL_IN16(Script_WY,15,0);
    VL_IN16(Script_SCX,15,0);
    VL_IN16(Script_SCY,15,0);
    VL_IN16(Status_WX,15,0);
    VL_IN16(Status_WY,15,0);
    VL_IN16(Status_SCX,15,0);
    VL_IN16(Status_SCY,15,0);
    VL_IN16(Universal1_WX,15,0);
    VL_IN16(Universal1_WY,15,0);
    VL_IN16(Universal1_SCX,15,0);
    VL_IN16(Universal1_SCY,15,0);
    VL_IN16(Universal2_WX,15,0);
    VL_IN16(Universal2_WY,15,0);
    VL_IN16(Universal2_SCX,15,0);
    VL_IN16(Universal2_SCY,15,0);
    VL_IN(Background_Layer1_Address,31,0);
    VL_IN(Background_Layer2_Address,31,0);
    VL_IN(Character_Layer1_Address,31,0);
    VL_IN(Character_Layer2_Address,31,0);
    VL_IN(Character_Layer3_Address,31,0);
    VL_IN(Character_Layer4_Address,31,0);
    VL_IN(Script_Layer_Address,31,0);
    VL_IN(Status_Layer_Address,31,0);
    VL_IN(Universal_Layer1_Address,31,0);
    VL_IN(Universal_Layer2_Address,31,0);
    VL_OUT(EMEM_addr,31,0);
    VL_OUT(EMEM_wdata,31,0);
    VL_IN(EMEM_rdata,31,0);
    VL_OUT(LUT_data_in,17,0);
    VL_IN(LUT_data_out1,17,0);
    VL_IN(LUT_data_out2,17,0);
    VL_OUT(Final_pixel_RGB,17,0);
    VL_OUT64(BRAM7_din_a,63,0);
    VL_IN64(BRAM7_dout_b,63,0);
    VL_OUT64(BRAM8_din_a,63,0);
    VL_IN64(BRAM8_dout_b,63,0);
    VL_OUT64(BRAM9_din_a,63,0);
    VL_IN64(BRAM9_dout_b,63,0);
    VL_OUT64(BRAM10_din_a,63,0);
    VL_IN64(BRAM10_dout_b,63,0);
    VL_OUT64(BRAM11_din_a,63,0);
    VL_IN64(BRAM11_dout_b,63,0);
    VL_OUT64(BRAM12_din_a,63,0);
    VL_IN64(BRAM12_dout_b,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ PPU_TOP__DOT__Clk_Counter;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master;
        CData/*3:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state;
        CData/*2:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state;
        CData/*2:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next;
        CData/*2:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state;
        CData/*2:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next;
        CData/*2:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state;
        CData/*2:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end;
        CData/*0:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode;
        CData/*7:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__cache1_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__cache1_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__cache2_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__cache2_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__cache3_pixel;
    };
    struct {
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__cache3_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__cache4_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__cache4_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_valid;
        CData/*7:0*/ PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_hit;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_hit3;
    };
    struct {
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_hit1;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_hit2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_hit3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_hit4;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_is_zero;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_is_zero;
        CData/*1:0*/ PPU_TOP__DOT__u_rgb__DOT__random_counter_0_3;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1;
        CData/*1:0*/ PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req11_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_rgb__DOT__req12_w_ena;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__is_new_pixel;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_is_trans;
    };
    struct {
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_is_trans;
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_a;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_ready;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipeline_move;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe1_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe1_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe2_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe2_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe3_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe3_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe4_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe4_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe5_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe5_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe6_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe6_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe7_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe7_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe8_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe8_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe9_is_trans;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe9_valid;
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__all_fsm_reset;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_state_next;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_state;
        CData/*1:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_state_next;
        CData/*3:0*/ PPU_TOP__DOT__u_proc__DOT__main_state;
        CData/*3:0*/ PPU_TOP__DOT__u_proc__DOT__main_state_next;
        SData/*8:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count;
        SData/*8:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front;
        SData/*8:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
        SData/*8:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count;
        SData/*8:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front;
        SData/*8:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer;
    };
    struct {
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req;
        SData/*9:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer;
        SData/*11:0*/ PPU_TOP__DOT__u_rgb__DOT__total_req;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe1_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe1_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe1_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe2_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe2_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe2_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe3_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe3_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe3_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe4_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe4_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe4_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe5_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe5_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe5_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe6_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe6_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe6_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe7_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe7_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe7_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe8_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe8_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe8_B;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe9_R;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe9_G;
        SData/*14:0*/ PPU_TOP__DOT__u_proc__DOT__Pipe9_B;
        SData/*8:0*/ PPU_TOP__DOT__u_proc__DOT__main_state_counter_x;
        SData/*8:0*/ PPU_TOP__DOT__u_proc__DOT__main_state_counter_y;
        SData/*8:0*/ PPU_TOP__DOT__u_proc__DOT__main_state_counter_x_next;
        SData/*8:0*/ PPU_TOP__DOT__u_proc__DOT__main_state_counter_y_next;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad;
        IData/*31:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_RGB;
    };
    struct {
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z1_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z2_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z3_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z4_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z5_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z6_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z7_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z8_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z9_RGB;
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__Z10_RGB;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__bg1_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__bg2_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__ch1_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__ch2_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__ch3_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__ch4_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__uni2_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__sc_comp_data;
        QData/*63:0*/ PPU_TOP__DOT__u_pixel_fifo__DOT__st_comp_data;
        IData/*17:0*/ PPU_TOP__DOT__Req_RGB[12];
        CData/*0:0*/ PPU_TOP__DOT__Req_trans[12];
        CData/*0:0*/ PPU_TOP__DOT__Req_end[12];
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__layer_RGB[11];
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__layer_is_trans[11];
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__layer_valid[11];
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__layer_z[11];
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__layer_a[11];
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__layer_ready[11];
        CData/*3:0*/ PPU_TOP__DOT__u_proc__DOT__z_index_map[10];
        IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT__z_input_RGB[10];
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[10];
        CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT__z_input_a[10];
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__z_input_valid[10];
        CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT__z_input_ready[10];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req12_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req11_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req10_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req10_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req9_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req9_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req8_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req8_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req7_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req7_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req6_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req6_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req5_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req5_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req4_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req4_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req3_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req3_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req2_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req2_trans;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req1_end;
    CData/*0:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req1_trans;
    CData/*3:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    CData/*7:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound7;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound8;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound9;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound10;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound11;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound12;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound13;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound14;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound15;
    CData/*0:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound16;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__resetn;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_bg1__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_bg2__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_ch1__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_ch2__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_ch3__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_ch4__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_sc__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_st__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_un1__rgb_convert_end;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_un2__rgb_convert_end;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB;
    IData/*17:0*/ PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB;
    IData/*17:0*/ PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    CData/*0:0*/ __Vchglast__TOP__PPU_TOP__DOT__u_proc__DOT__layer_ready[11];
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPPU_TOP__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPPU_TOP);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPPU_TOP(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPPU_TOP();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPPU_TOP__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPPU_TOP__Syms* symsp, bool first);
  private:
    static QData _change_request(VPPU_TOP__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPPU_TOP__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VPPU_TOP__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(VPPU_TOP__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(VPPU_TOP__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPPU_TOP__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VPPU_TOP__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VPPU_TOP__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VPPU_TOP__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
