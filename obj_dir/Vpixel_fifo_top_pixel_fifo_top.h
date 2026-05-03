// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpixel_fifo_top.h for the primary calling header

#ifndef _VPIXEL_FIFO_TOP_PIXEL_FIFO_TOP_H_
#define _VPIXEL_FIFO_TOP_PIXEL_FIFO_TOP_H_  // guard

#include "verilated.h"
#include "Vpixel_fifo_top__Dpi.h"

//==========

class Vpixel_fifo_top__Syms;
class Vpixel_fifo_top_VerilatedVcd;
class Vpixel_fifo_top_Decompresser;


//----------

VL_MODULE(Vpixel_fifo_top_pixel_fifo_top) {
  public:
    // CELLS
    Vpixel_fifo_top_Decompresser* u_decomp_uni1;
    Vpixel_fifo_top_Decompresser* u_decomp_uni2;
    Vpixel_fifo_top_Decompresser* u_decomp_script;
    Vpixel_fifo_top_Decompresser* u_decomp_status;
    Vpixel_fifo_top_Decompresser* u_decomp_ch1;
    Vpixel_fifo_top_Decompresser* u_decomp_ch2;
    Vpixel_fifo_top_Decompresser* u_decomp_ch3;
    Vpixel_fifo_top_Decompresser* u_decomp_ch4;
    Vpixel_fifo_top_Decompresser* u_decomp_bg1;
    Vpixel_fifo_top_Decompresser* u_decomp_bg2;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(PPU_start,0,0);
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
    VL_IN8(uni1_decomp_ena,0,0);
    VL_IN8(uni1_decomp_dequeue,0,0);
    VL_OUT8(uni1_decomp_r_master,0,0);
    VL_OUT8(uni1_decomp_empty,0,0);
    VL_IN8(uni2_decomp_ena,0,0);
    VL_IN8(uni2_decomp_dequeue,0,0);
    VL_OUT8(uni2_decomp_r_master,0,0);
    VL_OUT8(uni2_decomp_empty,0,0);
    VL_IN8(sc_decomp_ena,0,0);
    VL_IN8(sc_decomp_dequeue,0,0);
    VL_OUT8(sc_decomp_r_master,0,0);
    VL_OUT8(sc_decomp_empty,0,0);
    VL_IN8(st_decomp_ena,0,0);
    VL_IN8(st_decomp_dequeue,0,0);
    VL_OUT8(st_decomp_r_master,0,0);
    VL_OUT8(st_decomp_empty,0,0);
    VL_IN8(ch1_decomp_ena,0,0);
    VL_IN8(ch1_decomp_dequeue,0,0);
    VL_OUT8(ch1_decomp_r_master,0,0);
    VL_OUT8(ch1_decomp_empty,0,0);
    VL_IN8(ch2_decomp_ena,0,0);
    VL_IN8(ch2_decomp_dequeue,0,0);
    VL_OUT8(ch2_decomp_r_master,0,0);
    VL_OUT8(ch2_decomp_empty,0,0);
    VL_IN8(ch3_decomp_ena,0,0);
    VL_IN8(ch3_decomp_dequeue,0,0);
    VL_OUT8(ch3_decomp_r_master,0,0);
    VL_OUT8(ch3_decomp_empty,0,0);
    VL_IN8(ch4_decomp_ena,0,0);
    VL_IN8(ch4_decomp_dequeue,0,0);
    VL_OUT8(ch4_decomp_r_master,0,0);
    VL_OUT8(ch4_decomp_empty,0,0);
    VL_IN8(bg1_decomp_ena,0,0);
    VL_IN8(bg1_decomp_dequeue,0,0);
    VL_OUT8(bg1_decomp_r_master,0,0);
    VL_OUT8(bg1_decomp_empty,0,0);
    VL_IN8(bg2_decomp_ena,0,0);
    VL_IN8(bg2_decomp_dequeue,0,0);
    VL_OUT8(bg2_decomp_r_master,0,0);
    VL_OUT8(bg2_decomp_empty,0,0);
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
    VL_IN(Universal_Layer1_Address,31,0);
    VL_IN(Universal_Layer2_Address,31,0);
    VL_IN(Script_Layer_Address,31,0);
    VL_IN(Status_Layer_Address,31,0);
    VL_IN(Character_Layer1_Address,31,0);
    VL_IN(Character_Layer2_Address,31,0);
    VL_IN(Character_Layer3_Address,31,0);
    VL_IN(Character_Layer4_Address,31,0);
    VL_IN(Background_Layer1_Address,31,0);
    VL_IN(Background_Layer2_Address,31,0);
    VL_OUT(EMEM_addr,31,0);
    VL_OUT(EMEM_wdata,31,0);
    VL_IN(EMEM_rdata,31,0);
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
    VL_OUT64(uni1_decomp_data,63,0);
    VL_OUT64(uni2_decomp_data,63,0);
    VL_OUT64(sc_decomp_data,63,0);
    VL_OUT64(st_decomp_data,63,0);
    VL_OUT64(ch1_decomp_data,63,0);
    VL_OUT64(ch2_decomp_data,63,0);
    VL_OUT64(ch3_decomp_data,63,0);
    VL_OUT64(ch4_decomp_data,63,0);
    VL_OUT64(bg1_decomp_data,63,0);
    VL_OUT64(bg2_decomp_data,63,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__uni1_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__uni1_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__uni1_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__uni2_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__uni2_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__uni2_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__script_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__script_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__script_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__status_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__status_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__status_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char1_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char1_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char1_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char2_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char2_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char2_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char3_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char3_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char3_fifo_rear;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char4_fifo_count;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char4_fifo_front;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__char4_fifo_rear;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__back1_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__back1_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__back2_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__back2_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char1_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char1_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char2_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char2_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char3_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char3_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char4_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__char4_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__script_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__script_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__status_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__status_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want;
        CData/*1:0*/ __PVT__u_compressed_fifo__DOT__clk_counter;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__back1_fifo_r_master;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__back2_fifo_r_master;
        CData/*3:0*/ __PVT__u_compressed_fifo__DOT__main_state;
        CData/*2:0*/ __PVT__u_compressed_fifo__DOT__BRAM7_read_state;
        CData/*2:0*/ __PVT__u_compressed_fifo__DOT__BRAM7_read_state_next;
        CData/*2:0*/ __PVT__u_compressed_fifo__DOT__BRAM8_read_state;
        CData/*2:0*/ __PVT__u_compressed_fifo__DOT__BRAM8_read_state_next;
        CData/*2:0*/ __PVT__u_compressed_fifo__DOT__BRAM9_read_state;
        CData/*2:0*/ __PVT__u_compressed_fifo__DOT__BRAM9_read_state_next;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__round_end;
        CData/*0:0*/ __PVT__u_compressed_fifo__DOT__is_urgent_mode;
        CData/*7:0*/ __PVT__u_compressed_fifo__DOT__emem_r_counter;
        SData/*8:0*/ __PVT__u_compressed_fifo__DOT__back1_fifo_count;
        SData/*8:0*/ __PVT__u_compressed_fifo__DOT__back1_fifo_front;
        SData/*8:0*/ __PVT__u_compressed_fifo__DOT__back1_fifo_rear;
        SData/*8:0*/ __PVT__u_compressed_fifo__DOT__back2_fifo_count;
        SData/*8:0*/ __PVT__u_compressed_fifo__DOT__back2_fifo_front;
        SData/*8:0*/ __PVT__u_compressed_fifo__DOT__back2_fifo_rear;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__next_should_read_layer;
    };
    struct {
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__last_read_basic;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__last_read_urgent;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__valid_req;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__urgent_req;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__basic_req;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__masked_req;
        SData/*9:0*/ __PVT__u_compressed_fifo__DOT__should_read_layer;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__uni1_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__uni2_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__script_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__status_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__char1_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__char2_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__char3_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__char4_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__back1_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__back2_next_ad;
        IData/*31:0*/ __PVT__u_compressed_fifo__DOT__tem_32_reg;
        QData/*63:0*/ __PVT__bg1_comp_data;
        QData/*63:0*/ __PVT__bg2_comp_data;
        QData/*63:0*/ __PVT__ch1_comp_data;
        QData/*63:0*/ __PVT__ch2_comp_data;
        QData/*63:0*/ __PVT__ch3_comp_data;
        QData/*63:0*/ __PVT__ch4_comp_data;
        QData/*63:0*/ __PVT__uni1_comp_data;
        QData/*63:0*/ __PVT__uni2_comp_data;
        QData/*63:0*/ __PVT__sc_comp_data;
        QData/*63:0*/ __PVT__st_comp_data;
    };
    
    // INTERNAL VARIABLES
  private:
    Vpixel_fifo_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpixel_fifo_top_pixel_fifo_top);  ///< Copying not allowed
  public:
    Vpixel_fifo_top_pixel_fifo_top(const char* name = "TOP");
    ~Vpixel_fifo_top_pixel_fifo_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vpixel_fifo_top__Syms* symsp, bool first);
    static void _combo__TOP__pixel_fifo_top__5(Vpixel_fifo_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__pixel_fifo_top__3(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__pixel_fifo_top__4(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__pixel_fifo_top__1(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__pixel_fifo_top__2(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
