// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VGame_Console_TOP__Syms.h"
#include "VGame_Console_TOP.h"
#include "VGame_Console_TOP_Pixel_Reader.h"
#include "VGame_Console_TOP_Decompresser.h"



// FUNCTIONS
VGame_Console_TOP__Syms::VGame_Console_TOP__Syms(VGame_Console_TOP* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_bg1"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_bg2"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_ch1"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_ch2"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_ch3"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_ch4"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_bg1"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_bg2"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_ch1"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_ch2"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_ch3"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_ch4"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_script"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_status"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_uni1"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_pixel_fifo.u_decomp_uni2"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_sc"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_st"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_un1"))
    , TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2(Verilated::catName(topp->name(), "Game_Console_TOP.u_ppu.u_un2"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_sc = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_st = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_un1 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1;
    TOPp->__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_un2 = &TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__Vconfigure(this, true);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__Vconfigure(this, true);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__Vconfigure(this, false);
    TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__Vconfigure(this, false);
}
