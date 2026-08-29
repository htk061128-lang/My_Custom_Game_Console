// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VGAME_CONSOLE_TOP__SYMS_H_
#define _VGAME_CONSOLE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VGame_Console_TOP.h"
#include "VGame_Console_TOP_Pixel_Reader.h"
#include "VGame_Console_TOP_Decompresser.h"

// SYMS CLASS
class VGame_Console_TOP__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VGame_Console_TOP*             TOPp;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1;
    VGame_Console_TOP_Decompresser TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1;
    VGame_Console_TOP_Pixel_Reader TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2;
    
    // CREATORS
    VGame_Console_TOP__Syms(VGame_Console_TOP* topp, const char* namep);
    ~VGame_Console_TOP__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
