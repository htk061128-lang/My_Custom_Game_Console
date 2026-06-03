// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPPU_TOP__SYMS_H_
#define _VPPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VPPU_TOP.h"
#include "VPPU_TOP_Pixel_Reader.h"
#include "VPPU_TOP_Decompresser.h"

// SYMS CLASS
class VPPU_TOP__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VPPU_TOP*                      TOPp;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_bg1;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_bg2;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_ch1;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_ch2;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_ch3;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_ch4;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1;
    VPPU_TOP_Decompresser          TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_sc;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_st;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_un1;
    VPPU_TOP_Pixel_Reader          TOP__PPU_TOP__DOT__u_un2;
    
    // CREATORS
    VPPU_TOP__Syms(VPPU_TOP* topp, const char* namep);
    ~VPPU_TOP__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
