// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpixel_fifo_top__Syms.h"
#include "Vpixel_fifo_top.h"
#include "Vpixel_fifo_top_Decompresser.h"



// FUNCTIONS
Vpixel_fifo_top__Syms::Vpixel_fifo_top__Syms(Vpixel_fifo_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__pixel_fifo_top__DOT__u_decomp_bg1(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_bg1"))
    , TOP__pixel_fifo_top__DOT__u_decomp_bg2(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_bg2"))
    , TOP__pixel_fifo_top__DOT__u_decomp_ch1(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_ch1"))
    , TOP__pixel_fifo_top__DOT__u_decomp_ch2(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_ch2"))
    , TOP__pixel_fifo_top__DOT__u_decomp_ch3(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_ch3"))
    , TOP__pixel_fifo_top__DOT__u_decomp_ch4(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_ch4"))
    , TOP__pixel_fifo_top__DOT__u_decomp_script(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_script"))
    , TOP__pixel_fifo_top__DOT__u_decomp_status(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_status"))
    , TOP__pixel_fifo_top__DOT__u_decomp_uni1(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_uni1"))
    , TOP__pixel_fifo_top__DOT__u_decomp_uni2(Verilated::catName(topp->name(), "pixel_fifo_top.u_decomp_uni2"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_bg1 = &TOP__pixel_fifo_top__DOT__u_decomp_bg1;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_bg2 = &TOP__pixel_fifo_top__DOT__u_decomp_bg2;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_ch1 = &TOP__pixel_fifo_top__DOT__u_decomp_ch1;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_ch2 = &TOP__pixel_fifo_top__DOT__u_decomp_ch2;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_ch3 = &TOP__pixel_fifo_top__DOT__u_decomp_ch3;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_ch4 = &TOP__pixel_fifo_top__DOT__u_decomp_ch4;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_script = &TOP__pixel_fifo_top__DOT__u_decomp_script;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_status = &TOP__pixel_fifo_top__DOT__u_decomp_status;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_uni1 = &TOP__pixel_fifo_top__DOT__u_decomp_uni1;
    TOPp->__PVT__pixel_fifo_top__DOT__u_decomp_uni2 = &TOP__pixel_fifo_top__DOT__u_decomp_uni2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__pixel_fifo_top__DOT__u_decomp_bg1.__Vconfigure(this, true);
    TOP__pixel_fifo_top__DOT__u_decomp_bg2.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_ch1.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_ch2.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_ch3.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_ch4.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_script.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_status.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_uni1.__Vconfigure(this, false);
    TOP__pixel_fifo_top__DOT__u_decomp_uni2.__Vconfigure(this, false);
}
