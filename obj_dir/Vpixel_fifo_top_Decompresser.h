// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpixel_fifo_top.h for the primary calling header

#ifndef _VPIXEL_FIFO_TOP_DECOMPRESSER_H_
#define _VPIXEL_FIFO_TOP_DECOMPRESSER_H_  // guard

#include "verilated.h"

//==========

class Vpixel_fifo_top__Syms;
class Vpixel_fifo_top_VerilatedVcd;


//----------

VL_MODULE(Vpixel_fifo_top_Decompresser) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(Clk_Counter,1,0);
    VL_IN8(BRAM_number,3,0);
    VL_IN8(BRAM_size,0,0);
    VL_IN8(BRAM_rw_counter_bits,3,0);
    VL_IN8(PPU_start,0,0);
    VL_IN8(Compressed_FIFO_r_master,0,0);
    VL_OUT8(Compressed_FIFO_ena,0,0);
    VL_OUT8(Compressed_FIFO_dequeue,0,0);
    VL_OUT8(BRAM10_en_a,0,0);
    VL_OUT8(BRAM10_we_a,0,0);
    VL_OUT8(BRAM10_en_b,0,0);
    VL_OUT8(BRAM11_en_a,0,0);
    VL_OUT8(BRAM11_we_a,0,0);
    VL_OUT8(BRAM11_en_b,0,0);
    VL_OUT8(BRAM12_en_a,0,0);
    VL_OUT8(BRAM12_we_a,0,0);
    VL_OUT8(BRAM12_en_b,0,0);
    VL_IN8(Decompressed_FIFO_ena,0,0);
    VL_IN8(Decompressed_FIFO_dequeue,0,0);
    VL_OUT8(Decompressed_FIFO_r_master,0,0);
    VL_OUT8(Decompressed_FIFO_empty,0,0);
    VL_IN16(BRAM_base,8,0);
    VL_IN16(Compressed_FIFO_count,8,0);
    VL_OUT16(BRAM10_addr_a,8,0);
    VL_OUT16(BRAM10_addr_b,8,0);
    VL_OUT16(BRAM11_addr_a,8,0);
    VL_OUT16(BRAM11_addr_b,8,0);
    VL_OUT16(BRAM12_addr_a,8,0);
    VL_OUT16(BRAM12_addr_b,8,0);
    VL_IN64(Compressed_FIFO_data,63,0);
    VL_OUT64(BRAM10_din_a,63,0);
    VL_IN64(BRAM10_dout_b,63,0);
    VL_OUT64(BRAM11_din_a,63,0);
    VL_IN64(BRAM11_dout_b,63,0);
    VL_OUT64(BRAM12_din_a,63,0);
    VL_IN64(BRAM12_dout_b,63,0);
    VL_OUT64(Decompressed_FIFO_data,63,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__tdm_match;
    CData/*0:0*/ __PVT__decompressed_fifo_w_end;
    CData/*0:0*/ __PVT__compressed_fifo_r_ena;
    CData/*0:0*/ __PVT__compressed_fifo_r_state;
    CData/*0:0*/ __PVT__compressed_fifo_r_state_next;
    CData/*0:0*/ __PVT__decompressed_fifo_w_ena;
    CData/*1:0*/ __PVT__decompressed_fifo_r_state;
    CData/*1:0*/ __PVT__decompressed_fifo_r_state_next;
    CData/*0:0*/ __PVT__fifo_front_256_inc_ena;
    CData/*0:0*/ __PVT__fifo_rear_256_inc_ena;
    CData/*0:0*/ __PVT__fifo_full_256;
    CData/*0:0*/ __PVT__fifo_empty_256;
    CData/*7:0*/ __PVT__fifo_front_128;
    CData/*0:0*/ __PVT__fifo_front_128_inc_ena;
    CData/*7:0*/ __PVT__fifo_rear_128;
    CData/*0:0*/ __PVT__fifo_rear_128_inc_ena;
    CData/*0:0*/ __PVT__fifo_full_128;
    CData/*0:0*/ __PVT__fifo_empty_128;
    CData/*3:0*/ __PVT__r_state;
    CData/*3:0*/ __PVT__r_state_next;
    CData/*3:0*/ __PVT__w_state;
    CData/*3:0*/ __PVT__w_state_next;
    CData/*3:0*/ __PVT__decompress_state;
    CData/*3:0*/ __PVT__decompress_state_next;
    CData/*0:0*/ __PVT__compressed_FIFO_reg_64_w_ena;
    CData/*2:0*/ __PVT__compressed_FIFO_reg_counter;
    CData/*0:0*/ __PVT__compressed_FIFO_reg_counter_inc_ena;
    CData/*0:0*/ __PVT__compressed_FIFO_reg_counter_reset;
    CData/*2:0*/ __PVT__decompressed_FIFO_reg_counter;
    CData/*0:0*/ __PVT__decompressed_FIFO_reg_counter_inc_ena;
    CData/*7:0*/ __PVT__decompressed_FIFO_reg_wstrb;
    CData/*0:0*/ __PVT__decompressed_FIFO_reg_counter_reset;
    CData/*7:0*/ __PVT__r_8;
    CData/*0:0*/ __PVT__r_8_valid;
    CData/*7:0*/ __PVT__r_8_reg;
    CData/*0:0*/ __PVT__r_8_reg_w_ena;
    CData/*6:0*/ __PVT__repeat_counter;
    CData/*0:0*/ __PVT__repeat_counter_w_ena;
    CData/*0:0*/ __PVT__repeat_counter_dec_ena;
    CData/*6:0*/ __PVT__unrepeat_counter;
    CData/*0:0*/ __PVT__unrepeat_counter_w_ena;
    CData/*0:0*/ __PVT__unrepeat_counter_dec_ena;
    CData/*7:0*/ __PVT__pixel_reg;
    CData/*0:0*/ __PVT__pixel_reg_w_ena;
    CData/*0:0*/ __PVT__compressed_FIFO_r_req;
    CData/*0:0*/ __PVT__r_end_req;
    CData/*7:0*/ __PVT__w_8;
    CData/*0:0*/ __PVT__w_8_valid;
    CData/*0:0*/ __PVT__w_8_ready;
    CData/*0:0*/ __PVT__w_end_req;
    SData/*8:0*/ __PVT__fifo_front_256;
    SData/*8:0*/ __PVT__fifo_rear_256;
    QData/*63:0*/ __PVT__compressed_fifo_r_data;
    QData/*63:0*/ __PVT__decompressed_fifo_w_data;
    QData/*63:0*/ __PVT__compressed_FIFO_reg_64;
    QData/*63:0*/ __PVT__decompressed_FIFO_reg_64;
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vdly__fifo_front_128;
    CData/*7:0*/ __Vdly__fifo_rear_128;
    CData/*6:0*/ __Vdly__repeat_counter;
    CData/*6:0*/ __Vdly__unrepeat_counter;
    CData/*2:0*/ __Vdly__compressed_FIFO_reg_counter;
    CData/*2:0*/ __Vdly__decompressed_FIFO_reg_counter;
    SData/*8:0*/ __Vdly__fifo_front_256;
    SData/*8:0*/ __Vdly__fifo_rear_256;
    QData/*63:0*/ __Vdly__decompressed_FIFO_reg_64;
    
    // INTERNAL VARIABLES
  private:
    Vpixel_fifo_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpixel_fifo_top_Decompresser);  ///< Copying not allowed
  public:
    Vpixel_fifo_top_Decompresser(const char* name = "TOP");
    ~Vpixel_fifo_top_Decompresser();
    
    // INTERNAL METHODS
    void __Vconfigure(Vpixel_fifo_top__Syms* symsp, bool first);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_bg1__49(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_bg1__52(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_bg2__50(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_bg2__51(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_ch1__45(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_ch2__46(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_ch3__47(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_ch4__48(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_script__43(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_status__44(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_uni1__41(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _combo__TOP__pixel_fifo_top__DOT__u_decomp_uni2__42(Vpixel_fifo_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__29(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__39(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg2__40(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch1__35(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch2__36(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch3__37(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch4__38(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_script__33(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_status__34(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__31(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni2__32(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_bg1__11(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_bg1__9(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_bg2__10(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_bg2__12(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch1__20(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch1__5(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch2__19(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch2__6(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch3__18(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch3__7(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch4__17(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_ch4__8(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_script__16(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_script__3(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_status__15(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_status__4(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_uni1__1(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_uni1__14(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_uni2__13(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    void _settle__TOP__pixel_fifo_top__DOT__u_decomp_uni2__2(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
