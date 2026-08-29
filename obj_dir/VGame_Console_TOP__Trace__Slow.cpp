// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGame_Console_TOP__Syms.h"


//======================

void VGame_Console_TOP::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VGame_Console_TOP::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VGame_Console_TOP::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VGame_Console_TOP::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VGame_Console_TOP::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+2460,"clk", false,-1);
        tracep->declBit(c+2461,"resetn", false,-1);
        tracep->declBus(c+2462,"joypad_state_in", false,-1, 7,0);
        tracep->declBit(c+2463,"joypad_irq", false,-1);
        tracep->declBit(c+2464,"DDR3_CPU_valid", false,-1);
        tracep->declBit(c+2465,"DDR3_CPU_ready", false,-1);
        tracep->declBus(c+2466,"DDR3_CPU_addr", false,-1, 31,0);
        tracep->declBus(c+2467,"DDR3_CPU_wdata", false,-1, 31,0);
        tracep->declBus(c+2468,"DDR3_CPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+2469,"DDR3_CPU_rdata", false,-1, 31,0);
        tracep->declBus(c+2470,"DDR3_CPU_burst_len", false,-1, 7,0);
        tracep->declBit(c+2471,"DDR3_CPU_burst_en", false,-1);
        tracep->declBit(c+2472,"DDR3_PPU_valid", false,-1);
        tracep->declBit(c+2473,"DDR3_PPU_ready", false,-1);
        tracep->declBus(c+2474,"DDR3_PPU_addr", false,-1, 31,0);
        tracep->declBus(c+2475,"DDR3_PPU_wdata", false,-1, 31,0);
        tracep->declBus(c+2476,"DDR3_PPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+2477,"DDR3_PPU_rdata", false,-1, 31,0);
        tracep->declBus(c+2478,"DDR3_PPU_burst_len", false,-1, 7,0);
        tracep->declBit(c+2479,"DDR3_PPU_burst_en", false,-1);
        tracep->declBit(c+2480,"BRAM0_wen", false,-1);
        tracep->declBus(c+2481,"BRAM0_wstrb", false,-1, 7,0);
        tracep->declBus(c+2482,"BRAM0_waddr", false,-1, 8,0);
        tracep->declArray(c+2483,"BRAM0_din", false,-1, 71,0);
        tracep->declArray(c+2486,"BRAM0_dout", false,-1, 71,0);
        tracep->declBit(c+2489,"BRAM0_ren", false,-1);
        tracep->declBus(c+2490,"BRAM0_raddr", false,-1, 8,0);
        tracep->declBit(c+2491,"BRAM1_wen", false,-1);
        tracep->declBus(c+2492,"BRAM1_wstrb", false,-1, 7,0);
        tracep->declBus(c+2493,"BRAM1_waddr", false,-1, 8,0);
        tracep->declArray(c+2494,"BRAM1_din", false,-1, 71,0);
        tracep->declArray(c+2497,"BRAM1_dout", false,-1, 71,0);
        tracep->declBit(c+2500,"BRAM1_ren", false,-1);
        tracep->declBus(c+2501,"BRAM1_raddr", false,-1, 8,0);
        tracep->declBit(c+2502,"BRAM2_wen", false,-1);
        tracep->declBus(c+2503,"BRAM2_wstrb", false,-1, 7,0);
        tracep->declBus(c+2504,"BRAM2_waddr", false,-1, 8,0);
        tracep->declArray(c+2505,"BRAM2_din", false,-1, 71,0);
        tracep->declArray(c+2508,"BRAM2_dout", false,-1, 71,0);
        tracep->declBit(c+2511,"BRAM2_ren", false,-1);
        tracep->declBus(c+2512,"BRAM2_raddr", false,-1, 8,0);
        tracep->declBit(c+2513,"BRAM3_wen", false,-1);
        tracep->declBus(c+2514,"BRAM3_wstrb", false,-1, 7,0);
        tracep->declBus(c+2515,"BRAM3_waddr", false,-1, 8,0);
        tracep->declArray(c+2516,"BRAM3_din", false,-1, 71,0);
        tracep->declArray(c+2519,"BRAM3_dout", false,-1, 71,0);
        tracep->declBit(c+2522,"BRAM3_ren", false,-1);
        tracep->declBus(c+2523,"BRAM3_raddr", false,-1, 8,0);
        tracep->declBit(c+2524,"BRAM4_en_a", false,-1);
        tracep->declBus(c+2525,"BRAM4_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2526,"BRAM4_addr_a", false,-1, 9,0);
        tracep->declBus(c+2527,"BRAM4_din_a", false,-1, 31,0);
        tracep->declBus(c+2528,"BRAM4_dout_a", false,-1, 31,0);
        tracep->declBit(c+2529,"BRAM4_en_b", false,-1);
        tracep->declBus(c+2530,"BRAM4_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2531,"BRAM4_addr_b", false,-1, 9,0);
        tracep->declBus(c+2532,"BRAM4_din_b", false,-1, 31,0);
        tracep->declBus(c+2533,"BRAM4_dout_b", false,-1, 31,0);
        tracep->declBit(c+2534,"BRAM5_en_a", false,-1);
        tracep->declBus(c+2535,"BRAM5_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2536,"BRAM5_addr_a", false,-1, 9,0);
        tracep->declBus(c+2537,"BRAM5_din_a", false,-1, 31,0);
        tracep->declBus(c+2538,"BRAM5_dout_a", false,-1, 31,0);
        tracep->declBit(c+2539,"BRAM5_en_b", false,-1);
        tracep->declBus(c+2540,"BRAM5_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2541,"BRAM5_addr_b", false,-1, 9,0);
        tracep->declBus(c+2542,"BRAM5_din_b", false,-1, 31,0);
        tracep->declBus(c+2543,"BRAM5_dout_b", false,-1, 31,0);
        tracep->declBit(c+2544,"BRAM6_en_a", false,-1);
        tracep->declBus(c+2545,"BRAM6_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2546,"BRAM6_addr_a", false,-1, 9,0);
        tracep->declBus(c+2547,"BRAM6_din_a", false,-1, 31,0);
        tracep->declBus(c+2548,"BRAM6_dout_a", false,-1, 31,0);
        tracep->declBit(c+2549,"BRAM6_en_b", false,-1);
        tracep->declBus(c+2550,"BRAM6_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2551,"BRAM6_addr_b", false,-1, 9,0);
        tracep->declBus(c+2552,"BRAM6_din_b", false,-1, 31,0);
        tracep->declBus(c+2553,"BRAM6_dout_b", false,-1, 31,0);
        tracep->declBit(c+2554,"BRAM13_en_a", false,-1);
        tracep->declBus(c+2555,"BRAM13_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2556,"BRAM13_addr_a", false,-1, 9,0);
        tracep->declBus(c+2557,"BRAM13_din_a", false,-1, 31,0);
        tracep->declBus(c+2558,"BRAM13_dout_a", false,-1, 31,0);
        tracep->declBit(c+2559,"BRAM13_en_b", false,-1);
        tracep->declBus(c+2560,"BRAM13_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2561,"BRAM13_addr_b", false,-1, 9,0);
        tracep->declBus(c+2562,"BRAM13_din_b", false,-1, 31,0);
        tracep->declBus(c+2563,"BRAM13_dout_b", false,-1, 31,0);
        tracep->declBit(c+2564,"BRAM14_en_a", false,-1);
        tracep->declBus(c+2565,"BRAM14_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2566,"BRAM14_addr_a", false,-1, 9,0);
        tracep->declBus(c+2567,"BRAM14_din_a", false,-1, 31,0);
        tracep->declBus(c+2568,"BRAM14_dout_a", false,-1, 31,0);
        tracep->declBit(c+2569,"BRAM14_en_b", false,-1);
        tracep->declBus(c+2570,"BRAM14_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2571,"BRAM14_addr_b", false,-1, 9,0);
        tracep->declBus(c+2572,"BRAM14_din_b", false,-1, 31,0);
        tracep->declBus(c+2573,"BRAM14_dout_b", false,-1, 31,0);
        tracep->declBit(c+2574,"BRAM7_en_a", false,-1);
        tracep->declBus(c+2575,"BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+2576,"BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2577,"BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+2579,"BRAM7_en_b", false,-1);
        tracep->declBus(c+2580,"BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2581,"BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+2583,"BRAM8_en_a", false,-1);
        tracep->declBus(c+2584,"BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+2585,"BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2586,"BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+2588,"BRAM8_en_b", false,-1);
        tracep->declBus(c+2589,"BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2590,"BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+2592,"BRAM9_en_a", false,-1);
        tracep->declBus(c+2593,"BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+2594,"BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2595,"BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+2597,"BRAM9_en_b", false,-1);
        tracep->declBus(c+2598,"BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2599,"BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+2601,"BRAM10_en_a", false,-1);
        tracep->declBus(c+2602,"BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+2603,"BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2604,"BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+2606,"BRAM10_en_b", false,-1);
        tracep->declBus(c+2607,"BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+2610,"BRAM11_en_a", false,-1);
        tracep->declBus(c+2611,"BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+2612,"BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2613,"BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+2615,"BRAM11_en_b", false,-1);
        tracep->declBus(c+2616,"BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+2619,"BRAM12_en_a", false,-1);
        tracep->declBus(c+2620,"BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+2621,"BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2622,"BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+2624,"BRAM12_en_b", false,-1);
        tracep->declBus(c+2625,"BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2626,"BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2628,"LUT_we", false,-1);
        tracep->declBus(c+2629,"LUT_addr_w", false,-1, 7,0);
        tracep->declBus(c+2630,"LUT_data_in", false,-1, 17,0);
        tracep->declBus(c+2631,"LUT_addr_r1", false,-1, 7,0);
        tracep->declBus(c+2632,"LUT_data_out1", false,-1, 17,0);
        tracep->declBus(c+2633,"LUT_addr_r2", false,-1, 7,0);
        tracep->declBus(c+2634,"LUT_data_out2", false,-1, 17,0);
        tracep->declBit(c+2635,"Final_pixel_valid", false,-1);
        tracep->declBus(c+2636,"Final_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+2637,"Font_Line_End", false,-1);
        tracep->declBit(c+2638,"Font_Frame_End", false,-1);
        tracep->declBus(c+2641,"Game_Console_TOP CONTROL_REG_BASE", false,-1, 31,0);
        tracep->declBus(c+2642,"Game_Console_TOP FONT_MAP_BASE", false,-1, 31,0);
        tracep->declBus(c+2643,"Game_Console_TOP FONT_DATA_BASE", false,-1, 31,0);
        tracep->declBus(c+2644,"Game_Console_TOP LOOKUP_TABLE_BASE", false,-1, 31,0);
        tracep->declBus(c+2645,"Game_Console_TOP STACKADDR", false,-1, 31,0);
        tracep->declBit(c+2460,"Game_Console_TOP clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP resetn", false,-1);
        tracep->declBus(c+2462,"Game_Console_TOP joypad_state_in", false,-1, 7,0);
        tracep->declBit(c+2463,"Game_Console_TOP joypad_irq", false,-1);
        tracep->declBit(c+2464,"Game_Console_TOP DDR3_CPU_valid", false,-1);
        tracep->declBit(c+2465,"Game_Console_TOP DDR3_CPU_ready", false,-1);
        tracep->declBus(c+2466,"Game_Console_TOP DDR3_CPU_addr", false,-1, 31,0);
        tracep->declBus(c+2467,"Game_Console_TOP DDR3_CPU_wdata", false,-1, 31,0);
        tracep->declBus(c+2468,"Game_Console_TOP DDR3_CPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+2469,"Game_Console_TOP DDR3_CPU_rdata", false,-1, 31,0);
        tracep->declBus(c+2470,"Game_Console_TOP DDR3_CPU_burst_len", false,-1, 7,0);
        tracep->declBit(c+2471,"Game_Console_TOP DDR3_CPU_burst_en", false,-1);
        tracep->declBit(c+2472,"Game_Console_TOP DDR3_PPU_valid", false,-1);
        tracep->declBit(c+2473,"Game_Console_TOP DDR3_PPU_ready", false,-1);
        tracep->declBus(c+2474,"Game_Console_TOP DDR3_PPU_addr", false,-1, 31,0);
        tracep->declBus(c+2475,"Game_Console_TOP DDR3_PPU_wdata", false,-1, 31,0);
        tracep->declBus(c+2476,"Game_Console_TOP DDR3_PPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+2477,"Game_Console_TOP DDR3_PPU_rdata", false,-1, 31,0);
        tracep->declBus(c+2478,"Game_Console_TOP DDR3_PPU_burst_len", false,-1, 7,0);
        tracep->declBit(c+2479,"Game_Console_TOP DDR3_PPU_burst_en", false,-1);
        tracep->declBit(c+2480,"Game_Console_TOP BRAM0_wen", false,-1);
        tracep->declBus(c+2481,"Game_Console_TOP BRAM0_wstrb", false,-1, 7,0);
        tracep->declBus(c+2482,"Game_Console_TOP BRAM0_waddr", false,-1, 8,0);
        tracep->declArray(c+2483,"Game_Console_TOP BRAM0_din", false,-1, 71,0);
        tracep->declArray(c+2486,"Game_Console_TOP BRAM0_dout", false,-1, 71,0);
        tracep->declBit(c+2489,"Game_Console_TOP BRAM0_ren", false,-1);
        tracep->declBus(c+2490,"Game_Console_TOP BRAM0_raddr", false,-1, 8,0);
        tracep->declBit(c+2491,"Game_Console_TOP BRAM1_wen", false,-1);
        tracep->declBus(c+2492,"Game_Console_TOP BRAM1_wstrb", false,-1, 7,0);
        tracep->declBus(c+2493,"Game_Console_TOP BRAM1_waddr", false,-1, 8,0);
        tracep->declArray(c+2494,"Game_Console_TOP BRAM1_din", false,-1, 71,0);
        tracep->declArray(c+2497,"Game_Console_TOP BRAM1_dout", false,-1, 71,0);
        tracep->declBit(c+2500,"Game_Console_TOP BRAM1_ren", false,-1);
        tracep->declBus(c+2501,"Game_Console_TOP BRAM1_raddr", false,-1, 8,0);
        tracep->declBit(c+2502,"Game_Console_TOP BRAM2_wen", false,-1);
        tracep->declBus(c+2503,"Game_Console_TOP BRAM2_wstrb", false,-1, 7,0);
        tracep->declBus(c+2504,"Game_Console_TOP BRAM2_waddr", false,-1, 8,0);
        tracep->declArray(c+2505,"Game_Console_TOP BRAM2_din", false,-1, 71,0);
        tracep->declArray(c+2508,"Game_Console_TOP BRAM2_dout", false,-1, 71,0);
        tracep->declBit(c+2511,"Game_Console_TOP BRAM2_ren", false,-1);
        tracep->declBus(c+2512,"Game_Console_TOP BRAM2_raddr", false,-1, 8,0);
        tracep->declBit(c+2513,"Game_Console_TOP BRAM3_wen", false,-1);
        tracep->declBus(c+2514,"Game_Console_TOP BRAM3_wstrb", false,-1, 7,0);
        tracep->declBus(c+2515,"Game_Console_TOP BRAM3_waddr", false,-1, 8,0);
        tracep->declArray(c+2516,"Game_Console_TOP BRAM3_din", false,-1, 71,0);
        tracep->declArray(c+2519,"Game_Console_TOP BRAM3_dout", false,-1, 71,0);
        tracep->declBit(c+2522,"Game_Console_TOP BRAM3_ren", false,-1);
        tracep->declBus(c+2523,"Game_Console_TOP BRAM3_raddr", false,-1, 8,0);
        tracep->declBit(c+2524,"Game_Console_TOP BRAM4_en_a", false,-1);
        tracep->declBus(c+2525,"Game_Console_TOP BRAM4_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2526,"Game_Console_TOP BRAM4_addr_a", false,-1, 9,0);
        tracep->declBus(c+2527,"Game_Console_TOP BRAM4_din_a", false,-1, 31,0);
        tracep->declBus(c+2528,"Game_Console_TOP BRAM4_dout_a", false,-1, 31,0);
        tracep->declBit(c+2529,"Game_Console_TOP BRAM4_en_b", false,-1);
        tracep->declBus(c+2530,"Game_Console_TOP BRAM4_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2531,"Game_Console_TOP BRAM4_addr_b", false,-1, 9,0);
        tracep->declBus(c+2532,"Game_Console_TOP BRAM4_din_b", false,-1, 31,0);
        tracep->declBus(c+2533,"Game_Console_TOP BRAM4_dout_b", false,-1, 31,0);
        tracep->declBit(c+2534,"Game_Console_TOP BRAM5_en_a", false,-1);
        tracep->declBus(c+2535,"Game_Console_TOP BRAM5_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2536,"Game_Console_TOP BRAM5_addr_a", false,-1, 9,0);
        tracep->declBus(c+2537,"Game_Console_TOP BRAM5_din_a", false,-1, 31,0);
        tracep->declBus(c+2538,"Game_Console_TOP BRAM5_dout_a", false,-1, 31,0);
        tracep->declBit(c+2539,"Game_Console_TOP BRAM5_en_b", false,-1);
        tracep->declBus(c+2540,"Game_Console_TOP BRAM5_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2541,"Game_Console_TOP BRAM5_addr_b", false,-1, 9,0);
        tracep->declBus(c+2542,"Game_Console_TOP BRAM5_din_b", false,-1, 31,0);
        tracep->declBus(c+2543,"Game_Console_TOP BRAM5_dout_b", false,-1, 31,0);
        tracep->declBit(c+2544,"Game_Console_TOP BRAM6_en_a", false,-1);
        tracep->declBus(c+2545,"Game_Console_TOP BRAM6_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2546,"Game_Console_TOP BRAM6_addr_a", false,-1, 9,0);
        tracep->declBus(c+2547,"Game_Console_TOP BRAM6_din_a", false,-1, 31,0);
        tracep->declBus(c+2548,"Game_Console_TOP BRAM6_dout_a", false,-1, 31,0);
        tracep->declBit(c+2549,"Game_Console_TOP BRAM6_en_b", false,-1);
        tracep->declBus(c+2550,"Game_Console_TOP BRAM6_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2551,"Game_Console_TOP BRAM6_addr_b", false,-1, 9,0);
        tracep->declBus(c+2552,"Game_Console_TOP BRAM6_din_b", false,-1, 31,0);
        tracep->declBus(c+2553,"Game_Console_TOP BRAM6_dout_b", false,-1, 31,0);
        tracep->declBit(c+2554,"Game_Console_TOP BRAM13_en_a", false,-1);
        tracep->declBus(c+2555,"Game_Console_TOP BRAM13_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2556,"Game_Console_TOP BRAM13_addr_a", false,-1, 9,0);
        tracep->declBus(c+2557,"Game_Console_TOP BRAM13_din_a", false,-1, 31,0);
        tracep->declBus(c+2558,"Game_Console_TOP BRAM13_dout_a", false,-1, 31,0);
        tracep->declBit(c+2559,"Game_Console_TOP BRAM13_en_b", false,-1);
        tracep->declBus(c+2560,"Game_Console_TOP BRAM13_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2561,"Game_Console_TOP BRAM13_addr_b", false,-1, 9,0);
        tracep->declBus(c+2562,"Game_Console_TOP BRAM13_din_b", false,-1, 31,0);
        tracep->declBus(c+2563,"Game_Console_TOP BRAM13_dout_b", false,-1, 31,0);
        tracep->declBit(c+2564,"Game_Console_TOP BRAM14_en_a", false,-1);
        tracep->declBus(c+2565,"Game_Console_TOP BRAM14_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2566,"Game_Console_TOP BRAM14_addr_a", false,-1, 9,0);
        tracep->declBus(c+2567,"Game_Console_TOP BRAM14_din_a", false,-1, 31,0);
        tracep->declBus(c+2568,"Game_Console_TOP BRAM14_dout_a", false,-1, 31,0);
        tracep->declBit(c+2569,"Game_Console_TOP BRAM14_en_b", false,-1);
        tracep->declBus(c+2570,"Game_Console_TOP BRAM14_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+2571,"Game_Console_TOP BRAM14_addr_b", false,-1, 9,0);
        tracep->declBus(c+2572,"Game_Console_TOP BRAM14_din_b", false,-1, 31,0);
        tracep->declBus(c+2573,"Game_Console_TOP BRAM14_dout_b", false,-1, 31,0);
        tracep->declBit(c+2574,"Game_Console_TOP BRAM7_en_a", false,-1);
        tracep->declBus(c+2575,"Game_Console_TOP BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+2576,"Game_Console_TOP BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2577,"Game_Console_TOP BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+2579,"Game_Console_TOP BRAM7_en_b", false,-1);
        tracep->declBus(c+2580,"Game_Console_TOP BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2581,"Game_Console_TOP BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+2583,"Game_Console_TOP BRAM8_en_a", false,-1);
        tracep->declBus(c+2584,"Game_Console_TOP BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+2585,"Game_Console_TOP BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2586,"Game_Console_TOP BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+2588,"Game_Console_TOP BRAM8_en_b", false,-1);
        tracep->declBus(c+2589,"Game_Console_TOP BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2590,"Game_Console_TOP BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+2592,"Game_Console_TOP BRAM9_en_a", false,-1);
        tracep->declBus(c+2593,"Game_Console_TOP BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+2594,"Game_Console_TOP BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2595,"Game_Console_TOP BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+2597,"Game_Console_TOP BRAM9_en_b", false,-1);
        tracep->declBus(c+2598,"Game_Console_TOP BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2599,"Game_Console_TOP BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+2601,"Game_Console_TOP BRAM10_en_a", false,-1);
        tracep->declBus(c+2602,"Game_Console_TOP BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+2603,"Game_Console_TOP BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2604,"Game_Console_TOP BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+2606,"Game_Console_TOP BRAM10_en_b", false,-1);
        tracep->declBus(c+2607,"Game_Console_TOP BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+2610,"Game_Console_TOP BRAM11_en_a", false,-1);
        tracep->declBus(c+2611,"Game_Console_TOP BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+2612,"Game_Console_TOP BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2613,"Game_Console_TOP BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+2615,"Game_Console_TOP BRAM11_en_b", false,-1);
        tracep->declBus(c+2616,"Game_Console_TOP BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+2619,"Game_Console_TOP BRAM12_en_a", false,-1);
        tracep->declBus(c+2620,"Game_Console_TOP BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+2621,"Game_Console_TOP BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2622,"Game_Console_TOP BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+2624,"Game_Console_TOP BRAM12_en_b", false,-1);
        tracep->declBus(c+2625,"Game_Console_TOP BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2626,"Game_Console_TOP BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2628,"Game_Console_TOP LUT_we", false,-1);
        tracep->declBus(c+2629,"Game_Console_TOP LUT_addr_w", false,-1, 7,0);
        tracep->declBus(c+2630,"Game_Console_TOP LUT_data_in", false,-1, 17,0);
        tracep->declBus(c+2631,"Game_Console_TOP LUT_addr_r1", false,-1, 7,0);
        tracep->declBus(c+2632,"Game_Console_TOP LUT_data_out1", false,-1, 17,0);
        tracep->declBus(c+2633,"Game_Console_TOP LUT_addr_r2", false,-1, 7,0);
        tracep->declBus(c+2634,"Game_Console_TOP LUT_data_out2", false,-1, 17,0);
        tracep->declBit(c+2635,"Game_Console_TOP Final_pixel_valid", false,-1);
        tracep->declBus(c+2636,"Game_Console_TOP Final_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+2637,"Game_Console_TOP Font_Line_End", false,-1);
        tracep->declBit(c+2638,"Game_Console_TOP Font_Frame_End", false,-1);
        tracep->declBit(c+161,"Game_Console_TOP cpu_mem_valid", false,-1);
        tracep->declBit(c+162,"Game_Console_TOP cpu_mem_instr", false,-1);
        tracep->declBit(c+1975,"Game_Console_TOP cpu_mem_ready", false,-1);
        tracep->declBus(c+1806,"Game_Console_TOP cpu_mem_addr", false,-1, 31,0);
        tracep->declBus(c+163,"Game_Console_TOP cpu_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+164,"Game_Console_TOP cpu_mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+1976,"Game_Console_TOP cpu_mem_rdata", false,-1, 31,0);
        tracep->declBus(c+1807,"Game_Console_TOP cpu_la_addr", false,-1, 31,0);
        tracep->declBit(c+1977,"Game_Console_TOP cpu_la_read", false,-1);
        tracep->declBit(c+1978,"Game_Console_TOP cpu_la_write", false,-1);
        tracep->declBus(c+1808,"Game_Console_TOP cpu_la_wdata", false,-1, 31,0);
        tracep->declBus(c+1809,"Game_Console_TOP cpu_la_wstrb", false,-1, 3,0);
        tracep->declBit(c+1810,"Game_Console_TOP cpu_trap", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP cpu_pcpi_wr", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP cpu_pcpi_wait", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP cpu_pcpi_ready", false,-1);
        tracep->declBus(c+2647,"Game_Console_TOP cpu_pcpi_rd", false,-1, 31,0);
        tracep->declBus(c+2639,"Game_Console_TOP cpu_irq", false,-1, 31,0);
        tracep->declBit(c+1975,"Game_Console_TOP cache_cpu_ready", false,-1);
        tracep->declBus(c+1976,"Game_Console_TOP cache_cpu_rdata", false,-1, 31,0);
        tracep->declBit(c+1979,"Game_Console_TOP cache_emem_valid", false,-1);
        tracep->declBit(c+1980,"Game_Console_TOP cache_emem_ready", false,-1);
        tracep->declBus(c+1981,"Game_Console_TOP cache_emem_addr", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP cache_emem_wdata", false,-1, 31,0);
        tracep->declBus(c+1983,"Game_Console_TOP cache_emem_rdata", false,-1, 31,0);
        tracep->declBus(c+1984,"Game_Console_TOP cache_emem_wstrb", false,-1, 3,0);
        tracep->declBus(c+1985,"Game_Console_TOP cache_emem_burst_len", false,-1, 7,0);
        tracep->declBit(c+1986,"Game_Console_TOP cache_emem_burst_en", false,-1);
        tracep->declBit(c+1987,"Game_Console_TOP cache_hit", false,-1);
        tracep->declBit(c+239,"Game_Console_TOP PPU_start", false,-1);
        tracep->declBit(c+1800,"Game_Console_TOP dec_lut_we", false,-1);
        tracep->declBus(c+1988,"Game_Console_TOP dec_lut_addr_w", false,-1, 7,0);
        tracep->declBus(c+1989,"Game_Console_TOP dec_lut_data_in", false,-1, 17,0);
        tracep->declBit(c+1801,"Game_Console_TOP dec_bram4_en_b", false,-1);
        tracep->declBit(c+1802,"Game_Console_TOP dec_bram5_en_b", false,-1);
        tracep->declBit(c+1803,"Game_Console_TOP dec_bram6_en_b", false,-1);
        tracep->declBit(c+1804,"Game_Console_TOP dec_bram13_en_b", false,-1);
        tracep->declBit(c+1805,"Game_Console_TOP dec_bram14_en_b", false,-1);
        tracep->declBus(c+1990,"Game_Console_TOP dec_bram4_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1991,"Game_Console_TOP dec_bram5_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1992,"Game_Console_TOP dec_bram6_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1993,"Game_Console_TOP dec_bram13_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1994,"Game_Console_TOP dec_bram14_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1995,"Game_Console_TOP dec_bram4_addr_b", false,-1, 9,0);
        tracep->declBus(c+1995,"Game_Console_TOP dec_bram5_addr_b", false,-1, 9,0);
        tracep->declBus(c+1995,"Game_Console_TOP dec_bram6_addr_b", false,-1, 9,0);
        tracep->declBus(c+1995,"Game_Console_TOP dec_bram13_addr_b", false,-1, 9,0);
        tracep->declBus(c+1995,"Game_Console_TOP dec_bram14_addr_b", false,-1, 9,0);
        tracep->declBus(c+1982,"Game_Console_TOP dec_bram4_din_b", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP dec_bram5_din_b", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP dec_bram6_din_b", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP dec_bram13_din_b", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP dec_bram14_din_b", false,-1, 31,0);
        tracep->declBus(c+1983,"Game_Console_TOP dec_emem_rdata", false,-1, 31,0);
        tracep->declBit(c+1980,"Game_Console_TOP dec_emem_ready", false,-1);
        tracep->declBit(c+1996,"Game_Console_TOP dec_ddr3_valid", false,-1);
        tracep->declBus(c+1981,"Game_Console_TOP dec_ddr3_addr", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP dec_ddr3_wdata", false,-1, 31,0);
        tracep->declBus(c+2648,"Game_Console_TOP dec_ddr3_rdata", false,-1, 31,0);
        tracep->declBus(c+1997,"Game_Console_TOP dec_ddr3_wstrb", false,-1, 3,0);
        tracep->declBus(c+1985,"Game_Console_TOP dec_ddr3_burst_len", false,-1, 7,0);
        tracep->declBit(c+1986,"Game_Console_TOP dec_ddr3_burst_en", false,-1);
        tracep->declBit(c+240,"Game_Console_TOP ppu_emem_valid", false,-1);
        tracep->declBit(c+2473,"Game_Console_TOP ppu_emem_ready", false,-1);
        tracep->declBus(c+241,"Game_Console_TOP ppu_emem_addr", false,-1, 31,0);
        tracep->declBus(c+242,"Game_Console_TOP ppu_emem_wdata", false,-1, 31,0);
        tracep->declBus(c+2477,"Game_Console_TOP ppu_emem_rdata", false,-1, 31,0);
        tracep->declBus(c+243,"Game_Console_TOP ppu_emem_wstrb", false,-1, 3,0);
        tracep->declBus(c+244,"Game_Console_TOP ppu_emem_burst_len", false,-1, 7,0);
        tracep->declBit(c+245,"Game_Console_TOP ppu_emem_burst_en", false,-1);
        tracep->declBus(c+246,"Game_Console_TOP bg1_addr", false,-1, 31,0);
        tracep->declBus(c+247,"Game_Console_TOP bg2_addr", false,-1, 31,0);
        tracep->declBus(c+248,"Game_Console_TOP chr1_addr", false,-1, 31,0);
        tracep->declBus(c+249,"Game_Console_TOP chr2_addr", false,-1, 31,0);
        tracep->declBus(c+250,"Game_Console_TOP chr3_addr", false,-1, 31,0);
        tracep->declBus(c+251,"Game_Console_TOP chr4_addr", false,-1, 31,0);
        tracep->declBus(c+252,"Game_Console_TOP scr_addr", false,-1, 31,0);
        tracep->declBus(c+253,"Game_Console_TOP stat_addr", false,-1, 31,0);
        tracep->declBus(c+254,"Game_Console_TOP uni1_addr", false,-1, 31,0);
        tracep->declBus(c+255,"Game_Console_TOP uni2_addr", false,-1, 31,0);
        tracep->declBus(c+256,"Game_Console_TOP lut_cache", false,-1, 31,0);
        tracep->declBus(c+257,"Game_Console_TOP bg1_pos", false,-1, 31,0);
        tracep->declBus(c+258,"Game_Console_TOP bg1_attr", false,-1, 31,0);
        tracep->declBus(c+259,"Game_Console_TOP bg2_pos", false,-1, 31,0);
        tracep->declBus(c+260,"Game_Console_TOP bg2_attr", false,-1, 31,0);
        tracep->declBus(c+261,"Game_Console_TOP chr1_pos", false,-1, 31,0);
        tracep->declBus(c+262,"Game_Console_TOP chr1_attr", false,-1, 31,0);
        tracep->declBus(c+263,"Game_Console_TOP chr2_pos", false,-1, 31,0);
        tracep->declBus(c+264,"Game_Console_TOP chr2_attr", false,-1, 31,0);
        tracep->declBus(c+265,"Game_Console_TOP chr3_pos", false,-1, 31,0);
        tracep->declBus(c+266,"Game_Console_TOP chr3_attr", false,-1, 31,0);
        tracep->declBus(c+267,"Game_Console_TOP chr4_pos", false,-1, 31,0);
        tracep->declBus(c+268,"Game_Console_TOP chr4_attr", false,-1, 31,0);
        tracep->declBus(c+269,"Game_Console_TOP scr_pos", false,-1, 31,0);
        tracep->declBus(c+270,"Game_Console_TOP scr_attr", false,-1, 31,0);
        tracep->declBus(c+271,"Game_Console_TOP stat_pos", false,-1, 31,0);
        tracep->declBus(c+272,"Game_Console_TOP stat_attr", false,-1, 31,0);
        tracep->declBus(c+273,"Game_Console_TOP uni1_pos", false,-1, 31,0);
        tracep->declBus(c+274,"Game_Console_TOP uni1_attr", false,-1, 31,0);
        tracep->declBus(c+275,"Game_Console_TOP uni2_pos", false,-1, 31,0);
        tracep->declBus(c+276,"Game_Console_TOP uni2_attr", false,-1, 31,0);
        tracep->declBus(c+277,"Game_Console_TOP line_cfg_0_1", false,-1, 31,0);
        tracep->declBus(c+278,"Game_Console_TOP line_cfg_2_3", false,-1, 31,0);
        tracep->declBus(c+279,"Game_Console_TOP line_cfg_4_5", false,-1, 31,0);
        tracep->declBus(c+280,"Game_Console_TOP line_cfg_6_7", false,-1, 31,0);
        tracep->declBus(c+281,"Game_Console_TOP line_cfg_8_9", false,-1, 31,0);
        tracep->declBus(c+282,"Game_Console_TOP line_cfg_10_11", false,-1, 31,0);
        tracep->declBus(c+283,"Game_Console_TOP line_cfg_12_13", false,-1, 31,0);
        tracep->declBus(c+284,"Game_Console_TOP line_cfg_14", false,-1, 31,0);
        tracep->declBus(c+285,"Game_Console_TOP line_alpha_0_7", false,-1, 31,0);
        tracep->declBus(c+286,"Game_Console_TOP line_alpha_8_14", false,-1, 31,0);
        tracep->declBus(c+287,"Game_Console_TOP cache1_pixel", false,-1, 7,0);
        tracep->declBus(c+288,"Game_Console_TOP cache2_pixel", false,-1, 7,0);
        tracep->declBus(c+289,"Game_Console_TOP cache3_pixel", false,-1, 7,0);
        tracep->declBus(c+290,"Game_Console_TOP cache4_pixel", false,-1, 7,0);
        tracep->declBus(c+1998,"Game_Console_TOP ppu_lut_addr_r1", false,-1, 7,0);
        tracep->declBus(c+1999,"Game_Console_TOP ppu_lut_addr_r2", false,-1, 7,0);
        tracep->declBus(c+291,"Game_Console_TOP bg1_wx", false,-1, 15,0);
        tracep->declBus(c+292,"Game_Console_TOP bg1_wy", false,-1, 15,0);
        tracep->declBus(c+291,"Game_Console_TOP bg1_scx", false,-1, 15,0);
        tracep->declBus(c+292,"Game_Console_TOP bg1_scy", false,-1, 15,0);
        tracep->declBus(c+293,"Game_Console_TOP bg2_wx", false,-1, 15,0);
        tracep->declBus(c+294,"Game_Console_TOP bg2_wy", false,-1, 15,0);
        tracep->declBus(c+293,"Game_Console_TOP bg2_scx", false,-1, 15,0);
        tracep->declBus(c+294,"Game_Console_TOP bg2_scy", false,-1, 15,0);
        tracep->declBus(c+295,"Game_Console_TOP chr1_wx", false,-1, 15,0);
        tracep->declBus(c+296,"Game_Console_TOP chr1_wy", false,-1, 15,0);
        tracep->declBus(c+295,"Game_Console_TOP chr1_scx", false,-1, 15,0);
        tracep->declBus(c+296,"Game_Console_TOP chr1_scy", false,-1, 15,0);
        tracep->declBus(c+297,"Game_Console_TOP chr2_wx", false,-1, 15,0);
        tracep->declBus(c+298,"Game_Console_TOP chr2_wy", false,-1, 15,0);
        tracep->declBus(c+297,"Game_Console_TOP chr2_scx", false,-1, 15,0);
        tracep->declBus(c+298,"Game_Console_TOP chr2_scy", false,-1, 15,0);
        tracep->declBus(c+299,"Game_Console_TOP chr3_wx", false,-1, 15,0);
        tracep->declBus(c+300,"Game_Console_TOP chr3_wy", false,-1, 15,0);
        tracep->declBus(c+299,"Game_Console_TOP chr3_scx", false,-1, 15,0);
        tracep->declBus(c+300,"Game_Console_TOP chr3_scy", false,-1, 15,0);
        tracep->declBus(c+301,"Game_Console_TOP chr4_wx", false,-1, 15,0);
        tracep->declBus(c+302,"Game_Console_TOP chr4_wy", false,-1, 15,0);
        tracep->declBus(c+301,"Game_Console_TOP chr4_scx", false,-1, 15,0);
        tracep->declBus(c+302,"Game_Console_TOP chr4_scy", false,-1, 15,0);
        tracep->declBus(c+303,"Game_Console_TOP scr_wx", false,-1, 15,0);
        tracep->declBus(c+304,"Game_Console_TOP scr_wy", false,-1, 15,0);
        tracep->declBus(c+303,"Game_Console_TOP scr_scx", false,-1, 15,0);
        tracep->declBus(c+304,"Game_Console_TOP scr_scy", false,-1, 15,0);
        tracep->declBus(c+305,"Game_Console_TOP stat_wx", false,-1, 15,0);
        tracep->declBus(c+306,"Game_Console_TOP stat_wy", false,-1, 15,0);
        tracep->declBus(c+305,"Game_Console_TOP stat_scx", false,-1, 15,0);
        tracep->declBus(c+306,"Game_Console_TOP stat_scy", false,-1, 15,0);
        tracep->declBus(c+307,"Game_Console_TOP uni1_wx", false,-1, 15,0);
        tracep->declBus(c+308,"Game_Console_TOP uni1_wy", false,-1, 15,0);
        tracep->declBus(c+307,"Game_Console_TOP uni1_scx", false,-1, 15,0);
        tracep->declBus(c+308,"Game_Console_TOP uni1_scy", false,-1, 15,0);
        tracep->declBus(c+309,"Game_Console_TOP uni2_wx", false,-1, 15,0);
        tracep->declBus(c+310,"Game_Console_TOP uni2_wy", false,-1, 15,0);
        tracep->declBus(c+309,"Game_Console_TOP uni2_scx", false,-1, 15,0);
        tracep->declBus(c+310,"Game_Console_TOP uni2_scy", false,-1, 15,0);
        tracep->declBus(c+311,"Game_Console_TOP bg1_a", false,-1, 7,0);
        tracep->declBus(c+312,"Game_Console_TOP bg1_z", false,-1, 7,0);
        tracep->declBus(c+313,"Game_Console_TOP bg2_a", false,-1, 7,0);
        tracep->declBus(c+314,"Game_Console_TOP bg2_z", false,-1, 7,0);
        tracep->declBus(c+315,"Game_Console_TOP chr1_a", false,-1, 7,0);
        tracep->declBus(c+316,"Game_Console_TOP chr1_z", false,-1, 7,0);
        tracep->declBus(c+317,"Game_Console_TOP chr2_a", false,-1, 7,0);
        tracep->declBus(c+318,"Game_Console_TOP chr2_z", false,-1, 7,0);
        tracep->declBus(c+319,"Game_Console_TOP chr3_a", false,-1, 7,0);
        tracep->declBus(c+320,"Game_Console_TOP chr3_z", false,-1, 7,0);
        tracep->declBus(c+321,"Game_Console_TOP chr4_a", false,-1, 7,0);
        tracep->declBus(c+322,"Game_Console_TOP chr4_z", false,-1, 7,0);
        tracep->declBus(c+323,"Game_Console_TOP scr_a", false,-1, 7,0);
        tracep->declBus(c+324,"Game_Console_TOP scr_z", false,-1, 7,0);
        tracep->declBus(c+325,"Game_Console_TOP stat_a", false,-1, 7,0);
        tracep->declBus(c+326,"Game_Console_TOP stat_z", false,-1, 7,0);
        tracep->declBus(c+327,"Game_Console_TOP uni1_a", false,-1, 7,0);
        tracep->declBus(c+328,"Game_Console_TOP uni1_z", false,-1, 7,0);
        tracep->declBus(c+329,"Game_Console_TOP uni2_a", false,-1, 7,0);
        tracep->declBus(c+330,"Game_Console_TOP uni2_z", false,-1, 7,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+331+i*1,"Game_Console_TOP line_visible", true,(i+0), 7,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+346+i*1,"Game_Console_TOP line_rgb", true,(i+0), 8,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+361+i*1,"Game_Console_TOP line_alpha", true,(i+0), 2,0);}}
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_COUNTERS", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_COUNTERS64", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_REGS_16_31", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_REGS_DUALPORT", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu LATCHED_MEM_RDATA", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu TWO_STAGE_SHIFT", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu BARREL_SHIFTER", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu TWO_CYCLE_COMPARE", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu TWO_CYCLE_ALU", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu COMPRESSED_ISA", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu CATCH_MISALIGN", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu CATCH_ILLINSN", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu ENABLE_PCPI", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_MUL", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu ENABLE_FAST_MUL", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_DIV", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_IRQ", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_IRQ_QREGS", false,-1, 0,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu ENABLE_IRQ_TIMER", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu ENABLE_TRACE", false,-1, 0,0);
        tracep->declBus(c+2650,"Game_Console_TOP u_cpu REGS_INIT_ZERO", false,-1, 0,0);
        tracep->declBus(c+2647,"Game_Console_TOP u_cpu MASKED_IRQ", false,-1, 31,0);
        tracep->declBus(c+2651,"Game_Console_TOP u_cpu LATCHED_IRQ", false,-1, 31,0);
        tracep->declBus(c+2647,"Game_Console_TOP u_cpu PROGADDR_RESET", false,-1, 31,0);
        tracep->declBus(c+2652,"Game_Console_TOP u_cpu PROGADDR_IRQ", false,-1, 31,0);
        tracep->declBus(c+2645,"Game_Console_TOP u_cpu STACKADDR", false,-1, 31,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_cpu clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_cpu resetn", false,-1);
        tracep->declBit(c+1810,"Game_Console_TOP u_cpu trap", false,-1);
        tracep->declBit(c+161,"Game_Console_TOP u_cpu mem_valid", false,-1);
        tracep->declBit(c+162,"Game_Console_TOP u_cpu mem_instr", false,-1);
        tracep->declBit(c+1975,"Game_Console_TOP u_cpu mem_ready", false,-1);
        tracep->declBus(c+1806,"Game_Console_TOP u_cpu mem_addr", false,-1, 31,0);
        tracep->declBus(c+163,"Game_Console_TOP u_cpu mem_wdata", false,-1, 31,0);
        tracep->declBus(c+164,"Game_Console_TOP u_cpu mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+1976,"Game_Console_TOP u_cpu mem_rdata", false,-1, 31,0);
        tracep->declBit(c+1977,"Game_Console_TOP u_cpu mem_la_read", false,-1);
        tracep->declBit(c+1978,"Game_Console_TOP u_cpu mem_la_write", false,-1);
        tracep->declBus(c+1807,"Game_Console_TOP u_cpu mem_la_addr", false,-1, 31,0);
        tracep->declBus(c+1808,"Game_Console_TOP u_cpu mem_la_wdata", false,-1, 31,0);
        tracep->declBus(c+1809,"Game_Console_TOP u_cpu mem_la_wstrb", false,-1, 3,0);
        tracep->declBit(c+1811,"Game_Console_TOP u_cpu pcpi_valid", false,-1);
        tracep->declBus(c+1812,"Game_Console_TOP u_cpu pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+1813,"Game_Console_TOP u_cpu pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+1814,"Game_Console_TOP u_cpu pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_cpu pcpi_wr", false,-1);
        tracep->declBus(c+2647,"Game_Console_TOP u_cpu pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_cpu pcpi_wait", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_cpu pcpi_ready", false,-1);
        tracep->declBus(c+2639,"Game_Console_TOP u_cpu irq", false,-1, 31,0);
        tracep->declBus(c+1815,"Game_Console_TOP u_cpu eoi", false,-1, 31,0);
        tracep->declBit(c+165,"Game_Console_TOP u_cpu trace_valid", false,-1);
        tracep->declQuad(c+166,"Game_Console_TOP u_cpu trace_data", false,-1, 35,0);
        tracep->declBus(c+2653,"Game_Console_TOP u_cpu irq_timer", false,-1, 31,0);
        tracep->declBus(c+2654,"Game_Console_TOP u_cpu irq_ebreak", false,-1, 31,0);
        tracep->declBus(c+2655,"Game_Console_TOP u_cpu irq_buserror", false,-1, 31,0);
        tracep->declBus(c+2656,"Game_Console_TOP u_cpu irqregs_offset", false,-1, 31,0);
        tracep->declBus(c+2657,"Game_Console_TOP u_cpu regfile_size", false,-1, 31,0);
        tracep->declBus(c+2658,"Game_Console_TOP u_cpu regindex_bits", false,-1, 31,0);
        tracep->declBus(c+2649,"Game_Console_TOP u_cpu WITH_PCPI", false,-1, 0,0);
        tracep->declQuad(c+2659,"Game_Console_TOP u_cpu TRACE_BRANCH", false,-1, 35,0);
        tracep->declQuad(c+2661,"Game_Console_TOP u_cpu TRACE_ADDR", false,-1, 35,0);
        tracep->declQuad(c+2663,"Game_Console_TOP u_cpu TRACE_IRQ", false,-1, 35,0);
        tracep->declQuad(c+1816,"Game_Console_TOP u_cpu count_cycle", false,-1, 63,0);
        tracep->declQuad(c+1818,"Game_Console_TOP u_cpu count_instr", false,-1, 63,0);
        tracep->declBus(c+1820,"Game_Console_TOP u_cpu reg_pc", false,-1, 31,0);
        tracep->declBus(c+1821,"Game_Console_TOP u_cpu reg_next_pc", false,-1, 31,0);
        tracep->declBus(c+1813,"Game_Console_TOP u_cpu reg_op1", false,-1, 31,0);
        tracep->declBus(c+1814,"Game_Console_TOP u_cpu reg_op2", false,-1, 31,0);
        tracep->declBus(c+1822,"Game_Console_TOP u_cpu reg_out", false,-1, 31,0);
        tracep->declBus(c+1823,"Game_Console_TOP u_cpu reg_sh", false,-1, 4,0);
        tracep->declBus(c+168,"Game_Console_TOP u_cpu next_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+169,"Game_Console_TOP u_cpu dbg_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+170,"Game_Console_TOP u_cpu dbg_insn_addr", false,-1, 31,0);
        tracep->declBit(c+161,"Game_Console_TOP u_cpu dbg_mem_valid", false,-1);
        tracep->declBit(c+162,"Game_Console_TOP u_cpu dbg_mem_instr", false,-1);
        tracep->declBit(c+1975,"Game_Console_TOP u_cpu dbg_mem_ready", false,-1);
        tracep->declBus(c+1806,"Game_Console_TOP u_cpu dbg_mem_addr", false,-1, 31,0);
        tracep->declBus(c+163,"Game_Console_TOP u_cpu dbg_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+164,"Game_Console_TOP u_cpu dbg_mem_wstrb", false,-1, 3,0);
        tracep->declBus(c+1976,"Game_Console_TOP u_cpu dbg_mem_rdata", false,-1, 31,0);
        tracep->declBus(c+1824,"Game_Console_TOP u_cpu next_pc", false,-1, 31,0);
        tracep->declBit(c+1825,"Game_Console_TOP u_cpu irq_delay", false,-1);
        tracep->declBit(c+1826,"Game_Console_TOP u_cpu irq_active", false,-1);
        tracep->declBus(c+1827,"Game_Console_TOP u_cpu irq_mask", false,-1, 31,0);
        tracep->declBus(c+1828,"Game_Console_TOP u_cpu irq_pending", false,-1, 31,0);
        tracep->declBus(c+1829,"Game_Console_TOP u_cpu timer", false,-1, 31,0);
        tracep->declBus(c+2665,"Game_Console_TOP u_cpu i", false,-1, 31,0);
        tracep->declBit(c+171,"Game_Console_TOP u_cpu pcpi_mul_wr", false,-1);
        tracep->declBus(c+172,"Game_Console_TOP u_cpu pcpi_mul_rd", false,-1, 31,0);
        tracep->declBit(c+1830,"Game_Console_TOP u_cpu pcpi_mul_wait", false,-1);
        tracep->declBit(c+173,"Game_Console_TOP u_cpu pcpi_mul_ready", false,-1);
        tracep->declBit(c+174,"Game_Console_TOP u_cpu pcpi_div_wr", false,-1);
        tracep->declBus(c+175,"Game_Console_TOP u_cpu pcpi_div_rd", false,-1, 31,0);
        tracep->declBit(c+1831,"Game_Console_TOP u_cpu pcpi_div_wait", false,-1);
        tracep->declBit(c+176,"Game_Console_TOP u_cpu pcpi_div_ready", false,-1);
        tracep->declBit(c+1832,"Game_Console_TOP u_cpu pcpi_int_wr", false,-1);
        tracep->declBus(c+1833,"Game_Console_TOP u_cpu pcpi_int_rd", false,-1, 31,0);
        tracep->declBit(c+1834,"Game_Console_TOP u_cpu pcpi_int_wait", false,-1);
        tracep->declBit(c+1835,"Game_Console_TOP u_cpu pcpi_int_ready", false,-1);
        tracep->declBus(c+177,"Game_Console_TOP u_cpu mem_state", false,-1, 1,0);
        tracep->declBus(c+1836,"Game_Console_TOP u_cpu mem_wordsize", false,-1, 1,0);
        tracep->declBus(c+2000,"Game_Console_TOP u_cpu mem_rdata_word", false,-1, 31,0);
        tracep->declBus(c+1837,"Game_Console_TOP u_cpu mem_rdata_q", false,-1, 31,0);
        tracep->declBit(c+1838,"Game_Console_TOP u_cpu mem_do_prefetch", false,-1);
        tracep->declBit(c+1839,"Game_Console_TOP u_cpu mem_do_rinst", false,-1);
        tracep->declBit(c+1840,"Game_Console_TOP u_cpu mem_do_rdata", false,-1);
        tracep->declBit(c+1841,"Game_Console_TOP u_cpu mem_do_wdata", false,-1);
        tracep->declBit(c+2001,"Game_Console_TOP u_cpu mem_xfer", false,-1);
        tracep->declBit(c+178,"Game_Console_TOP u_cpu mem_la_secondword", false,-1);
        tracep->declBit(c+179,"Game_Console_TOP u_cpu mem_la_firstword_reg", false,-1);
        tracep->declBit(c+180,"Game_Console_TOP u_cpu last_mem_valid", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_cpu mem_la_firstword", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_cpu mem_la_firstword_xfer", false,-1);
        tracep->declBit(c+181,"Game_Console_TOP u_cpu prefetched_high_word", false,-1);
        tracep->declBit(c+2002,"Game_Console_TOP u_cpu clear_prefetched_high_word", false,-1);
        tracep->declBus(c+2666,"Game_Console_TOP u_cpu mem_16bit_buffer", false,-1, 15,0);
        tracep->declBus(c+2003,"Game_Console_TOP u_cpu mem_rdata_latched_noshuffle", false,-1, 31,0);
        tracep->declBus(c+2003,"Game_Console_TOP u_cpu mem_rdata_latched", false,-1, 31,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_cpu mem_la_use_prefetched_high_word", false,-1);
        tracep->declBit(c+1842,"Game_Console_TOP u_cpu mem_busy", false,-1);
        tracep->declBit(c+2004,"Game_Console_TOP u_cpu mem_done", false,-1);
        tracep->declBit(c+1843,"Game_Console_TOP u_cpu instr_lui", false,-1);
        tracep->declBit(c+1844,"Game_Console_TOP u_cpu instr_auipc", false,-1);
        tracep->declBit(c+1845,"Game_Console_TOP u_cpu instr_jal", false,-1);
        tracep->declBit(c+1846,"Game_Console_TOP u_cpu instr_jalr", false,-1);
        tracep->declBit(c+1847,"Game_Console_TOP u_cpu instr_beq", false,-1);
        tracep->declBit(c+1848,"Game_Console_TOP u_cpu instr_bne", false,-1);
        tracep->declBit(c+1849,"Game_Console_TOP u_cpu instr_blt", false,-1);
        tracep->declBit(c+1850,"Game_Console_TOP u_cpu instr_bge", false,-1);
        tracep->declBit(c+1851,"Game_Console_TOP u_cpu instr_bltu", false,-1);
        tracep->declBit(c+1852,"Game_Console_TOP u_cpu instr_bgeu", false,-1);
        tracep->declBit(c+1853,"Game_Console_TOP u_cpu instr_lb", false,-1);
        tracep->declBit(c+1854,"Game_Console_TOP u_cpu instr_lh", false,-1);
        tracep->declBit(c+1855,"Game_Console_TOP u_cpu instr_lw", false,-1);
        tracep->declBit(c+1856,"Game_Console_TOP u_cpu instr_lbu", false,-1);
        tracep->declBit(c+1857,"Game_Console_TOP u_cpu instr_lhu", false,-1);
        tracep->declBit(c+1858,"Game_Console_TOP u_cpu instr_sb", false,-1);
        tracep->declBit(c+1859,"Game_Console_TOP u_cpu instr_sh", false,-1);
        tracep->declBit(c+1860,"Game_Console_TOP u_cpu instr_sw", false,-1);
        tracep->declBit(c+1861,"Game_Console_TOP u_cpu instr_addi", false,-1);
        tracep->declBit(c+1862,"Game_Console_TOP u_cpu instr_slti", false,-1);
        tracep->declBit(c+1863,"Game_Console_TOP u_cpu instr_sltiu", false,-1);
        tracep->declBit(c+1864,"Game_Console_TOP u_cpu instr_xori", false,-1);
        tracep->declBit(c+1865,"Game_Console_TOP u_cpu instr_ori", false,-1);
        tracep->declBit(c+1866,"Game_Console_TOP u_cpu instr_andi", false,-1);
        tracep->declBit(c+1867,"Game_Console_TOP u_cpu instr_slli", false,-1);
        tracep->declBit(c+1868,"Game_Console_TOP u_cpu instr_srli", false,-1);
        tracep->declBit(c+1869,"Game_Console_TOP u_cpu instr_srai", false,-1);
        tracep->declBit(c+1870,"Game_Console_TOP u_cpu instr_add", false,-1);
        tracep->declBit(c+1871,"Game_Console_TOP u_cpu instr_sub", false,-1);
        tracep->declBit(c+1872,"Game_Console_TOP u_cpu instr_sll", false,-1);
        tracep->declBit(c+1873,"Game_Console_TOP u_cpu instr_slt", false,-1);
        tracep->declBit(c+1874,"Game_Console_TOP u_cpu instr_sltu", false,-1);
        tracep->declBit(c+1875,"Game_Console_TOP u_cpu instr_xor", false,-1);
        tracep->declBit(c+1876,"Game_Console_TOP u_cpu instr_srl", false,-1);
        tracep->declBit(c+1877,"Game_Console_TOP u_cpu instr_sra", false,-1);
        tracep->declBit(c+1878,"Game_Console_TOP u_cpu instr_or", false,-1);
        tracep->declBit(c+1879,"Game_Console_TOP u_cpu instr_and", false,-1);
        tracep->declBit(c+1880,"Game_Console_TOP u_cpu instr_rdcycle", false,-1);
        tracep->declBit(c+1881,"Game_Console_TOP u_cpu instr_rdcycleh", false,-1);
        tracep->declBit(c+1882,"Game_Console_TOP u_cpu instr_rdinstr", false,-1);
        tracep->declBit(c+1883,"Game_Console_TOP u_cpu instr_rdinstrh", false,-1);
        tracep->declBit(c+1884,"Game_Console_TOP u_cpu instr_ecall_ebreak", false,-1);
        tracep->declBit(c+182,"Game_Console_TOP u_cpu instr_fence", false,-1);
        tracep->declBit(c+1885,"Game_Console_TOP u_cpu instr_getq", false,-1);
        tracep->declBit(c+1886,"Game_Console_TOP u_cpu instr_setq", false,-1);
        tracep->declBit(c+1887,"Game_Console_TOP u_cpu instr_retirq", false,-1);
        tracep->declBit(c+1888,"Game_Console_TOP u_cpu instr_maskirq", false,-1);
        tracep->declBit(c+1889,"Game_Console_TOP u_cpu instr_waitirq", false,-1);
        tracep->declBit(c+1890,"Game_Console_TOP u_cpu instr_timer", false,-1);
        tracep->declBit(c+1891,"Game_Console_TOP u_cpu instr_trap", false,-1);
        tracep->declBus(c+1892,"Game_Console_TOP u_cpu decoded_rd", false,-1, 5,0);
        tracep->declBus(c+183,"Game_Console_TOP u_cpu decoded_rs1", false,-1, 5,0);
        tracep->declBus(c+1893,"Game_Console_TOP u_cpu decoded_rs2", false,-1, 4,0);
        tracep->declBus(c+1894,"Game_Console_TOP u_cpu decoded_imm", false,-1, 31,0);
        tracep->declBus(c+1895,"Game_Console_TOP u_cpu decoded_imm_j", false,-1, 31,0);
        tracep->declBit(c+1896,"Game_Console_TOP u_cpu decoder_trigger", false,-1);
        tracep->declBit(c+1897,"Game_Console_TOP u_cpu decoder_trigger_q", false,-1);
        tracep->declBit(c+1898,"Game_Console_TOP u_cpu decoder_pseudo_trigger", false,-1);
        tracep->declBit(c+184,"Game_Console_TOP u_cpu decoder_pseudo_trigger_q", false,-1);
        tracep->declBit(c+1899,"Game_Console_TOP u_cpu compressed_instr", false,-1);
        tracep->declBit(c+1900,"Game_Console_TOP u_cpu is_lui_auipc_jal", false,-1);
        tracep->declBit(c+1901,"Game_Console_TOP u_cpu is_lb_lh_lw_lbu_lhu", false,-1);
        tracep->declBit(c+1902,"Game_Console_TOP u_cpu is_slli_srli_srai", false,-1);
        tracep->declBit(c+1903,"Game_Console_TOP u_cpu is_jalr_addi_slti_sltiu_xori_ori_andi", false,-1);
        tracep->declBit(c+1904,"Game_Console_TOP u_cpu is_sb_sh_sw", false,-1);
        tracep->declBit(c+1905,"Game_Console_TOP u_cpu is_sll_srl_sra", false,-1);
        tracep->declBit(c+1906,"Game_Console_TOP u_cpu is_lui_auipc_jal_jalr_addi_add_sub", false,-1);
        tracep->declBit(c+1907,"Game_Console_TOP u_cpu is_slti_blt_slt", false,-1);
        tracep->declBit(c+1908,"Game_Console_TOP u_cpu is_sltiu_bltu_sltu", false,-1);
        tracep->declBit(c+1909,"Game_Console_TOP u_cpu is_beq_bne_blt_bge_bltu_bgeu", false,-1);
        tracep->declBit(c+1910,"Game_Console_TOP u_cpu is_lbu_lhu_lw", false,-1);
        tracep->declBit(c+1911,"Game_Console_TOP u_cpu is_alu_reg_imm", false,-1);
        tracep->declBit(c+1912,"Game_Console_TOP u_cpu is_alu_reg_reg", false,-1);
        tracep->declBit(c+1913,"Game_Console_TOP u_cpu is_compare", false,-1);
        tracep->declBit(c+1914,"Game_Console_TOP u_cpu is_rdcycle_rdcycleh_rdinstr_rdinstrh", false,-1);
        tracep->declQuad(c+1915,"Game_Console_TOP u_cpu new_ascii_instr", false,-1, 63,0);
        tracep->declQuad(c+1917,"Game_Console_TOP u_cpu dbg_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+1919,"Game_Console_TOP u_cpu dbg_insn_imm", false,-1, 31,0);
        tracep->declBus(c+185,"Game_Console_TOP u_cpu dbg_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+1920,"Game_Console_TOP u_cpu dbg_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+1921,"Game_Console_TOP u_cpu dbg_insn_rd", false,-1, 4,0);
        tracep->declBus(c+1922,"Game_Console_TOP u_cpu dbg_rs1val", false,-1, 31,0);
        tracep->declBus(c+1923,"Game_Console_TOP u_cpu dbg_rs2val", false,-1, 31,0);
        tracep->declBit(c+1924,"Game_Console_TOP u_cpu dbg_rs1val_valid", false,-1);
        tracep->declBit(c+1925,"Game_Console_TOP u_cpu dbg_rs2val_valid", false,-1);
        tracep->declQuad(c+186,"Game_Console_TOP u_cpu q_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+188,"Game_Console_TOP u_cpu q_insn_imm", false,-1, 31,0);
        tracep->declBus(c+189,"Game_Console_TOP u_cpu q_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+190,"Game_Console_TOP u_cpu q_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+191,"Game_Console_TOP u_cpu q_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+192,"Game_Console_TOP u_cpu q_insn_rd", false,-1, 4,0);
        tracep->declBit(c+193,"Game_Console_TOP u_cpu dbg_next", false,-1);
        tracep->declBit(c+1926,"Game_Console_TOP u_cpu launch_next_insn", false,-1);
        tracep->declBit(c+194,"Game_Console_TOP u_cpu dbg_valid_insn", false,-1);
        tracep->declQuad(c+195,"Game_Console_TOP u_cpu cached_ascii_instr", false,-1, 63,0);
        tracep->declBus(c+197,"Game_Console_TOP u_cpu cached_insn_imm", false,-1, 31,0);
        tracep->declBus(c+198,"Game_Console_TOP u_cpu cached_insn_opcode", false,-1, 31,0);
        tracep->declBus(c+199,"Game_Console_TOP u_cpu cached_insn_rs1", false,-1, 4,0);
        tracep->declBus(c+200,"Game_Console_TOP u_cpu cached_insn_rs2", false,-1, 4,0);
        tracep->declBus(c+201,"Game_Console_TOP u_cpu cached_insn_rd", false,-1, 4,0);
        tracep->declBus(c+2667,"Game_Console_TOP u_cpu cpu_state_trap", false,-1, 7,0);
        tracep->declBus(c+2668,"Game_Console_TOP u_cpu cpu_state_fetch", false,-1, 7,0);
        tracep->declBus(c+2669,"Game_Console_TOP u_cpu cpu_state_ld_rs1", false,-1, 7,0);
        tracep->declBus(c+2670,"Game_Console_TOP u_cpu cpu_state_ld_rs2", false,-1, 7,0);
        tracep->declBus(c+2671,"Game_Console_TOP u_cpu cpu_state_exec", false,-1, 7,0);
        tracep->declBus(c+2672,"Game_Console_TOP u_cpu cpu_state_shift", false,-1, 7,0);
        tracep->declBus(c+2673,"Game_Console_TOP u_cpu cpu_state_stmem", false,-1, 7,0);
        tracep->declBus(c+2674,"Game_Console_TOP u_cpu cpu_state_ldmem", false,-1, 7,0);
        tracep->declBus(c+1927,"Game_Console_TOP u_cpu cpu_state", false,-1, 7,0);
        tracep->declBus(c+1928,"Game_Console_TOP u_cpu irq_state", false,-1, 1,0);
        tracep->declArray(c+1929,"Game_Console_TOP u_cpu dbg_ascii_state", false,-1, 127,0);
        tracep->declBit(c+1933,"Game_Console_TOP u_cpu set_mem_do_rinst", false,-1);
        tracep->declBit(c+1934,"Game_Console_TOP u_cpu set_mem_do_rdata", false,-1);
        tracep->declBit(c+1935,"Game_Console_TOP u_cpu set_mem_do_wdata", false,-1);
        tracep->declBit(c+1936,"Game_Console_TOP u_cpu latched_store", false,-1);
        tracep->declBit(c+1937,"Game_Console_TOP u_cpu latched_stalu", false,-1);
        tracep->declBit(c+1938,"Game_Console_TOP u_cpu latched_branch", false,-1);
        tracep->declBit(c+1939,"Game_Console_TOP u_cpu latched_compr", false,-1);
        tracep->declBit(c+202,"Game_Console_TOP u_cpu latched_trace", false,-1);
        tracep->declBit(c+1940,"Game_Console_TOP u_cpu latched_is_lu", false,-1);
        tracep->declBit(c+1941,"Game_Console_TOP u_cpu latched_is_lh", false,-1);
        tracep->declBit(c+1942,"Game_Console_TOP u_cpu latched_is_lb", false,-1);
        tracep->declBus(c+1943,"Game_Console_TOP u_cpu latched_rd", false,-1, 5,0);
        tracep->declBus(c+1944,"Game_Console_TOP u_cpu current_pc", false,-1, 31,0);
        tracep->declBus(c+1945,"Game_Console_TOP u_cpu pcpi_timeout_counter", false,-1, 3,0);
        tracep->declBit(c+1946,"Game_Console_TOP u_cpu pcpi_timeout", false,-1);
        tracep->declBus(c+1947,"Game_Console_TOP u_cpu next_irq_pending", false,-1, 31,0);
        tracep->declBit(c+1948,"Game_Console_TOP u_cpu do_waitirq", false,-1);
        tracep->declBus(c+1949,"Game_Console_TOP u_cpu alu_out", false,-1, 31,0);
        tracep->declBus(c+1950,"Game_Console_TOP u_cpu alu_out_q", false,-1, 31,0);
        tracep->declBit(c+1951,"Game_Console_TOP u_cpu alu_out_0", false,-1);
        tracep->declBit(c+203,"Game_Console_TOP u_cpu alu_out_0_q", false,-1);
        tracep->declBit(c+204,"Game_Console_TOP u_cpu alu_wait", false,-1);
        tracep->declBit(c+205,"Game_Console_TOP u_cpu alu_wait_2", false,-1);
        tracep->declBus(c+1952,"Game_Console_TOP u_cpu alu_add_sub", false,-1, 31,0);
        tracep->declBus(c+1953,"Game_Console_TOP u_cpu alu_shl", false,-1, 31,0);
        tracep->declBus(c+1954,"Game_Console_TOP u_cpu alu_shr", false,-1, 31,0);
        tracep->declBit(c+1955,"Game_Console_TOP u_cpu alu_eq", false,-1);
        tracep->declBit(c+1956,"Game_Console_TOP u_cpu alu_ltu", false,-1);
        tracep->declBit(c+1957,"Game_Console_TOP u_cpu alu_lts", false,-1);
        tracep->declBit(c+206,"Game_Console_TOP u_cpu clear_prefetched_high_word_q", false,-1);
        tracep->declBit(c+1958,"Game_Console_TOP u_cpu cpuregs_write", false,-1);
        tracep->declBus(c+1959,"Game_Console_TOP u_cpu cpuregs_wrdata", false,-1, 31,0);
        tracep->declBus(c+1960,"Game_Console_TOP u_cpu cpuregs_rs1", false,-1, 31,0);
        tracep->declBus(c+1961,"Game_Console_TOP u_cpu cpuregs_rs2", false,-1, 31,0);
        tracep->declBus(c+2675,"Game_Console_TOP u_cpu decoded_rs", false,-1, 5,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_cpu genblk2 pcpi_mul STEPS_AT_ONCE", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_cpu genblk2 pcpi_mul CARRY_CHAIN", false,-1, 31,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_cpu genblk2 pcpi_mul clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_cpu genblk2 pcpi_mul resetn", false,-1);
        tracep->declBit(c+1811,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_valid", false,-1);
        tracep->declBus(c+1812,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+1813,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+1814,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+171,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_wr", false,-1);
        tracep->declBus(c+172,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+1830,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_wait", false,-1);
        tracep->declBit(c+173,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_ready", false,-1);
        tracep->declBit(c+1962,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_mul", false,-1);
        tracep->declBit(c+1963,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_mulh", false,-1);
        tracep->declBit(c+1964,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_mulhsu", false,-1);
        tracep->declBit(c+1965,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_mulhu", false,-1);
        tracep->declBit(c+1966,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_any_mul", false,-1);
        tracep->declBit(c+1967,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_any_mulh", false,-1);
        tracep->declBit(c+1968,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_rs1_signed", false,-1);
        tracep->declBit(c+1963,"Game_Console_TOP u_cpu genblk2 pcpi_mul instr_rs2_signed", false,-1);
        tracep->declBit(c+207,"Game_Console_TOP u_cpu genblk2 pcpi_mul pcpi_wait_q", false,-1);
        tracep->declBit(c+2640,"Game_Console_TOP u_cpu genblk2 pcpi_mul mul_start", false,-1);
        tracep->declQuad(c+208,"Game_Console_TOP u_cpu genblk2 pcpi_mul rs1", false,-1, 63,0);
        tracep->declQuad(c+210,"Game_Console_TOP u_cpu genblk2 pcpi_mul rs2", false,-1, 63,0);
        tracep->declQuad(c+212,"Game_Console_TOP u_cpu genblk2 pcpi_mul rd", false,-1, 63,0);
        tracep->declQuad(c+214,"Game_Console_TOP u_cpu genblk2 pcpi_mul rdx", false,-1, 63,0);
        tracep->declQuad(c+216,"Game_Console_TOP u_cpu genblk2 pcpi_mul next_rs1", false,-1, 63,0);
        tracep->declQuad(c+218,"Game_Console_TOP u_cpu genblk2 pcpi_mul next_rs2", false,-1, 63,0);
        tracep->declQuad(c+220,"Game_Console_TOP u_cpu genblk2 pcpi_mul this_rs2", false,-1, 63,0);
        tracep->declQuad(c+222,"Game_Console_TOP u_cpu genblk2 pcpi_mul next_rd", false,-1, 63,0);
        tracep->declQuad(c+224,"Game_Console_TOP u_cpu genblk2 pcpi_mul next_rdx", false,-1, 63,0);
        tracep->declQuad(c+226,"Game_Console_TOP u_cpu genblk2 pcpi_mul next_rdt", false,-1, 63,0);
        tracep->declBus(c+228,"Game_Console_TOP u_cpu genblk2 pcpi_mul mul_counter", false,-1, 6,0);
        tracep->declBit(c+229,"Game_Console_TOP u_cpu genblk2 pcpi_mul mul_waiting", false,-1);
        tracep->declBit(c+230,"Game_Console_TOP u_cpu genblk2 pcpi_mul mul_finish", false,-1);
        tracep->declBus(c+2654,"Game_Console_TOP u_cpu genblk2 pcpi_mul i", false,-1, 31,0);
        tracep->declBus(c+2678,"Game_Console_TOP u_cpu genblk2 pcpi_mul j", false,-1, 31,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_cpu genblk4 pcpi_div clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_cpu genblk4 pcpi_div resetn", false,-1);
        tracep->declBit(c+1811,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_valid", false,-1);
        tracep->declBus(c+1812,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_insn", false,-1, 31,0);
        tracep->declBus(c+1813,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_rs1", false,-1, 31,0);
        tracep->declBus(c+1814,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_rs2", false,-1, 31,0);
        tracep->declBit(c+174,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_wr", false,-1);
        tracep->declBus(c+175,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_rd", false,-1, 31,0);
        tracep->declBit(c+1831,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_wait", false,-1);
        tracep->declBit(c+176,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_ready", false,-1);
        tracep->declBit(c+1969,"Game_Console_TOP u_cpu genblk4 pcpi_div instr_div", false,-1);
        tracep->declBit(c+1970,"Game_Console_TOP u_cpu genblk4 pcpi_div instr_divu", false,-1);
        tracep->declBit(c+1971,"Game_Console_TOP u_cpu genblk4 pcpi_div instr_rem", false,-1);
        tracep->declBit(c+1972,"Game_Console_TOP u_cpu genblk4 pcpi_div instr_remu", false,-1);
        tracep->declBit(c+1973,"Game_Console_TOP u_cpu genblk4 pcpi_div instr_any_div_rem", false,-1);
        tracep->declBit(c+231,"Game_Console_TOP u_cpu genblk4 pcpi_div pcpi_wait_q", false,-1);
        tracep->declBit(c+1974,"Game_Console_TOP u_cpu genblk4 pcpi_div start", false,-1);
        tracep->declBus(c+232,"Game_Console_TOP u_cpu genblk4 pcpi_div dividend", false,-1, 31,0);
        tracep->declQuad(c+233,"Game_Console_TOP u_cpu genblk4 pcpi_div divisor", false,-1, 62,0);
        tracep->declBus(c+235,"Game_Console_TOP u_cpu genblk4 pcpi_div quotient", false,-1, 31,0);
        tracep->declBus(c+236,"Game_Console_TOP u_cpu genblk4 pcpi_div quotient_msk", false,-1, 31,0);
        tracep->declBit(c+237,"Game_Console_TOP u_cpu genblk4 pcpi_div running", false,-1);
        tracep->declBit(c+238,"Game_Console_TOP u_cpu genblk4 pcpi_div outsign", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_icache clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_icache resetn", false,-1);
        tracep->declBit(c+161,"Game_Console_TOP u_icache CPU_valid", false,-1);
        tracep->declBit(c+162,"Game_Console_TOP u_icache CPU_instr", false,-1);
        tracep->declBit(c+1975,"Game_Console_TOP u_icache CPU_ready", false,-1);
        tracep->declBus(c+1806,"Game_Console_TOP u_icache CPU_addr", false,-1, 31,0);
        tracep->declBus(c+163,"Game_Console_TOP u_icache CPU_wdata", false,-1, 31,0);
        tracep->declBus(c+164,"Game_Console_TOP u_icache CPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+1976,"Game_Console_TOP u_icache CPU_rdata", false,-1, 31,0);
        tracep->declBit(c+1979,"Game_Console_TOP u_icache EMEM_valid", false,-1);
        tracep->declBit(c+1980,"Game_Console_TOP u_icache EMEM_ready", false,-1);
        tracep->declBus(c+1981,"Game_Console_TOP u_icache EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_icache EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+1984,"Game_Console_TOP u_icache EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+1983,"Game_Console_TOP u_icache EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+1985,"Game_Console_TOP u_icache EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+1986,"Game_Console_TOP u_icache EMEM_burst_en", false,-1);
        tracep->declBit(c+2480,"Game_Console_TOP u_icache BRAM0_wen", false,-1);
        tracep->declBus(c+2481,"Game_Console_TOP u_icache BRAM0_wstrb", false,-1, 7,0);
        tracep->declBus(c+2482,"Game_Console_TOP u_icache BRAM0_waddr", false,-1, 8,0);
        tracep->declArray(c+2483,"Game_Console_TOP u_icache BRAM0_din", false,-1, 71,0);
        tracep->declBit(c+2489,"Game_Console_TOP u_icache BRAM0_ren", false,-1);
        tracep->declBus(c+2490,"Game_Console_TOP u_icache BRAM0_raddr", false,-1, 8,0);
        tracep->declArray(c+2486,"Game_Console_TOP u_icache BRAM0_dout", false,-1, 71,0);
        tracep->declBit(c+2491,"Game_Console_TOP u_icache BRAM1_wen", false,-1);
        tracep->declBus(c+2492,"Game_Console_TOP u_icache BRAM1_wstrb", false,-1, 7,0);
        tracep->declBus(c+2493,"Game_Console_TOP u_icache BRAM1_waddr", false,-1, 8,0);
        tracep->declArray(c+2494,"Game_Console_TOP u_icache BRAM1_din", false,-1, 71,0);
        tracep->declBit(c+2500,"Game_Console_TOP u_icache BRAM1_ren", false,-1);
        tracep->declBus(c+2501,"Game_Console_TOP u_icache BRAM1_raddr", false,-1, 8,0);
        tracep->declArray(c+2497,"Game_Console_TOP u_icache BRAM1_dout", false,-1, 71,0);
        tracep->declBit(c+2502,"Game_Console_TOP u_icache BRAM2_wen", false,-1);
        tracep->declBus(c+2503,"Game_Console_TOP u_icache BRAM2_wstrb", false,-1, 7,0);
        tracep->declBus(c+2504,"Game_Console_TOP u_icache BRAM2_waddr", false,-1, 8,0);
        tracep->declArray(c+2505,"Game_Console_TOP u_icache BRAM2_din", false,-1, 71,0);
        tracep->declBit(c+2511,"Game_Console_TOP u_icache BRAM2_ren", false,-1);
        tracep->declBus(c+2512,"Game_Console_TOP u_icache BRAM2_raddr", false,-1, 8,0);
        tracep->declArray(c+2508,"Game_Console_TOP u_icache BRAM2_dout", false,-1, 71,0);
        tracep->declBit(c+2513,"Game_Console_TOP u_icache BRAM3_wen", false,-1);
        tracep->declBus(c+2514,"Game_Console_TOP u_icache BRAM3_wstrb", false,-1, 7,0);
        tracep->declBus(c+2515,"Game_Console_TOP u_icache BRAM3_waddr", false,-1, 8,0);
        tracep->declArray(c+2516,"Game_Console_TOP u_icache BRAM3_din", false,-1, 71,0);
        tracep->declBit(c+2522,"Game_Console_TOP u_icache BRAM3_ren", false,-1);
        tracep->declBus(c+2523,"Game_Console_TOP u_icache BRAM3_raddr", false,-1, 8,0);
        tracep->declArray(c+2519,"Game_Console_TOP u_icache BRAM3_dout", false,-1, 71,0);
        tracep->declBit(c+1987,"Game_Console_TOP u_icache cache_hit", false,-1);
        tracep->declBus(c+376,"Game_Console_TOP u_icache main_state", false,-1, 3,0);
        tracep->declBus(c+2005,"Game_Console_TOP u_icache main_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_icache IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_icache CACHE_SEARCH", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_icache DATA_REQ", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_icache EMEM_READ", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_icache EMEM_WRITE", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_icache CACHE_MISS", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_icache CACHE_WRITE", false,-1, 31,0);
        tracep->declBit(c+377,"Game_Console_TOP u_icache cpu_tag_save", false,-1);
        tracep->declBus(c+378,"Game_Console_TOP u_icache cpu_I_tag", false,-1, 14,0);
        tracep->declBus(c+379,"Game_Console_TOP u_icache burst_counter", false,-1, 3,0);
        tracep->declBit(c+2006,"Game_Console_TOP u_icache burst_counter_reset", false,-1);
        tracep->declBit(c+2007,"Game_Console_TOP u_icache burst_counter_plus", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+380+i*1,"Game_Console_TOP u_icache word_buffer", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+2008+i*1,"Game_Console_TOP u_icache word_buffer_wdata", true,(i+0), 31,0);}}
        tracep->declBit(c+2012,"Game_Console_TOP u_icache word_buffer_wen_0", false,-1);
        tracep->declBit(c+2013,"Game_Console_TOP u_icache word_buffer_wen_1", false,-1);
        tracep->declBit(c+2014,"Game_Console_TOP u_icache word_buffer_wen_2", false,-1);
        tracep->declBit(c+2015,"Game_Console_TOP u_icache word_buffer_wen_3", false,-1);
        tracep->declBit(c+384,"Game_Console_TOP u_icache random_bit", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_addr_decoder clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_addr_decoder resetn", false,-1);
        tracep->declBit(c+1979,"Game_Console_TOP u_addr_decoder EMEM_valid", false,-1);
        tracep->declBit(c+1980,"Game_Console_TOP u_addr_decoder EMEM_ready", false,-1);
        tracep->declBus(c+1981,"Game_Console_TOP u_addr_decoder EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+1984,"Game_Console_TOP u_addr_decoder EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+1983,"Game_Console_TOP u_addr_decoder EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+1985,"Game_Console_TOP u_addr_decoder EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+1986,"Game_Console_TOP u_addr_decoder EMEM_burst_en", false,-1);
        tracep->declBit(c+1996,"Game_Console_TOP u_addr_decoder DDR3_valid", false,-1);
        tracep->declBit(c+2465,"Game_Console_TOP u_addr_decoder DDR3_ready", false,-1);
        tracep->declBus(c+1981,"Game_Console_TOP u_addr_decoder DDR3_addr", false,-1, 31,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder DDR3_wdata", false,-1, 31,0);
        tracep->declBus(c+1997,"Game_Console_TOP u_addr_decoder DDR3_wstrb", false,-1, 3,0);
        tracep->declBus(c+2469,"Game_Console_TOP u_addr_decoder DDR3_rdata", false,-1, 31,0);
        tracep->declBus(c+1985,"Game_Console_TOP u_addr_decoder DDR3_burst_len", false,-1, 7,0);
        tracep->declBit(c+1986,"Game_Console_TOP u_addr_decoder DDR3_burst_en", false,-1);
        tracep->declBit(c+1800,"Game_Console_TOP u_addr_decoder LUT_we", false,-1);
        tracep->declBus(c+1988,"Game_Console_TOP u_addr_decoder LUT_addr_w", false,-1, 7,0);
        tracep->declBus(c+1989,"Game_Console_TOP u_addr_decoder LUT_data_in", false,-1, 17,0);
        tracep->declBit(c+1801,"Game_Console_TOP u_addr_decoder BRAM4_en_b", false,-1);
        tracep->declBus(c+1990,"Game_Console_TOP u_addr_decoder BRAM4_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1995,"Game_Console_TOP u_addr_decoder BRAM4_addr_b", false,-1, 9,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder BRAM4_din_b", false,-1, 31,0);
        tracep->declBus(c+2533,"Game_Console_TOP u_addr_decoder BRAM4_dout_b", false,-1, 31,0);
        tracep->declBit(c+1802,"Game_Console_TOP u_addr_decoder BRAM5_en_b", false,-1);
        tracep->declBus(c+1991,"Game_Console_TOP u_addr_decoder BRAM5_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1995,"Game_Console_TOP u_addr_decoder BRAM5_addr_b", false,-1, 9,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder BRAM5_din_b", false,-1, 31,0);
        tracep->declBus(c+2543,"Game_Console_TOP u_addr_decoder BRAM5_dout_b", false,-1, 31,0);
        tracep->declBit(c+1803,"Game_Console_TOP u_addr_decoder BRAM6_en_b", false,-1);
        tracep->declBus(c+1992,"Game_Console_TOP u_addr_decoder BRAM6_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1995,"Game_Console_TOP u_addr_decoder BRAM6_addr_b", false,-1, 9,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder BRAM6_din_b", false,-1, 31,0);
        tracep->declBus(c+2553,"Game_Console_TOP u_addr_decoder BRAM6_dout_b", false,-1, 31,0);
        tracep->declBit(c+1804,"Game_Console_TOP u_addr_decoder BRAM13_en_b", false,-1);
        tracep->declBus(c+1993,"Game_Console_TOP u_addr_decoder BRAM13_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1995,"Game_Console_TOP u_addr_decoder BRAM13_addr_b", false,-1, 9,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder BRAM13_din_b", false,-1, 31,0);
        tracep->declBus(c+2563,"Game_Console_TOP u_addr_decoder BRAM13_dout_b", false,-1, 31,0);
        tracep->declBit(c+1805,"Game_Console_TOP u_addr_decoder BRAM14_en_b", false,-1);
        tracep->declBus(c+1994,"Game_Console_TOP u_addr_decoder BRAM14_wstrb_b", false,-1, 3,0);
        tracep->declBus(c+1995,"Game_Console_TOP u_addr_decoder BRAM14_addr_b", false,-1, 9,0);
        tracep->declBus(c+1982,"Game_Console_TOP u_addr_decoder BRAM14_din_b", false,-1, 31,0);
        tracep->declBus(c+2573,"Game_Console_TOP u_addr_decoder BRAM14_dout_b", false,-1, 31,0);
        tracep->declBus(c+2462,"Game_Console_TOP u_addr_decoder joypad_state", false,-1, 7,0);
        tracep->declBit(c+2463,"Game_Console_TOP u_addr_decoder joypad_irq", false,-1);
        tracep->declBit(c+239,"Game_Console_TOP u_addr_decoder PPU_start", false,-1);
        tracep->declBus(c+246,"Game_Console_TOP u_addr_decoder o_bg1_addr", false,-1, 31,0);
        tracep->declBus(c+247,"Game_Console_TOP u_addr_decoder o_bg2_addr", false,-1, 31,0);
        tracep->declBus(c+248,"Game_Console_TOP u_addr_decoder o_chr1_addr", false,-1, 31,0);
        tracep->declBus(c+249,"Game_Console_TOP u_addr_decoder o_chr2_addr", false,-1, 31,0);
        tracep->declBus(c+250,"Game_Console_TOP u_addr_decoder o_chr3_addr", false,-1, 31,0);
        tracep->declBus(c+251,"Game_Console_TOP u_addr_decoder o_chr4_addr", false,-1, 31,0);
        tracep->declBus(c+252,"Game_Console_TOP u_addr_decoder o_scr_addr", false,-1, 31,0);
        tracep->declBus(c+253,"Game_Console_TOP u_addr_decoder o_stat_addr", false,-1, 31,0);
        tracep->declBus(c+254,"Game_Console_TOP u_addr_decoder o_uni1_addr", false,-1, 31,0);
        tracep->declBus(c+255,"Game_Console_TOP u_addr_decoder o_uni2_addr", false,-1, 31,0);
        tracep->declBus(c+256,"Game_Console_TOP u_addr_decoder o_lut_cache", false,-1, 31,0);
        tracep->declBus(c+257,"Game_Console_TOP u_addr_decoder o_bg1_pos", false,-1, 31,0);
        tracep->declBus(c+258,"Game_Console_TOP u_addr_decoder o_bg1_attr", false,-1, 31,0);
        tracep->declBus(c+259,"Game_Console_TOP u_addr_decoder o_bg2_pos", false,-1, 31,0);
        tracep->declBus(c+260,"Game_Console_TOP u_addr_decoder o_bg2_attr", false,-1, 31,0);
        tracep->declBus(c+261,"Game_Console_TOP u_addr_decoder o_chr1_pos", false,-1, 31,0);
        tracep->declBus(c+262,"Game_Console_TOP u_addr_decoder o_chr1_attr", false,-1, 31,0);
        tracep->declBus(c+263,"Game_Console_TOP u_addr_decoder o_chr2_pos", false,-1, 31,0);
        tracep->declBus(c+264,"Game_Console_TOP u_addr_decoder o_chr2_attr", false,-1, 31,0);
        tracep->declBus(c+265,"Game_Console_TOP u_addr_decoder o_chr3_pos", false,-1, 31,0);
        tracep->declBus(c+266,"Game_Console_TOP u_addr_decoder o_chr3_attr", false,-1, 31,0);
        tracep->declBus(c+267,"Game_Console_TOP u_addr_decoder o_chr4_pos", false,-1, 31,0);
        tracep->declBus(c+268,"Game_Console_TOP u_addr_decoder o_chr4_attr", false,-1, 31,0);
        tracep->declBus(c+269,"Game_Console_TOP u_addr_decoder o_scr_pos", false,-1, 31,0);
        tracep->declBus(c+270,"Game_Console_TOP u_addr_decoder o_scr_attr", false,-1, 31,0);
        tracep->declBus(c+271,"Game_Console_TOP u_addr_decoder o_stat_pos", false,-1, 31,0);
        tracep->declBus(c+272,"Game_Console_TOP u_addr_decoder o_stat_attr", false,-1, 31,0);
        tracep->declBus(c+273,"Game_Console_TOP u_addr_decoder o_uni1_pos", false,-1, 31,0);
        tracep->declBus(c+274,"Game_Console_TOP u_addr_decoder o_uni1_attr", false,-1, 31,0);
        tracep->declBus(c+275,"Game_Console_TOP u_addr_decoder o_uni2_pos", false,-1, 31,0);
        tracep->declBus(c+276,"Game_Console_TOP u_addr_decoder o_uni2_attr", false,-1, 31,0);
        tracep->declBus(c+277,"Game_Console_TOP u_addr_decoder o_line_cfg_0_1", false,-1, 31,0);
        tracep->declBus(c+278,"Game_Console_TOP u_addr_decoder o_line_cfg_2_3", false,-1, 31,0);
        tracep->declBus(c+279,"Game_Console_TOP u_addr_decoder o_line_cfg_4_5", false,-1, 31,0);
        tracep->declBus(c+280,"Game_Console_TOP u_addr_decoder o_line_cfg_6_7", false,-1, 31,0);
        tracep->declBus(c+281,"Game_Console_TOP u_addr_decoder o_line_cfg_8_9", false,-1, 31,0);
        tracep->declBus(c+282,"Game_Console_TOP u_addr_decoder o_line_cfg_10_11", false,-1, 31,0);
        tracep->declBus(c+283,"Game_Console_TOP u_addr_decoder o_line_cfg_12_13", false,-1, 31,0);
        tracep->declBus(c+284,"Game_Console_TOP u_addr_decoder o_line_cfg_14", false,-1, 31,0);
        tracep->declBus(c+285,"Game_Console_TOP u_addr_decoder o_line_alpha_0_7", false,-1, 31,0);
        tracep->declBus(c+286,"Game_Console_TOP u_addr_decoder o_line_alpha_8_14", false,-1, 31,0);
        tracep->declBus(c+385,"Game_Console_TOP u_addr_decoder o_ppu_start", false,-1, 31,0);
        tracep->declBus(c+2641,"Game_Console_TOP u_addr_decoder CONTROL_REG_BASE", false,-1, 31,0);
        tracep->declBus(c+2642,"Game_Console_TOP u_addr_decoder FONT_MAP_BASE", false,-1, 31,0);
        tracep->declBus(c+2643,"Game_Console_TOP u_addr_decoder FONT_DATA_BASE", false,-1, 31,0);
        tracep->declBus(c+2644,"Game_Console_TOP u_addr_decoder LOOKUP_TABLE_BASE", false,-1, 31,0);
        tracep->declBit(c+2016,"Game_Console_TOP u_addr_decoder sel_ddr3", false,-1);
        tracep->declBit(c+2017,"Game_Console_TOP u_addr_decoder sel_ppu_reg", false,-1);
        tracep->declBit(c+2018,"Game_Console_TOP u_addr_decoder sel_lut", false,-1);
        tracep->declBit(c+2019,"Game_Console_TOP u_addr_decoder sel_font_map", false,-1);
        tracep->declBit(c+2020,"Game_Console_TOP u_addr_decoder sel_bram4", false,-1);
        tracep->declBit(c+2021,"Game_Console_TOP u_addr_decoder sel_bram5", false,-1);
        tracep->declBit(c+2022,"Game_Console_TOP u_addr_decoder sel_bram6", false,-1);
        tracep->declBit(c+2023,"Game_Console_TOP u_addr_decoder sel_bram13", false,-1);
        tracep->declBus(c+386,"Game_Console_TOP u_addr_decoder main_state", false,-1, 3,0);
        tracep->declBus(c+2024,"Game_Console_TOP u_addr_decoder main_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_addr_decoder IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_addr_decoder READ_WRITE", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_addr_decoder DDR3_ACCESS", false,-1, 31,0);
        tracep->declBit(c+387,"Game_Console_TOP u_addr_decoder sampling_bram4_r", false,-1);
        tracep->declBit(c+388,"Game_Console_TOP u_addr_decoder sampling_bram4_w", false,-1);
        tracep->declBit(c+389,"Game_Console_TOP u_addr_decoder sampling_bram5_r", false,-1);
        tracep->declBit(c+390,"Game_Console_TOP u_addr_decoder sampling_bram5_w", false,-1);
        tracep->declBit(c+391,"Game_Console_TOP u_addr_decoder sampling_bram6_r", false,-1);
        tracep->declBit(c+392,"Game_Console_TOP u_addr_decoder sampling_bram6_w", false,-1);
        tracep->declBit(c+393,"Game_Console_TOP u_addr_decoder sampling_bram13_r", false,-1);
        tracep->declBit(c+394,"Game_Console_TOP u_addr_decoder sampling_bram13_w", false,-1);
        tracep->declBit(c+395,"Game_Console_TOP u_addr_decoder sampling_font_map_r", false,-1);
        tracep->declBit(c+396,"Game_Console_TOP u_addr_decoder sampling_font_map_w", false,-1);
        tracep->declBit(c+397,"Game_Console_TOP u_addr_decoder sampling_lut_w", false,-1);
        tracep->declBit(c+398,"Game_Console_TOP u_addr_decoder sampling_ppu_reg_r", false,-1);
        tracep->declBit(c+399,"Game_Console_TOP u_addr_decoder sampling_ppu_reg_w", false,-1);
        tracep->declBit(c+400,"Game_Console_TOP u_addr_decoder joypad_irq_pending", false,-1);
        tracep->declBus(c+401,"Game_Console_TOP u_addr_decoder joypad_state_latched", false,-1, 7,0);
        tracep->declBus(c+402,"Game_Console_TOP u_addr_decoder i", false,-1, 31,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu resetn", false,-1);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu PPU_start", false,-1);
        tracep->declBus(c+287,"Game_Console_TOP u_ppu CPU_LUT_Cache1_pixel", false,-1, 7,0);
        tracep->declBus(c+288,"Game_Console_TOP u_ppu CPU_LUT_Cache2_pixel", false,-1, 7,0);
        tracep->declBus(c+289,"Game_Console_TOP u_ppu CPU_LUT_Cache3_pixel", false,-1, 7,0);
        tracep->declBus(c+290,"Game_Console_TOP u_ppu CPU_LUT_Cache4_pixel", false,-1, 7,0);
        tracep->declBus(c+246,"Game_Console_TOP u_ppu Background_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+247,"Game_Console_TOP u_ppu Background_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+248,"Game_Console_TOP u_ppu Character_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+249,"Game_Console_TOP u_ppu Character_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+250,"Game_Console_TOP u_ppu Character_Layer3_Address", false,-1, 31,0);
        tracep->declBus(c+251,"Game_Console_TOP u_ppu Character_Layer4_Address", false,-1, 31,0);
        tracep->declBus(c+252,"Game_Console_TOP u_ppu Script_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+253,"Game_Console_TOP u_ppu Status_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+254,"Game_Console_TOP u_ppu Universal_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+255,"Game_Console_TOP u_ppu Universal_Layer2_Address", false,-1, 31,0);
        tracep->declBit(c+240,"Game_Console_TOP u_ppu EMEM_valid", false,-1);
        tracep->declBit(c+2473,"Game_Console_TOP u_ppu EMEM_ready", false,-1);
        tracep->declBus(c+241,"Game_Console_TOP u_ppu EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+242,"Game_Console_TOP u_ppu EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+243,"Game_Console_TOP u_ppu EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+2477,"Game_Console_TOP u_ppu EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+244,"Game_Console_TOP u_ppu EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+245,"Game_Console_TOP u_ppu EMEM_burst_en", false,-1);
        tracep->declBit(c+2574,"Game_Console_TOP u_ppu BRAM7_en_a", false,-1);
        tracep->declBus(c+2575,"Game_Console_TOP u_ppu BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+2576,"Game_Console_TOP u_ppu BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2577,"Game_Console_TOP u_ppu BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+2579,"Game_Console_TOP u_ppu BRAM7_en_b", false,-1);
        tracep->declBus(c+2580,"Game_Console_TOP u_ppu BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2581,"Game_Console_TOP u_ppu BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+2583,"Game_Console_TOP u_ppu BRAM8_en_a", false,-1);
        tracep->declBus(c+2584,"Game_Console_TOP u_ppu BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+2585,"Game_Console_TOP u_ppu BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2586,"Game_Console_TOP u_ppu BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+2588,"Game_Console_TOP u_ppu BRAM8_en_b", false,-1);
        tracep->declBus(c+2589,"Game_Console_TOP u_ppu BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2590,"Game_Console_TOP u_ppu BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+2592,"Game_Console_TOP u_ppu BRAM9_en_a", false,-1);
        tracep->declBus(c+2593,"Game_Console_TOP u_ppu BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+2594,"Game_Console_TOP u_ppu BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2595,"Game_Console_TOP u_ppu BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+2597,"Game_Console_TOP u_ppu BRAM9_en_b", false,-1);
        tracep->declBus(c+2598,"Game_Console_TOP u_ppu BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2599,"Game_Console_TOP u_ppu BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+2601,"Game_Console_TOP u_ppu BRAM10_en_a", false,-1);
        tracep->declBus(c+2602,"Game_Console_TOP u_ppu BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+2603,"Game_Console_TOP u_ppu BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2604,"Game_Console_TOP u_ppu BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+2606,"Game_Console_TOP u_ppu BRAM10_en_b", false,-1);
        tracep->declBus(c+2607,"Game_Console_TOP u_ppu BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP u_ppu BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+2610,"Game_Console_TOP u_ppu BRAM11_en_a", false,-1);
        tracep->declBus(c+2611,"Game_Console_TOP u_ppu BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+2612,"Game_Console_TOP u_ppu BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2613,"Game_Console_TOP u_ppu BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+2615,"Game_Console_TOP u_ppu BRAM11_en_b", false,-1);
        tracep->declBus(c+2616,"Game_Console_TOP u_ppu BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP u_ppu BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+2619,"Game_Console_TOP u_ppu BRAM12_en_a", false,-1);
        tracep->declBus(c+2620,"Game_Console_TOP u_ppu BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+2621,"Game_Console_TOP u_ppu BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2622,"Game_Console_TOP u_ppu BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+2624,"Game_Console_TOP u_ppu BRAM12_en_b", false,-1);
        tracep->declBus(c+2625,"Game_Console_TOP u_ppu BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2626,"Game_Console_TOP u_ppu BRAM12_dout_b", false,-1, 63,0);
        tracep->declBus(c+1998,"Game_Console_TOP u_ppu LUT_addr_r1", false,-1, 7,0);
        tracep->declBus(c+2632,"Game_Console_TOP u_ppu LUT_data_out1", false,-1, 17,0);
        tracep->declBus(c+1999,"Game_Console_TOP u_ppu LUT_addr_r2", false,-1, 7,0);
        tracep->declBus(c+2634,"Game_Console_TOP u_ppu LUT_data_out2", false,-1, 17,0);
        tracep->declBus(c+291,"Game_Console_TOP u_ppu Background1_WX", false,-1, 15,0);
        tracep->declBus(c+292,"Game_Console_TOP u_ppu Background1_WY", false,-1, 15,0);
        tracep->declBus(c+291,"Game_Console_TOP u_ppu Background1_SCX", false,-1, 15,0);
        tracep->declBus(c+292,"Game_Console_TOP u_ppu Background1_SCY", false,-1, 15,0);
        tracep->declBus(c+311,"Game_Console_TOP u_ppu Background1_a", false,-1, 7,0);
        tracep->declBus(c+312,"Game_Console_TOP u_ppu Background1_z", false,-1, 7,0);
        tracep->declBus(c+293,"Game_Console_TOP u_ppu Background2_WX", false,-1, 15,0);
        tracep->declBus(c+294,"Game_Console_TOP u_ppu Background2_WY", false,-1, 15,0);
        tracep->declBus(c+293,"Game_Console_TOP u_ppu Background2_SCX", false,-1, 15,0);
        tracep->declBus(c+294,"Game_Console_TOP u_ppu Background2_SCY", false,-1, 15,0);
        tracep->declBus(c+313,"Game_Console_TOP u_ppu Background2_a", false,-1, 7,0);
        tracep->declBus(c+314,"Game_Console_TOP u_ppu Background2_z", false,-1, 7,0);
        tracep->declBus(c+295,"Game_Console_TOP u_ppu Character1_WX", false,-1, 15,0);
        tracep->declBus(c+296,"Game_Console_TOP u_ppu Character1_WY", false,-1, 15,0);
        tracep->declBus(c+295,"Game_Console_TOP u_ppu Character1_SCX", false,-1, 15,0);
        tracep->declBus(c+296,"Game_Console_TOP u_ppu Character1_SCY", false,-1, 15,0);
        tracep->declBus(c+315,"Game_Console_TOP u_ppu Character1_a", false,-1, 7,0);
        tracep->declBus(c+316,"Game_Console_TOP u_ppu Character1_z", false,-1, 7,0);
        tracep->declBus(c+297,"Game_Console_TOP u_ppu Character2_WX", false,-1, 15,0);
        tracep->declBus(c+298,"Game_Console_TOP u_ppu Character2_WY", false,-1, 15,0);
        tracep->declBus(c+297,"Game_Console_TOP u_ppu Character2_SCX", false,-1, 15,0);
        tracep->declBus(c+298,"Game_Console_TOP u_ppu Character2_SCY", false,-1, 15,0);
        tracep->declBus(c+317,"Game_Console_TOP u_ppu Character2_a", false,-1, 7,0);
        tracep->declBus(c+318,"Game_Console_TOP u_ppu Character2_z", false,-1, 7,0);
        tracep->declBus(c+299,"Game_Console_TOP u_ppu Character3_WX", false,-1, 15,0);
        tracep->declBus(c+300,"Game_Console_TOP u_ppu Character3_WY", false,-1, 15,0);
        tracep->declBus(c+299,"Game_Console_TOP u_ppu Character3_SCX", false,-1, 15,0);
        tracep->declBus(c+300,"Game_Console_TOP u_ppu Character3_SCY", false,-1, 15,0);
        tracep->declBus(c+319,"Game_Console_TOP u_ppu Character3_a", false,-1, 7,0);
        tracep->declBus(c+320,"Game_Console_TOP u_ppu Character3_z", false,-1, 7,0);
        tracep->declBus(c+301,"Game_Console_TOP u_ppu Character4_WX", false,-1, 15,0);
        tracep->declBus(c+302,"Game_Console_TOP u_ppu Character4_WY", false,-1, 15,0);
        tracep->declBus(c+301,"Game_Console_TOP u_ppu Character4_SCX", false,-1, 15,0);
        tracep->declBus(c+302,"Game_Console_TOP u_ppu Character4_SCY", false,-1, 15,0);
        tracep->declBus(c+321,"Game_Console_TOP u_ppu Character4_a", false,-1, 7,0);
        tracep->declBus(c+322,"Game_Console_TOP u_ppu Character4_z", false,-1, 7,0);
        tracep->declBus(c+303,"Game_Console_TOP u_ppu Script_WX", false,-1, 15,0);
        tracep->declBus(c+304,"Game_Console_TOP u_ppu Script_WY", false,-1, 15,0);
        tracep->declBus(c+303,"Game_Console_TOP u_ppu Script_SCX", false,-1, 15,0);
        tracep->declBus(c+304,"Game_Console_TOP u_ppu Script_SCY", false,-1, 15,0);
        tracep->declBus(c+323,"Game_Console_TOP u_ppu Script_a", false,-1, 7,0);
        tracep->declBus(c+324,"Game_Console_TOP u_ppu Script_z", false,-1, 7,0);
        tracep->declBus(c+305,"Game_Console_TOP u_ppu Status_WX", false,-1, 15,0);
        tracep->declBus(c+306,"Game_Console_TOP u_ppu Status_WY", false,-1, 15,0);
        tracep->declBus(c+305,"Game_Console_TOP u_ppu Status_SCX", false,-1, 15,0);
        tracep->declBus(c+306,"Game_Console_TOP u_ppu Status_SCY", false,-1, 15,0);
        tracep->declBus(c+325,"Game_Console_TOP u_ppu Status_a", false,-1, 7,0);
        tracep->declBus(c+326,"Game_Console_TOP u_ppu Status_z", false,-1, 7,0);
        tracep->declBus(c+307,"Game_Console_TOP u_ppu Universal1_WX", false,-1, 15,0);
        tracep->declBus(c+308,"Game_Console_TOP u_ppu Universal1_WY", false,-1, 15,0);
        tracep->declBus(c+307,"Game_Console_TOP u_ppu Universal1_SCX", false,-1, 15,0);
        tracep->declBus(c+308,"Game_Console_TOP u_ppu Universal1_SCY", false,-1, 15,0);
        tracep->declBus(c+327,"Game_Console_TOP u_ppu Universal1_a", false,-1, 7,0);
        tracep->declBus(c+328,"Game_Console_TOP u_ppu Universal1_z", false,-1, 7,0);
        tracep->declBus(c+309,"Game_Console_TOP u_ppu Universal2_WX", false,-1, 15,0);
        tracep->declBus(c+310,"Game_Console_TOP u_ppu Universal2_WY", false,-1, 15,0);
        tracep->declBus(c+309,"Game_Console_TOP u_ppu Universal2_SCX", false,-1, 15,0);
        tracep->declBus(c+310,"Game_Console_TOP u_ppu Universal2_SCY", false,-1, 15,0);
        tracep->declBus(c+329,"Game_Console_TOP u_ppu Universal2_a", false,-1, 7,0);
        tracep->declBus(c+330,"Game_Console_TOP u_ppu Universal2_z", false,-1, 7,0);
        tracep->declBus(c+403,"Game_Console_TOP u_ppu Line0_visible_number", false,-1, 7,0);
        tracep->declBus(c+404,"Game_Console_TOP u_ppu Line1_visible_number", false,-1, 7,0);
        tracep->declBus(c+405,"Game_Console_TOP u_ppu Line2_visible_number", false,-1, 7,0);
        tracep->declBus(c+406,"Game_Console_TOP u_ppu Line3_visible_number", false,-1, 7,0);
        tracep->declBus(c+407,"Game_Console_TOP u_ppu Line4_visible_number", false,-1, 7,0);
        tracep->declBus(c+408,"Game_Console_TOP u_ppu Line5_visible_number", false,-1, 7,0);
        tracep->declBus(c+409,"Game_Console_TOP u_ppu Line6_visible_number", false,-1, 7,0);
        tracep->declBus(c+410,"Game_Console_TOP u_ppu Line7_visible_number", false,-1, 7,0);
        tracep->declBus(c+411,"Game_Console_TOP u_ppu Line8_visible_number", false,-1, 7,0);
        tracep->declBus(c+412,"Game_Console_TOP u_ppu Line9_visible_number", false,-1, 7,0);
        tracep->declBus(c+413,"Game_Console_TOP u_ppu Line10_visible_number", false,-1, 7,0);
        tracep->declBus(c+414,"Game_Console_TOP u_ppu Line11_visible_number", false,-1, 7,0);
        tracep->declBus(c+415,"Game_Console_TOP u_ppu Line12_visible_number", false,-1, 7,0);
        tracep->declBus(c+416,"Game_Console_TOP u_ppu Line13_visible_number", false,-1, 7,0);
        tracep->declBus(c+417,"Game_Console_TOP u_ppu Line14_visible_number", false,-1, 7,0);
        tracep->declBus(c+418,"Game_Console_TOP u_ppu Line0_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+419,"Game_Console_TOP u_ppu Line1_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+420,"Game_Console_TOP u_ppu Line2_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+421,"Game_Console_TOP u_ppu Line3_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+422,"Game_Console_TOP u_ppu Line4_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+423,"Game_Console_TOP u_ppu Line5_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+424,"Game_Console_TOP u_ppu Line6_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+425,"Game_Console_TOP u_ppu Line7_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+426,"Game_Console_TOP u_ppu Line8_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+427,"Game_Console_TOP u_ppu Line9_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+428,"Game_Console_TOP u_ppu Line10_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+429,"Game_Console_TOP u_ppu Line11_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+430,"Game_Console_TOP u_ppu Line12_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+431,"Game_Console_TOP u_ppu Line13_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+432,"Game_Console_TOP u_ppu Line14_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+433,"Game_Console_TOP u_ppu Line0_a", false,-1, 2,0);
        tracep->declBus(c+434,"Game_Console_TOP u_ppu Line1_a", false,-1, 2,0);
        tracep->declBus(c+435,"Game_Console_TOP u_ppu Line2_a", false,-1, 2,0);
        tracep->declBus(c+436,"Game_Console_TOP u_ppu Line3_a", false,-1, 2,0);
        tracep->declBus(c+437,"Game_Console_TOP u_ppu Line4_a", false,-1, 2,0);
        tracep->declBus(c+438,"Game_Console_TOP u_ppu Line5_a", false,-1, 2,0);
        tracep->declBus(c+439,"Game_Console_TOP u_ppu Line6_a", false,-1, 2,0);
        tracep->declBus(c+440,"Game_Console_TOP u_ppu Line7_a", false,-1, 2,0);
        tracep->declBus(c+441,"Game_Console_TOP u_ppu Line8_a", false,-1, 2,0);
        tracep->declBus(c+442,"Game_Console_TOP u_ppu Line9_a", false,-1, 2,0);
        tracep->declBus(c+443,"Game_Console_TOP u_ppu Line10_a", false,-1, 2,0);
        tracep->declBus(c+444,"Game_Console_TOP u_ppu Line11_a", false,-1, 2,0);
        tracep->declBus(c+445,"Game_Console_TOP u_ppu Line12_a", false,-1, 2,0);
        tracep->declBus(c+446,"Game_Console_TOP u_ppu Line13_a", false,-1, 2,0);
        tracep->declBus(c+447,"Game_Console_TOP u_ppu Line14_a", false,-1, 2,0);
        tracep->declBit(c+2635,"Game_Console_TOP u_ppu Final_pixel_valid", false,-1);
        tracep->declBus(c+2636,"Game_Console_TOP u_ppu Final_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+2637,"Game_Console_TOP u_ppu Font_Line_End", false,-1);
        tracep->declBit(c+2638,"Game_Console_TOP u_ppu Font_Frame_End", false,-1);
        tracep->declBit(c+2524,"Game_Console_TOP u_ppu BRAM4_en_a", false,-1);
        tracep->declBus(c+2525,"Game_Console_TOP u_ppu BRAM4_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2526,"Game_Console_TOP u_ppu BRAM4_addr_a", false,-1, 9,0);
        tracep->declBus(c+2527,"Game_Console_TOP u_ppu BRAM4_din_a", false,-1, 31,0);
        tracep->declBus(c+2528,"Game_Console_TOP u_ppu BRAM4_dout_a", false,-1, 31,0);
        tracep->declBit(c+2534,"Game_Console_TOP u_ppu BRAM5_en_a", false,-1);
        tracep->declBus(c+2535,"Game_Console_TOP u_ppu BRAM5_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2536,"Game_Console_TOP u_ppu BRAM5_addr_a", false,-1, 9,0);
        tracep->declBus(c+2537,"Game_Console_TOP u_ppu BRAM5_din_a", false,-1, 31,0);
        tracep->declBus(c+2538,"Game_Console_TOP u_ppu BRAM5_dout_a", false,-1, 31,0);
        tracep->declBit(c+2544,"Game_Console_TOP u_ppu BRAM6_en_a", false,-1);
        tracep->declBus(c+2545,"Game_Console_TOP u_ppu BRAM6_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2546,"Game_Console_TOP u_ppu BRAM6_addr_a", false,-1, 9,0);
        tracep->declBus(c+2547,"Game_Console_TOP u_ppu BRAM6_din_a", false,-1, 31,0);
        tracep->declBus(c+2548,"Game_Console_TOP u_ppu BRAM6_dout_a", false,-1, 31,0);
        tracep->declBit(c+2554,"Game_Console_TOP u_ppu BRAM13_en_a", false,-1);
        tracep->declBus(c+2555,"Game_Console_TOP u_ppu BRAM13_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2556,"Game_Console_TOP u_ppu BRAM13_addr_a", false,-1, 9,0);
        tracep->declBus(c+2557,"Game_Console_TOP u_ppu BRAM13_din_a", false,-1, 31,0);
        tracep->declBus(c+2558,"Game_Console_TOP u_ppu BRAM13_dout_a", false,-1, 31,0);
        tracep->declBit(c+2564,"Game_Console_TOP u_ppu BRAM14_en_a", false,-1);
        tracep->declBus(c+2565,"Game_Console_TOP u_ppu BRAM14_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2566,"Game_Console_TOP u_ppu BRAM14_addr_a", false,-1, 9,0);
        tracep->declBus(c+2567,"Game_Console_TOP u_ppu BRAM14_din_a", false,-1, 31,0);
        tracep->declBus(c+2568,"Game_Console_TOP u_ppu BRAM14_dout_a", false,-1, 31,0);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+449,"Game_Console_TOP u_ppu uni1_decomp_r_master", false,-1);
        tracep->declQuad(c+2025,"Game_Console_TOP u_ppu uni1_decomp_data", false,-1, 63,0);
        tracep->declBit(c+450,"Game_Console_TOP u_ppu uni1_decomp_empty", false,-1);
        tracep->declBit(c+451,"Game_Console_TOP u_ppu uni1_decomp_dequeue", false,-1);
        tracep->declBit(c+452,"Game_Console_TOP u_ppu uni2_decomp_r_master", false,-1);
        tracep->declQuad(c+2027,"Game_Console_TOP u_ppu uni2_decomp_data", false,-1, 63,0);
        tracep->declBit(c+453,"Game_Console_TOP u_ppu uni2_decomp_empty", false,-1);
        tracep->declBit(c+454,"Game_Console_TOP u_ppu uni2_decomp_dequeue", false,-1);
        tracep->declBit(c+455,"Game_Console_TOP u_ppu sc_decomp_r_master", false,-1);
        tracep->declQuad(c+2029,"Game_Console_TOP u_ppu sc_decomp_data", false,-1, 63,0);
        tracep->declBit(c+456,"Game_Console_TOP u_ppu sc_decomp_empty", false,-1);
        tracep->declBit(c+457,"Game_Console_TOP u_ppu sc_decomp_dequeue", false,-1);
        tracep->declBit(c+458,"Game_Console_TOP u_ppu st_decomp_r_master", false,-1);
        tracep->declQuad(c+2031,"Game_Console_TOP u_ppu st_decomp_data", false,-1, 63,0);
        tracep->declBit(c+459,"Game_Console_TOP u_ppu st_decomp_empty", false,-1);
        tracep->declBit(c+460,"Game_Console_TOP u_ppu st_decomp_dequeue", false,-1);
        tracep->declBit(c+461,"Game_Console_TOP u_ppu ch1_decomp_r_master", false,-1);
        tracep->declQuad(c+2033,"Game_Console_TOP u_ppu ch1_decomp_data", false,-1, 63,0);
        tracep->declBit(c+462,"Game_Console_TOP u_ppu ch1_decomp_empty", false,-1);
        tracep->declBit(c+463,"Game_Console_TOP u_ppu ch1_decomp_dequeue", false,-1);
        tracep->declBit(c+464,"Game_Console_TOP u_ppu ch2_decomp_r_master", false,-1);
        tracep->declQuad(c+2035,"Game_Console_TOP u_ppu ch2_decomp_data", false,-1, 63,0);
        tracep->declBit(c+465,"Game_Console_TOP u_ppu ch2_decomp_empty", false,-1);
        tracep->declBit(c+466,"Game_Console_TOP u_ppu ch2_decomp_dequeue", false,-1);
        tracep->declBit(c+467,"Game_Console_TOP u_ppu ch3_decomp_r_master", false,-1);
        tracep->declQuad(c+2037,"Game_Console_TOP u_ppu ch3_decomp_data", false,-1, 63,0);
        tracep->declBit(c+468,"Game_Console_TOP u_ppu ch3_decomp_empty", false,-1);
        tracep->declBit(c+469,"Game_Console_TOP u_ppu ch3_decomp_dequeue", false,-1);
        tracep->declBit(c+470,"Game_Console_TOP u_ppu ch4_decomp_r_master", false,-1);
        tracep->declQuad(c+2039,"Game_Console_TOP u_ppu ch4_decomp_data", false,-1, 63,0);
        tracep->declBit(c+471,"Game_Console_TOP u_ppu ch4_decomp_empty", false,-1);
        tracep->declBit(c+472,"Game_Console_TOP u_ppu ch4_decomp_dequeue", false,-1);
        tracep->declBit(c+473,"Game_Console_TOP u_ppu bg1_decomp_r_master", false,-1);
        tracep->declQuad(c+2041,"Game_Console_TOP u_ppu bg1_decomp_data", false,-1, 63,0);
        tracep->declBit(c+474,"Game_Console_TOP u_ppu bg1_decomp_empty", false,-1);
        tracep->declBit(c+475,"Game_Console_TOP u_ppu bg1_decomp_dequeue", false,-1);
        tracep->declBit(c+476,"Game_Console_TOP u_ppu bg2_decomp_r_master", false,-1);
        tracep->declQuad(c+2043,"Game_Console_TOP u_ppu bg2_decomp_data", false,-1, 63,0);
        tracep->declBit(c+477,"Game_Console_TOP u_ppu bg2_decomp_empty", false,-1);
        tracep->declBit(c+478,"Game_Console_TOP u_ppu bg2_decomp_dequeue", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu uni1_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu uni2_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu sc_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu st_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu ch1_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu ch2_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu ch3_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu ch4_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu bg1_decomp_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu bg2_decomp_ena", false,-1);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+2045+i*1,"Game_Console_TOP u_ppu Req_RGB", true,(i+1), 17,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBit(c+2057+i*1,"Game_Console_TOP u_ppu Req_trans", true,(i+1));}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBit(c+2069+i*1,"Game_Console_TOP u_ppu Req_end", true,(i+1));}}
        tracep->declBit(c+2081,"Game_Console_TOP u_ppu Req1_ena", false,-1);
        tracep->declBus(c+2082,"Game_Console_TOP u_ppu Req1_pixel", false,-1, 7,0);
        tracep->declBit(c+2083,"Game_Console_TOP u_ppu Req2_ena", false,-1);
        tracep->declBus(c+2084,"Game_Console_TOP u_ppu Req2_pixel", false,-1, 7,0);
        tracep->declBit(c+2085,"Game_Console_TOP u_ppu Req3_ena", false,-1);
        tracep->declBus(c+2086,"Game_Console_TOP u_ppu Req3_pixel", false,-1, 7,0);
        tracep->declBit(c+2087,"Game_Console_TOP u_ppu Req4_ena", false,-1);
        tracep->declBus(c+2088,"Game_Console_TOP u_ppu Req4_pixel", false,-1, 7,0);
        tracep->declBit(c+2089,"Game_Console_TOP u_ppu Req5_ena", false,-1);
        tracep->declBus(c+2090,"Game_Console_TOP u_ppu Req5_pixel", false,-1, 7,0);
        tracep->declBit(c+2091,"Game_Console_TOP u_ppu Req6_ena", false,-1);
        tracep->declBus(c+2092,"Game_Console_TOP u_ppu Req6_pixel", false,-1, 7,0);
        tracep->declBit(c+2093,"Game_Console_TOP u_ppu Req7_ena", false,-1);
        tracep->declBus(c+2094,"Game_Console_TOP u_ppu Req7_pixel", false,-1, 7,0);
        tracep->declBit(c+2095,"Game_Console_TOP u_ppu Req8_ena", false,-1);
        tracep->declBus(c+2096,"Game_Console_TOP u_ppu Req8_pixel", false,-1, 7,0);
        tracep->declBit(c+2097,"Game_Console_TOP u_ppu Req9_ena", false,-1);
        tracep->declBus(c+2098,"Game_Console_TOP u_ppu Req9_pixel", false,-1, 7,0);
        tracep->declBit(c+2099,"Game_Console_TOP u_ppu Req10_ena", false,-1);
        tracep->declBus(c+2100,"Game_Console_TOP u_ppu Req10_pixel", false,-1, 7,0);
        tracep->declBit(c+2101,"Game_Console_TOP u_ppu BG1_Pixel_valid", false,-1);
        tracep->declBus(c+479,"Game_Console_TOP u_ppu BG1_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+480,"Game_Console_TOP u_ppu BG1_Pixel_is_trans", false,-1);
        tracep->declBit(c+2102,"Game_Console_TOP u_ppu BG1_Pixel_ready", false,-1);
        tracep->declBit(c+2103,"Game_Console_TOP u_ppu BG2_Pixel_valid", false,-1);
        tracep->declBus(c+481,"Game_Console_TOP u_ppu BG2_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+482,"Game_Console_TOP u_ppu BG2_Pixel_is_trans", false,-1);
        tracep->declBit(c+2104,"Game_Console_TOP u_ppu BG2_Pixel_ready", false,-1);
        tracep->declBit(c+2105,"Game_Console_TOP u_ppu CH1_Pixel_valid", false,-1);
        tracep->declBus(c+483,"Game_Console_TOP u_ppu CH1_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+484,"Game_Console_TOP u_ppu CH1_Pixel_is_trans", false,-1);
        tracep->declBit(c+2106,"Game_Console_TOP u_ppu CH1_Pixel_ready", false,-1);
        tracep->declBit(c+2107,"Game_Console_TOP u_ppu CH2_Pixel_valid", false,-1);
        tracep->declBus(c+485,"Game_Console_TOP u_ppu CH2_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+486,"Game_Console_TOP u_ppu CH2_Pixel_is_trans", false,-1);
        tracep->declBit(c+2108,"Game_Console_TOP u_ppu CH2_Pixel_ready", false,-1);
        tracep->declBit(c+2109,"Game_Console_TOP u_ppu CH3_Pixel_valid", false,-1);
        tracep->declBus(c+487,"Game_Console_TOP u_ppu CH3_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+488,"Game_Console_TOP u_ppu CH3_Pixel_is_trans", false,-1);
        tracep->declBit(c+2110,"Game_Console_TOP u_ppu CH3_Pixel_ready", false,-1);
        tracep->declBit(c+2111,"Game_Console_TOP u_ppu CH4_Pixel_valid", false,-1);
        tracep->declBus(c+489,"Game_Console_TOP u_ppu CH4_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+490,"Game_Console_TOP u_ppu CH4_Pixel_is_trans", false,-1);
        tracep->declBit(c+2112,"Game_Console_TOP u_ppu CH4_Pixel_ready", false,-1);
        tracep->declBit(c+2113,"Game_Console_TOP u_ppu SC_Pixel_valid", false,-1);
        tracep->declBus(c+491,"Game_Console_TOP u_ppu SC_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+492,"Game_Console_TOP u_ppu SC_Pixel_is_trans", false,-1);
        tracep->declBit(c+2114,"Game_Console_TOP u_ppu SC_Pixel_ready", false,-1);
        tracep->declBit(c+2115,"Game_Console_TOP u_ppu ST_Pixel_valid", false,-1);
        tracep->declBus(c+493,"Game_Console_TOP u_ppu ST_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+494,"Game_Console_TOP u_ppu ST_Pixel_is_trans", false,-1);
        tracep->declBit(c+2116,"Game_Console_TOP u_ppu ST_Pixel_ready", false,-1);
        tracep->declBit(c+2117,"Game_Console_TOP u_ppu UN1_Pixel_valid", false,-1);
        tracep->declBus(c+495,"Game_Console_TOP u_ppu UN1_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+496,"Game_Console_TOP u_ppu UN1_Pixel_is_trans", false,-1);
        tracep->declBit(c+2118,"Game_Console_TOP u_ppu UN1_Pixel_ready", false,-1);
        tracep->declBit(c+2119,"Game_Console_TOP u_ppu UN2_Pixel_valid", false,-1);
        tracep->declBus(c+497,"Game_Console_TOP u_ppu UN2_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+498,"Game_Console_TOP u_ppu UN2_Pixel_is_trans", false,-1);
        tracep->declBit(c+2120,"Game_Console_TOP u_ppu UN2_Pixel_ready", false,-1);
        tracep->declBus(c+499,"Game_Console_TOP u_ppu proc_final_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+500,"Game_Console_TOP u_ppu proc_final_pixel_valid", false,-1);
        tracep->declBus(c+501,"Game_Console_TOP u_ppu font_mixed_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+502,"Game_Console_TOP u_ppu font_mixed_pixel_valid", false,-1);
        tracep->declBit(c+503,"Game_Console_TOP u_ppu font_line_end", false,-1);
        tracep->declBit(c+504,"Game_Console_TOP u_ppu font_frame_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo resetn", false,-1);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo PPU_start", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+254,"Game_Console_TOP u_ppu u_pixel_fifo Universal_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+255,"Game_Console_TOP u_ppu u_pixel_fifo Universal_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+252,"Game_Console_TOP u_ppu u_pixel_fifo Script_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+253,"Game_Console_TOP u_ppu u_pixel_fifo Status_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+248,"Game_Console_TOP u_ppu u_pixel_fifo Character_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+249,"Game_Console_TOP u_ppu u_pixel_fifo Character_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+250,"Game_Console_TOP u_ppu u_pixel_fifo Character_Layer3_Address", false,-1, 31,0);
        tracep->declBus(c+251,"Game_Console_TOP u_ppu u_pixel_fifo Character_Layer4_Address", false,-1, 31,0);
        tracep->declBus(c+246,"Game_Console_TOP u_ppu u_pixel_fifo Background_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+247,"Game_Console_TOP u_ppu u_pixel_fifo Background_Layer2_Address", false,-1, 31,0);
        tracep->declBit(c+240,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_valid", false,-1);
        tracep->declBit(c+2473,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_ready", false,-1);
        tracep->declBus(c+241,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+242,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+243,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+2477,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+244,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+245,"Game_Console_TOP u_ppu u_pixel_fifo EMEM_burst_en", false,-1);
        tracep->declBit(c+2574,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_en_a", false,-1);
        tracep->declBus(c+2575,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+2576,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2577,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+2579,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_en_b", false,-1);
        tracep->declBus(c+2580,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2581,"Game_Console_TOP u_ppu u_pixel_fifo BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+2583,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_en_a", false,-1);
        tracep->declBus(c+2584,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+2585,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2586,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+2588,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_en_b", false,-1);
        tracep->declBus(c+2589,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2590,"Game_Console_TOP u_ppu u_pixel_fifo BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+2592,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_en_a", false,-1);
        tracep->declBus(c+2593,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+2594,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2595,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+2597,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_en_b", false,-1);
        tracep->declBus(c+2598,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2599,"Game_Console_TOP u_ppu u_pixel_fifo BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+2601,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_en_a", false,-1);
        tracep->declBus(c+2602,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+2603,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2604,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+2606,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_en_b", false,-1);
        tracep->declBus(c+2607,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP u_ppu u_pixel_fifo BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+2610,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_en_a", false,-1);
        tracep->declBus(c+2611,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+2612,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2613,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+2615,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_en_b", false,-1);
        tracep->declBus(c+2616,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP u_ppu u_pixel_fifo BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+2619,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_en_a", false,-1);
        tracep->declBus(c+2620,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+2621,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2622,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+2624,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_en_b", false,-1);
        tracep->declBus(c+2625,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2626,"Game_Console_TOP u_ppu u_pixel_fifo BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo uni1_decomp_ena", false,-1);
        tracep->declBit(c+451,"Game_Console_TOP u_ppu u_pixel_fifo uni1_decomp_dequeue", false,-1);
        tracep->declBit(c+449,"Game_Console_TOP u_ppu u_pixel_fifo uni1_decomp_r_master", false,-1);
        tracep->declQuad(c+2025,"Game_Console_TOP u_ppu u_pixel_fifo uni1_decomp_data", false,-1, 63,0);
        tracep->declBit(c+450,"Game_Console_TOP u_ppu u_pixel_fifo uni1_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo uni2_decomp_ena", false,-1);
        tracep->declBit(c+454,"Game_Console_TOP u_ppu u_pixel_fifo uni2_decomp_dequeue", false,-1);
        tracep->declBit(c+452,"Game_Console_TOP u_ppu u_pixel_fifo uni2_decomp_r_master", false,-1);
        tracep->declQuad(c+2027,"Game_Console_TOP u_ppu u_pixel_fifo uni2_decomp_data", false,-1, 63,0);
        tracep->declBit(c+453,"Game_Console_TOP u_ppu u_pixel_fifo uni2_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo sc_decomp_ena", false,-1);
        tracep->declBit(c+457,"Game_Console_TOP u_ppu u_pixel_fifo sc_decomp_dequeue", false,-1);
        tracep->declBit(c+455,"Game_Console_TOP u_ppu u_pixel_fifo sc_decomp_r_master", false,-1);
        tracep->declQuad(c+2029,"Game_Console_TOP u_ppu u_pixel_fifo sc_decomp_data", false,-1, 63,0);
        tracep->declBit(c+456,"Game_Console_TOP u_ppu u_pixel_fifo sc_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo st_decomp_ena", false,-1);
        tracep->declBit(c+460,"Game_Console_TOP u_ppu u_pixel_fifo st_decomp_dequeue", false,-1);
        tracep->declBit(c+458,"Game_Console_TOP u_ppu u_pixel_fifo st_decomp_r_master", false,-1);
        tracep->declQuad(c+2031,"Game_Console_TOP u_ppu u_pixel_fifo st_decomp_data", false,-1, 63,0);
        tracep->declBit(c+459,"Game_Console_TOP u_ppu u_pixel_fifo st_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo ch1_decomp_ena", false,-1);
        tracep->declBit(c+463,"Game_Console_TOP u_ppu u_pixel_fifo ch1_decomp_dequeue", false,-1);
        tracep->declBit(c+461,"Game_Console_TOP u_ppu u_pixel_fifo ch1_decomp_r_master", false,-1);
        tracep->declQuad(c+2033,"Game_Console_TOP u_ppu u_pixel_fifo ch1_decomp_data", false,-1, 63,0);
        tracep->declBit(c+462,"Game_Console_TOP u_ppu u_pixel_fifo ch1_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo ch2_decomp_ena", false,-1);
        tracep->declBit(c+466,"Game_Console_TOP u_ppu u_pixel_fifo ch2_decomp_dequeue", false,-1);
        tracep->declBit(c+464,"Game_Console_TOP u_ppu u_pixel_fifo ch2_decomp_r_master", false,-1);
        tracep->declQuad(c+2035,"Game_Console_TOP u_ppu u_pixel_fifo ch2_decomp_data", false,-1, 63,0);
        tracep->declBit(c+465,"Game_Console_TOP u_ppu u_pixel_fifo ch2_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo ch3_decomp_ena", false,-1);
        tracep->declBit(c+469,"Game_Console_TOP u_ppu u_pixel_fifo ch3_decomp_dequeue", false,-1);
        tracep->declBit(c+467,"Game_Console_TOP u_ppu u_pixel_fifo ch3_decomp_r_master", false,-1);
        tracep->declQuad(c+2037,"Game_Console_TOP u_ppu u_pixel_fifo ch3_decomp_data", false,-1, 63,0);
        tracep->declBit(c+468,"Game_Console_TOP u_ppu u_pixel_fifo ch3_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo ch4_decomp_ena", false,-1);
        tracep->declBit(c+472,"Game_Console_TOP u_ppu u_pixel_fifo ch4_decomp_dequeue", false,-1);
        tracep->declBit(c+470,"Game_Console_TOP u_ppu u_pixel_fifo ch4_decomp_r_master", false,-1);
        tracep->declQuad(c+2039,"Game_Console_TOP u_ppu u_pixel_fifo ch4_decomp_data", false,-1, 63,0);
        tracep->declBit(c+471,"Game_Console_TOP u_ppu u_pixel_fifo ch4_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo bg1_decomp_ena", false,-1);
        tracep->declBit(c+475,"Game_Console_TOP u_ppu u_pixel_fifo bg1_decomp_dequeue", false,-1);
        tracep->declBit(c+473,"Game_Console_TOP u_ppu u_pixel_fifo bg1_decomp_r_master", false,-1);
        tracep->declQuad(c+2041,"Game_Console_TOP u_ppu u_pixel_fifo bg1_decomp_data", false,-1, 63,0);
        tracep->declBit(c+474,"Game_Console_TOP u_ppu u_pixel_fifo bg1_decomp_empty", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo bg2_decomp_ena", false,-1);
        tracep->declBit(c+478,"Game_Console_TOP u_ppu u_pixel_fifo bg2_decomp_dequeue", false,-1);
        tracep->declBit(c+476,"Game_Console_TOP u_ppu u_pixel_fifo bg2_decomp_r_master", false,-1);
        tracep->declQuad(c+2043,"Game_Console_TOP u_ppu u_pixel_fifo bg2_decomp_data", false,-1, 63,0);
        tracep->declBit(c+477,"Game_Console_TOP u_ppu u_pixel_fifo bg2_decomp_empty", false,-1);
        tracep->declBit(c+505,"Game_Console_TOP u_ppu u_pixel_fifo uni1_decomp_is_IDLE", false,-1);
        tracep->declBit(c+506,"Game_Console_TOP u_ppu u_pixel_fifo uni2_decomp_is_IDLE", false,-1);
        tracep->declBit(c+507,"Game_Console_TOP u_ppu u_pixel_fifo sc_decomp_is_IDLE", false,-1);
        tracep->declBit(c+508,"Game_Console_TOP u_ppu u_pixel_fifo st_decomp_is_IDLE", false,-1);
        tracep->declBit(c+509,"Game_Console_TOP u_ppu u_pixel_fifo ch1_decomp_is_IDLE", false,-1);
        tracep->declBit(c+510,"Game_Console_TOP u_ppu u_pixel_fifo ch2_decomp_is_IDLE", false,-1);
        tracep->declBit(c+511,"Game_Console_TOP u_ppu u_pixel_fifo ch3_decomp_is_IDLE", false,-1);
        tracep->declBit(c+512,"Game_Console_TOP u_ppu u_pixel_fifo ch4_decomp_is_IDLE", false,-1);
        tracep->declBit(c+513,"Game_Console_TOP u_ppu u_pixel_fifo bg1_decomp_is_IDLE", false,-1);
        tracep->declBit(c+514,"Game_Console_TOP u_ppu u_pixel_fifo bg2_decomp_is_IDLE", false,-1);
        tracep->declBit(c+515,"Game_Console_TOP u_ppu u_pixel_fifo All_Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+516,"Game_Console_TOP u_ppu u_pixel_fifo bg1_comp_ena", false,-1);
        tracep->declBit(c+517,"Game_Console_TOP u_ppu u_pixel_fifo bg1_comp_dequeue", false,-1);
        tracep->declBit(c+518,"Game_Console_TOP u_ppu u_pixel_fifo bg1_comp_r_master", false,-1);
        tracep->declQuad(c+2121,"Game_Console_TOP u_ppu u_pixel_fifo bg1_comp_data", false,-1, 63,0);
        tracep->declBus(c+519,"Game_Console_TOP u_ppu u_pixel_fifo bg1_comp_count", false,-1, 8,0);
        tracep->declBit(c+520,"Game_Console_TOP u_ppu u_pixel_fifo bg2_comp_ena", false,-1);
        tracep->declBit(c+521,"Game_Console_TOP u_ppu u_pixel_fifo bg2_comp_dequeue", false,-1);
        tracep->declBit(c+522,"Game_Console_TOP u_ppu u_pixel_fifo bg2_comp_r_master", false,-1);
        tracep->declQuad(c+2123,"Game_Console_TOP u_ppu u_pixel_fifo bg2_comp_data", false,-1, 63,0);
        tracep->declBus(c+523,"Game_Console_TOP u_ppu u_pixel_fifo bg2_comp_count", false,-1, 8,0);
        tracep->declBit(c+524,"Game_Console_TOP u_ppu u_pixel_fifo ch1_comp_ena", false,-1);
        tracep->declBit(c+525,"Game_Console_TOP u_ppu u_pixel_fifo ch1_comp_dequeue", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo ch1_comp_r_master", false,-1);
        tracep->declQuad(c+2125,"Game_Console_TOP u_ppu u_pixel_fifo ch1_comp_data", false,-1, 63,0);
        tracep->declBus(c+527,"Game_Console_TOP u_ppu u_pixel_fifo ch1_comp_count", false,-1, 7,0);
        tracep->declBit(c+528,"Game_Console_TOP u_ppu u_pixel_fifo ch2_comp_ena", false,-1);
        tracep->declBit(c+529,"Game_Console_TOP u_ppu u_pixel_fifo ch2_comp_dequeue", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo ch2_comp_r_master", false,-1);
        tracep->declQuad(c+2127,"Game_Console_TOP u_ppu u_pixel_fifo ch2_comp_data", false,-1, 63,0);
        tracep->declBus(c+531,"Game_Console_TOP u_ppu u_pixel_fifo ch2_comp_count", false,-1, 7,0);
        tracep->declBit(c+532,"Game_Console_TOP u_ppu u_pixel_fifo ch3_comp_ena", false,-1);
        tracep->declBit(c+533,"Game_Console_TOP u_ppu u_pixel_fifo ch3_comp_dequeue", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo ch3_comp_r_master", false,-1);
        tracep->declQuad(c+2129,"Game_Console_TOP u_ppu u_pixel_fifo ch3_comp_data", false,-1, 63,0);
        tracep->declBus(c+535,"Game_Console_TOP u_ppu u_pixel_fifo ch3_comp_count", false,-1, 7,0);
        tracep->declBit(c+536,"Game_Console_TOP u_ppu u_pixel_fifo ch4_comp_ena", false,-1);
        tracep->declBit(c+537,"Game_Console_TOP u_ppu u_pixel_fifo ch4_comp_dequeue", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo ch4_comp_r_master", false,-1);
        tracep->declQuad(c+2131,"Game_Console_TOP u_ppu u_pixel_fifo ch4_comp_data", false,-1, 63,0);
        tracep->declBus(c+539,"Game_Console_TOP u_ppu u_pixel_fifo ch4_comp_count", false,-1, 7,0);
        tracep->declBit(c+540,"Game_Console_TOP u_ppu u_pixel_fifo uni1_comp_ena", false,-1);
        tracep->declBit(c+541,"Game_Console_TOP u_ppu u_pixel_fifo uni1_comp_dequeue", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo uni1_comp_r_master", false,-1);
        tracep->declQuad(c+2133,"Game_Console_TOP u_ppu u_pixel_fifo uni1_comp_data", false,-1, 63,0);
        tracep->declBus(c+542,"Game_Console_TOP u_ppu u_pixel_fifo uni1_comp_count", false,-1, 7,0);
        tracep->declBit(c+543,"Game_Console_TOP u_ppu u_pixel_fifo uni2_comp_ena", false,-1);
        tracep->declBit(c+544,"Game_Console_TOP u_ppu u_pixel_fifo uni2_comp_dequeue", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo uni2_comp_r_master", false,-1);
        tracep->declQuad(c+2135,"Game_Console_TOP u_ppu u_pixel_fifo uni2_comp_data", false,-1, 63,0);
        tracep->declBus(c+545,"Game_Console_TOP u_ppu u_pixel_fifo uni2_comp_count", false,-1, 7,0);
        tracep->declBit(c+546,"Game_Console_TOP u_ppu u_pixel_fifo sc_comp_ena", false,-1);
        tracep->declBit(c+547,"Game_Console_TOP u_ppu u_pixel_fifo sc_comp_dequeue", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo sc_comp_r_master", false,-1);
        tracep->declQuad(c+2137,"Game_Console_TOP u_ppu u_pixel_fifo sc_comp_data", false,-1, 63,0);
        tracep->declBus(c+548,"Game_Console_TOP u_ppu u_pixel_fifo sc_comp_count", false,-1, 7,0);
        tracep->declBit(c+549,"Game_Console_TOP u_ppu u_pixel_fifo st_comp_ena", false,-1);
        tracep->declBit(c+550,"Game_Console_TOP u_ppu u_pixel_fifo st_comp_dequeue", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo st_comp_r_master", false,-1);
        tracep->declQuad(c+2139,"Game_Console_TOP u_ppu u_pixel_fifo st_comp_data", false,-1, 63,0);
        tracep->declBus(c+551,"Game_Console_TOP u_ppu u_pixel_fifo st_comp_count", false,-1, 7,0);
        tracep->declBit(c+552,"Game_Console_TOP u_ppu u_pixel_fifo un1_b10_en_a", false,-1);
        tracep->declBit(c+553,"Game_Console_TOP u_ppu u_pixel_fifo un1_b10_we_a", false,-1);
        tracep->declBit(c+554,"Game_Console_TOP u_ppu u_pixel_fifo un1_b10_en_b", false,-1);
        tracep->declBus(c+555,"Game_Console_TOP u_ppu u_pixel_fifo un1_b10_addr_a", false,-1, 8,0);
        tracep->declBus(c+556,"Game_Console_TOP u_ppu u_pixel_fifo un1_b10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+557,"Game_Console_TOP u_ppu u_pixel_fifo un1_b10_din_a", false,-1, 63,0);
        tracep->declBit(c+559,"Game_Console_TOP u_ppu u_pixel_fifo un2_b10_en_a", false,-1);
        tracep->declBit(c+560,"Game_Console_TOP u_ppu u_pixel_fifo un2_b10_we_a", false,-1);
        tracep->declBit(c+561,"Game_Console_TOP u_ppu u_pixel_fifo un2_b10_en_b", false,-1);
        tracep->declBus(c+562,"Game_Console_TOP u_ppu u_pixel_fifo un2_b10_addr_a", false,-1, 8,0);
        tracep->declBus(c+563,"Game_Console_TOP u_ppu u_pixel_fifo un2_b10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+564,"Game_Console_TOP u_ppu u_pixel_fifo un2_b10_din_a", false,-1, 63,0);
        tracep->declBit(c+566,"Game_Console_TOP u_ppu u_pixel_fifo sc_b10_en_a", false,-1);
        tracep->declBit(c+567,"Game_Console_TOP u_ppu u_pixel_fifo sc_b10_we_a", false,-1);
        tracep->declBit(c+568,"Game_Console_TOP u_ppu u_pixel_fifo sc_b10_en_b", false,-1);
        tracep->declBus(c+569,"Game_Console_TOP u_ppu u_pixel_fifo sc_b10_addr_a", false,-1, 8,0);
        tracep->declBus(c+570,"Game_Console_TOP u_ppu u_pixel_fifo sc_b10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+571,"Game_Console_TOP u_ppu u_pixel_fifo sc_b10_din_a", false,-1, 63,0);
        tracep->declBit(c+573,"Game_Console_TOP u_ppu u_pixel_fifo st_b10_en_a", false,-1);
        tracep->declBit(c+574,"Game_Console_TOP u_ppu u_pixel_fifo st_b10_we_a", false,-1);
        tracep->declBit(c+575,"Game_Console_TOP u_ppu u_pixel_fifo st_b10_en_b", false,-1);
        tracep->declBus(c+576,"Game_Console_TOP u_ppu u_pixel_fifo st_b10_addr_a", false,-1, 8,0);
        tracep->declBus(c+577,"Game_Console_TOP u_ppu u_pixel_fifo st_b10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+578,"Game_Console_TOP u_ppu u_pixel_fifo st_b10_din_a", false,-1, 63,0);
        tracep->declBit(c+580,"Game_Console_TOP u_ppu u_pixel_fifo ch1_b11_en_a", false,-1);
        tracep->declBit(c+581,"Game_Console_TOP u_ppu u_pixel_fifo ch1_b11_we_a", false,-1);
        tracep->declBit(c+582,"Game_Console_TOP u_ppu u_pixel_fifo ch1_b11_en_b", false,-1);
        tracep->declBus(c+583,"Game_Console_TOP u_ppu u_pixel_fifo ch1_b11_addr_a", false,-1, 8,0);
        tracep->declBus(c+584,"Game_Console_TOP u_ppu u_pixel_fifo ch1_b11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+585,"Game_Console_TOP u_ppu u_pixel_fifo ch1_b11_din_a", false,-1, 63,0);
        tracep->declBit(c+587,"Game_Console_TOP u_ppu u_pixel_fifo ch2_b11_en_a", false,-1);
        tracep->declBit(c+588,"Game_Console_TOP u_ppu u_pixel_fifo ch2_b11_we_a", false,-1);
        tracep->declBit(c+589,"Game_Console_TOP u_ppu u_pixel_fifo ch2_b11_en_b", false,-1);
        tracep->declBus(c+590,"Game_Console_TOP u_ppu u_pixel_fifo ch2_b11_addr_a", false,-1, 8,0);
        tracep->declBus(c+591,"Game_Console_TOP u_ppu u_pixel_fifo ch2_b11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+592,"Game_Console_TOP u_ppu u_pixel_fifo ch2_b11_din_a", false,-1, 63,0);
        tracep->declBit(c+594,"Game_Console_TOP u_ppu u_pixel_fifo ch3_b11_en_a", false,-1);
        tracep->declBit(c+595,"Game_Console_TOP u_ppu u_pixel_fifo ch3_b11_we_a", false,-1);
        tracep->declBit(c+596,"Game_Console_TOP u_ppu u_pixel_fifo ch3_b11_en_b", false,-1);
        tracep->declBus(c+597,"Game_Console_TOP u_ppu u_pixel_fifo ch3_b11_addr_a", false,-1, 8,0);
        tracep->declBus(c+598,"Game_Console_TOP u_ppu u_pixel_fifo ch3_b11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+599,"Game_Console_TOP u_ppu u_pixel_fifo ch3_b11_din_a", false,-1, 63,0);
        tracep->declBit(c+601,"Game_Console_TOP u_ppu u_pixel_fifo ch4_b11_en_a", false,-1);
        tracep->declBit(c+602,"Game_Console_TOP u_ppu u_pixel_fifo ch4_b11_we_a", false,-1);
        tracep->declBit(c+603,"Game_Console_TOP u_ppu u_pixel_fifo ch4_b11_en_b", false,-1);
        tracep->declBus(c+604,"Game_Console_TOP u_ppu u_pixel_fifo ch4_b11_addr_a", false,-1, 8,0);
        tracep->declBus(c+605,"Game_Console_TOP u_ppu u_pixel_fifo ch4_b11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+606,"Game_Console_TOP u_ppu u_pixel_fifo ch4_b11_din_a", false,-1, 63,0);
        tracep->declBit(c+608,"Game_Console_TOP u_ppu u_pixel_fifo bg1_b12_en_a", false,-1);
        tracep->declBit(c+609,"Game_Console_TOP u_ppu u_pixel_fifo bg1_b12_we_a", false,-1);
        tracep->declBit(c+610,"Game_Console_TOP u_ppu u_pixel_fifo bg1_b12_en_b", false,-1);
        tracep->declBus(c+611,"Game_Console_TOP u_ppu u_pixel_fifo bg1_b12_addr_a", false,-1, 8,0);
        tracep->declBus(c+612,"Game_Console_TOP u_ppu u_pixel_fifo bg1_b12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+613,"Game_Console_TOP u_ppu u_pixel_fifo bg1_b12_din_a", false,-1, 63,0);
        tracep->declBit(c+615,"Game_Console_TOP u_ppu u_pixel_fifo bg2_b12_en_a", false,-1);
        tracep->declBit(c+616,"Game_Console_TOP u_ppu u_pixel_fifo bg2_b12_we_a", false,-1);
        tracep->declBit(c+617,"Game_Console_TOP u_ppu u_pixel_fifo bg2_b12_en_b", false,-1);
        tracep->declBus(c+618,"Game_Console_TOP u_ppu u_pixel_fifo bg2_b12_addr_a", false,-1, 8,0);
        tracep->declBus(c+619,"Game_Console_TOP u_ppu u_pixel_fifo bg2_b12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+620,"Game_Console_TOP u_ppu u_pixel_fifo bg2_b12_din_a", false,-1, 63,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo clk_counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo PPU_start", false,-1);
        tracep->declBit(c+515,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo All_Decompresser_is_IDLE", false,-1);
        tracep->declBus(c+254,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+255,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+252,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Script_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+253,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Status_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+248,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+249,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+250,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer3_Address", false,-1, 31,0);
        tracep->declBus(c+251,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer4_Address", false,-1, 31,0);
        tracep->declBus(c+246,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+247,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer2_Address", false,-1, 31,0);
        tracep->declBit(c+240,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_valid", false,-1);
        tracep->declBit(c+2473,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_ready", false,-1);
        tracep->declBus(c+241,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+242,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+243,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+2477,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+244,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+245,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_burst_en", false,-1);
        tracep->declBit(c+2574,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_en_a", false,-1);
        tracep->declBus(c+2575,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+2576,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2577,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+2579,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_en_b", false,-1);
        tracep->declBus(c+2580,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2581,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+2583,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_en_a", false,-1);
        tracep->declBus(c+2584,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+2585,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2586,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+2588,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_en_b", false,-1);
        tracep->declBus(c+2589,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2590,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+2592,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_en_a", false,-1);
        tracep->declBus(c+2593,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+2594,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+2595,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+2597,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_en_b", false,-1);
        tracep->declBus(c+2598,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2599,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+516,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer1_ena", false,-1);
        tracep->declBit(c+517,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer1_dequeue", false,-1);
        tracep->declBit(c+518,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer1_r_master", false,-1);
        tracep->declQuad(c+2121,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+519,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer1_count", false,-1, 8,0);
        tracep->declBit(c+520,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer2_ena", false,-1);
        tracep->declBit(c+521,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer2_dequeue", false,-1);
        tracep->declBit(c+522,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer2_r_master", false,-1);
        tracep->declQuad(c+2123,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+523,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Background_Layer2_count", false,-1, 8,0);
        tracep->declBit(c+524,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer1_ena", false,-1);
        tracep->declBit(c+525,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer1_dequeue", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer1_r_master", false,-1);
        tracep->declQuad(c+2125,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+527,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer1_count", false,-1, 7,0);
        tracep->declBit(c+528,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer2_ena", false,-1);
        tracep->declBit(c+529,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer2_dequeue", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer2_r_master", false,-1);
        tracep->declQuad(c+2127,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+531,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer2_count", false,-1, 7,0);
        tracep->declBit(c+532,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer3_ena", false,-1);
        tracep->declBit(c+533,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer3_dequeue", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer3_r_master", false,-1);
        tracep->declQuad(c+2129,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer3_data", false,-1, 63,0);
        tracep->declBus(c+535,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer3_count", false,-1, 7,0);
        tracep->declBit(c+536,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer4_ena", false,-1);
        tracep->declBit(c+537,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer4_dequeue", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer4_r_master", false,-1);
        tracep->declQuad(c+2131,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer4_data", false,-1, 63,0);
        tracep->declBus(c+539,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Character_Layer4_count", false,-1, 7,0);
        tracep->declBit(c+546,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Script_Layer_ena", false,-1);
        tracep->declBit(c+547,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Script_Layer_dequeue", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Script_Layer_r_master", false,-1);
        tracep->declQuad(c+2137,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Script_Layer_data", false,-1, 63,0);
        tracep->declBus(c+548,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Script_Layer_count", false,-1, 7,0);
        tracep->declBit(c+549,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Status_Layer_ena", false,-1);
        tracep->declBit(c+550,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Status_Layer_dequeue", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Status_Layer_r_master", false,-1);
        tracep->declQuad(c+2139,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Status_Layer_data", false,-1, 63,0);
        tracep->declBus(c+551,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Status_Layer_count", false,-1, 7,0);
        tracep->declBit(c+540,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer1_ena", false,-1);
        tracep->declBit(c+541,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer1_dequeue", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer1_r_master", false,-1);
        tracep->declQuad(c+2133,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+542,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer1_count", false,-1, 7,0);
        tracep->declBit(c+543,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer2_ena", false,-1);
        tracep->declBit(c+544,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer2_dequeue", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer2_r_master", false,-1);
        tracep->declQuad(c+2135,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+545,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo Universal_Layer2_count", false,-1, 7,0);
        tracep->declBit(c+622,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_urgent", false,-1);
        tracep->declBus(c+542,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_count", false,-1, 7,0);
        tracep->declBus(c+623,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_front", false,-1, 7,0);
        tracep->declBus(c+624,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+625,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_urgent", false,-1);
        tracep->declBus(c+545,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_count", false,-1, 7,0);
        tracep->declBus(c+626,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_front", false,-1, 7,0);
        tracep->declBus(c+627,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+628,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_urgent", false,-1);
        tracep->declBus(c+548,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_count", false,-1, 7,0);
        tracep->declBus(c+629,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_front", false,-1, 7,0);
        tracep->declBus(c+630,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+631,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_urgent", false,-1);
        tracep->declBus(c+551,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_count", false,-1, 7,0);
        tracep->declBus(c+632,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_front", false,-1, 7,0);
        tracep->declBus(c+633,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+634,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_urgent", false,-1);
        tracep->declBus(c+527,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_count", false,-1, 7,0);
        tracep->declBus(c+635,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_front", false,-1, 7,0);
        tracep->declBus(c+636,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+637,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_urgent", false,-1);
        tracep->declBus(c+531,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_count", false,-1, 7,0);
        tracep->declBus(c+638,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_front", false,-1, 7,0);
        tracep->declBus(c+639,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+640,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_urgent", false,-1);
        tracep->declBus(c+535,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_count", false,-1, 7,0);
        tracep->declBus(c+641,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_front", false,-1, 7,0);
        tracep->declBus(c+642,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+643,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_urgent", false,-1);
        tracep->declBus(c+539,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_count", false,-1, 7,0);
        tracep->declBus(c+644,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_front", false,-1, 7,0);
        tracep->declBus(c+645,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+646,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_urgent", false,-1);
        tracep->declBus(c+519,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_count", false,-1, 8,0);
        tracep->declBus(c+647,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_front", false,-1, 8,0);
        tracep->declBus(c+648,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_rear", false,-1, 8,0);
        tracep->declBit(c+649,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_urgent", false,-1);
        tracep->declBus(c+523,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_count", false,-1, 8,0);
        tracep->declBus(c+650,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_front", false,-1, 8,0);
        tracep->declBus(c+651,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_rear", false,-1, 8,0);
        tracep->declBit(c+2141,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_inc_want", false,-1);
        tracep->declBit(c+652,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_dec_want", false,-1);
        tracep->declBit(c+2142,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_inc_want", false,-1);
        tracep->declBit(c+653,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_dec_want", false,-1);
        tracep->declBit(c+2143,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_inc_want", false,-1);
        tracep->declBit(c+654,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_dec_want", false,-1);
        tracep->declBit(c+2144,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_inc_want", false,-1);
        tracep->declBit(c+655,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_dec_want", false,-1);
        tracep->declBit(c+2145,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_inc_want", false,-1);
        tracep->declBit(c+656,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_dec_want", false,-1);
        tracep->declBit(c+2146,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_inc_want", false,-1);
        tracep->declBit(c+657,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_dec_want", false,-1);
        tracep->declBit(c+2147,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_inc_want", false,-1);
        tracep->declBit(c+658,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_dec_want", false,-1);
        tracep->declBit(c+2148,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_inc_want", false,-1);
        tracep->declBit(c+659,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_dec_want", false,-1);
        tracep->declBit(c+2149,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_inc_want", false,-1);
        tracep->declBit(c+660,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_dec_want", false,-1);
        tracep->declBit(c+2150,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_inc_want", false,-1);
        tracep->declBit(c+661,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_dec_want", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_fifo_r_master", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_fifo_r_master", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_fifo_r_master", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_fifo_r_master", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_fifo_r_master", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_fifo_r_master", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_fifo_r_master", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_fifo_r_master", false,-1);
        tracep->declBit(c+518,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_fifo_r_master", false,-1);
        tracep->declBit(c+522,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_fifo_r_master", false,-1);
        tracep->declBus(c+662,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo main_state", false,-1, 3,0);
        tracep->declBus(c+663,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_read_state", false,-1, 2,0);
        tracep->declBus(c+664,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM7_read_state_next", false,-1, 2,0);
        tracep->declBus(c+665,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_read_state", false,-1, 2,0);
        tracep->declBus(c+666,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM8_read_state_next", false,-1, 2,0);
        tracep->declBus(c+667,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_read_state", false,-1, 2,0);
        tracep->declBus(c+668,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo BRAM9_read_state_next", false,-1, 2,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo EMEM_READ", false,-1, 31,0);
        tracep->declBus(c+669,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni1_next_ad", false,-1, 31,0);
        tracep->declBus(c+670,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo uni2_next_ad", false,-1, 31,0);
        tracep->declBus(c+671,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo script_next_ad", false,-1, 31,0);
        tracep->declBus(c+672,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo status_next_ad", false,-1, 31,0);
        tracep->declBus(c+673,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char1_next_ad", false,-1, 31,0);
        tracep->declBus(c+674,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char2_next_ad", false,-1, 31,0);
        tracep->declBus(c+675,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char3_next_ad", false,-1, 31,0);
        tracep->declBus(c+676,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo char4_next_ad", false,-1, 31,0);
        tracep->declBus(c+677,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back1_next_ad", false,-1, 31,0);
        tracep->declBus(c+678,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo back2_next_ad", false,-1, 31,0);
        tracep->declBus(c+679,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo next_should_read_layer", false,-1, 9,0);
        tracep->declBus(c+680,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo last_read_basic", false,-1, 9,0);
        tracep->declBus(c+681,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo last_read_urgent", false,-1, 9,0);
        tracep->declBus(c+682,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo valid_req", false,-1, 9,0);
        tracep->declBus(c+683,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo urgent_req", false,-1, 9,0);
        tracep->declBus(c+684,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo basic_req", false,-1, 9,0);
        tracep->declBus(c+685,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo masked_req", false,-1, 9,0);
        tracep->declBit(c+686,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo round_end", false,-1);
        tracep->declBit(c+687,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo is_urgent_mode", false,-1);
        tracep->declBus(c+688,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo should_read_layer", false,-1, 9,0);
        tracep->declBus(c+689,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo emem_r_counter", false,-1, 7,0);
        tracep->declBus(c+690,"Game_Console_TOP u_ppu u_pixel_fifo u_compressed_fifo tem_32_reg", false,-1, 31,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_rgb clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_rgb resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_rgb Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_rgb PPU_start", false,-1);
        tracep->declBus(c+287,"Game_Console_TOP u_ppu u_rgb Cache1_pixel", false,-1, 7,0);
        tracep->declBus(c+288,"Game_Console_TOP u_ppu u_rgb Cache2_pixel", false,-1, 7,0);
        tracep->declBus(c+289,"Game_Console_TOP u_ppu u_rgb Cache3_pixel", false,-1, 7,0);
        tracep->declBus(c+290,"Game_Console_TOP u_ppu u_rgb Cache4_pixel", false,-1, 7,0);
        tracep->declBus(c+1998,"Game_Console_TOP u_ppu u_rgb LUT_addr_r1", false,-1, 7,0);
        tracep->declBus(c+2632,"Game_Console_TOP u_ppu u_rgb LUT_data_out1", false,-1, 17,0);
        tracep->declBus(c+1999,"Game_Console_TOP u_ppu u_rgb LUT_addr_r2", false,-1, 7,0);
        tracep->declBus(c+2634,"Game_Console_TOP u_ppu u_rgb LUT_data_out2", false,-1, 17,0);
        tracep->declBit(c+2081,"Game_Console_TOP u_ppu u_rgb Req1_ena", false,-1);
        tracep->declBus(c+2082,"Game_Console_TOP u_ppu u_rgb Req1_pixel", false,-1, 7,0);
        tracep->declBus(c+2151,"Game_Console_TOP u_ppu u_rgb Req1_RGB", false,-1, 17,0);
        tracep->declBit(c+2152,"Game_Console_TOP u_ppu u_rgb Req1_trans", false,-1);
        tracep->declBit(c+2153,"Game_Console_TOP u_ppu u_rgb Req1_end", false,-1);
        tracep->declBit(c+2083,"Game_Console_TOP u_ppu u_rgb Req2_ena", false,-1);
        tracep->declBus(c+2084,"Game_Console_TOP u_ppu u_rgb Req2_pixel", false,-1, 7,0);
        tracep->declBus(c+2154,"Game_Console_TOP u_ppu u_rgb Req2_RGB", false,-1, 17,0);
        tracep->declBit(c+2155,"Game_Console_TOP u_ppu u_rgb Req2_trans", false,-1);
        tracep->declBit(c+2156,"Game_Console_TOP u_ppu u_rgb Req2_end", false,-1);
        tracep->declBit(c+2085,"Game_Console_TOP u_ppu u_rgb Req3_ena", false,-1);
        tracep->declBus(c+2086,"Game_Console_TOP u_ppu u_rgb Req3_pixel", false,-1, 7,0);
        tracep->declBus(c+2157,"Game_Console_TOP u_ppu u_rgb Req3_RGB", false,-1, 17,0);
        tracep->declBit(c+2158,"Game_Console_TOP u_ppu u_rgb Req3_trans", false,-1);
        tracep->declBit(c+2159,"Game_Console_TOP u_ppu u_rgb Req3_end", false,-1);
        tracep->declBit(c+2087,"Game_Console_TOP u_ppu u_rgb Req4_ena", false,-1);
        tracep->declBus(c+2088,"Game_Console_TOP u_ppu u_rgb Req4_pixel", false,-1, 7,0);
        tracep->declBus(c+2160,"Game_Console_TOP u_ppu u_rgb Req4_RGB", false,-1, 17,0);
        tracep->declBit(c+2161,"Game_Console_TOP u_ppu u_rgb Req4_trans", false,-1);
        tracep->declBit(c+2162,"Game_Console_TOP u_ppu u_rgb Req4_end", false,-1);
        tracep->declBit(c+2089,"Game_Console_TOP u_ppu u_rgb Req5_ena", false,-1);
        tracep->declBus(c+2090,"Game_Console_TOP u_ppu u_rgb Req5_pixel", false,-1, 7,0);
        tracep->declBus(c+2163,"Game_Console_TOP u_ppu u_rgb Req5_RGB", false,-1, 17,0);
        tracep->declBit(c+2164,"Game_Console_TOP u_ppu u_rgb Req5_trans", false,-1);
        tracep->declBit(c+2165,"Game_Console_TOP u_ppu u_rgb Req5_end", false,-1);
        tracep->declBit(c+2091,"Game_Console_TOP u_ppu u_rgb Req6_ena", false,-1);
        tracep->declBus(c+2092,"Game_Console_TOP u_ppu u_rgb Req6_pixel", false,-1, 7,0);
        tracep->declBus(c+2166,"Game_Console_TOP u_ppu u_rgb Req6_RGB", false,-1, 17,0);
        tracep->declBit(c+2167,"Game_Console_TOP u_ppu u_rgb Req6_trans", false,-1);
        tracep->declBit(c+2168,"Game_Console_TOP u_ppu u_rgb Req6_end", false,-1);
        tracep->declBit(c+2093,"Game_Console_TOP u_ppu u_rgb Req7_ena", false,-1);
        tracep->declBus(c+2094,"Game_Console_TOP u_ppu u_rgb Req7_pixel", false,-1, 7,0);
        tracep->declBus(c+2169,"Game_Console_TOP u_ppu u_rgb Req7_RGB", false,-1, 17,0);
        tracep->declBit(c+2170,"Game_Console_TOP u_ppu u_rgb Req7_trans", false,-1);
        tracep->declBit(c+2171,"Game_Console_TOP u_ppu u_rgb Req7_end", false,-1);
        tracep->declBit(c+2095,"Game_Console_TOP u_ppu u_rgb Req8_ena", false,-1);
        tracep->declBus(c+2096,"Game_Console_TOP u_ppu u_rgb Req8_pixel", false,-1, 7,0);
        tracep->declBus(c+2172,"Game_Console_TOP u_ppu u_rgb Req8_RGB", false,-1, 17,0);
        tracep->declBit(c+2173,"Game_Console_TOP u_ppu u_rgb Req8_trans", false,-1);
        tracep->declBit(c+2174,"Game_Console_TOP u_ppu u_rgb Req8_end", false,-1);
        tracep->declBit(c+2097,"Game_Console_TOP u_ppu u_rgb Req9_ena", false,-1);
        tracep->declBus(c+2098,"Game_Console_TOP u_ppu u_rgb Req9_pixel", false,-1, 7,0);
        tracep->declBus(c+2175,"Game_Console_TOP u_ppu u_rgb Req9_RGB", false,-1, 17,0);
        tracep->declBit(c+2176,"Game_Console_TOP u_ppu u_rgb Req9_trans", false,-1);
        tracep->declBit(c+2177,"Game_Console_TOP u_ppu u_rgb Req9_end", false,-1);
        tracep->declBit(c+2099,"Game_Console_TOP u_ppu u_rgb Req10_ena", false,-1);
        tracep->declBus(c+2100,"Game_Console_TOP u_ppu u_rgb Req10_pixel", false,-1, 7,0);
        tracep->declBus(c+2178,"Game_Console_TOP u_ppu u_rgb Req10_RGB", false,-1, 17,0);
        tracep->declBit(c+2179,"Game_Console_TOP u_ppu u_rgb Req10_trans", false,-1);
        tracep->declBit(c+2180,"Game_Console_TOP u_ppu u_rgb Req10_end", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb Req11_ena", false,-1);
        tracep->declBus(c+2685,"Game_Console_TOP u_ppu u_rgb Req11_pixel", false,-1, 7,0);
        tracep->declBus(c+2181,"Game_Console_TOP u_ppu u_rgb Req11_RGB", false,-1, 17,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb Req11_trans", false,-1);
        tracep->declBit(c+2182,"Game_Console_TOP u_ppu u_rgb Req11_end", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb Req12_ena", false,-1);
        tracep->declBus(c+2685,"Game_Console_TOP u_ppu u_rgb Req12_pixel", false,-1, 7,0);
        tracep->declBus(c+2183,"Game_Console_TOP u_ppu u_rgb Req12_RGB", false,-1, 17,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb Req12_trans", false,-1);
        tracep->declBit(c+2184,"Game_Console_TOP u_ppu u_rgb Req12_end", false,-1);
        tracep->declBus(c+691,"Game_Console_TOP u_ppu u_rgb cache1_pixel", false,-1, 7,0);
        tracep->declBus(c+692,"Game_Console_TOP u_ppu u_rgb cache1_RGB", false,-1, 17,0);
        tracep->declBit(c+693,"Game_Console_TOP u_ppu u_rgb cache1_valid", false,-1);
        tracep->declBus(c+694,"Game_Console_TOP u_ppu u_rgb cache2_pixel", false,-1, 7,0);
        tracep->declBus(c+695,"Game_Console_TOP u_ppu u_rgb cache2_RGB", false,-1, 17,0);
        tracep->declBit(c+696,"Game_Console_TOP u_ppu u_rgb cache2_valid", false,-1);
        tracep->declBus(c+697,"Game_Console_TOP u_ppu u_rgb cache3_pixel", false,-1, 7,0);
        tracep->declBus(c+698,"Game_Console_TOP u_ppu u_rgb cache3_RGB", false,-1, 17,0);
        tracep->declBit(c+699,"Game_Console_TOP u_ppu u_rgb cache3_valid", false,-1);
        tracep->declBus(c+700,"Game_Console_TOP u_ppu u_rgb cache4_pixel", false,-1, 7,0);
        tracep->declBus(c+701,"Game_Console_TOP u_ppu u_rgb cache4_RGB", false,-1, 17,0);
        tracep->declBit(c+702,"Game_Console_TOP u_ppu u_rgb cache4_valid", false,-1);
        tracep->declBus(c+703,"Game_Console_TOP u_ppu u_rgb req1_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+704,"Game_Console_TOP u_ppu u_rgb req1_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+705,"Game_Console_TOP u_ppu u_rgb req1_exclusive_valid", false,-1);
        tracep->declBus(c+706,"Game_Console_TOP u_ppu u_rgb req2_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+707,"Game_Console_TOP u_ppu u_rgb req2_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+708,"Game_Console_TOP u_ppu u_rgb req2_exclusive_valid", false,-1);
        tracep->declBus(c+709,"Game_Console_TOP u_ppu u_rgb req3_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+710,"Game_Console_TOP u_ppu u_rgb req3_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+711,"Game_Console_TOP u_ppu u_rgb req3_exclusive_valid", false,-1);
        tracep->declBus(c+712,"Game_Console_TOP u_ppu u_rgb req4_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+713,"Game_Console_TOP u_ppu u_rgb req4_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+714,"Game_Console_TOP u_ppu u_rgb req4_exclusive_valid", false,-1);
        tracep->declBus(c+715,"Game_Console_TOP u_ppu u_rgb req5_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+716,"Game_Console_TOP u_ppu u_rgb req5_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+717,"Game_Console_TOP u_ppu u_rgb req5_exclusive_valid", false,-1);
        tracep->declBus(c+718,"Game_Console_TOP u_ppu u_rgb req6_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+719,"Game_Console_TOP u_ppu u_rgb req6_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+720,"Game_Console_TOP u_ppu u_rgb req6_exclusive_valid", false,-1);
        tracep->declBus(c+721,"Game_Console_TOP u_ppu u_rgb req7_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+722,"Game_Console_TOP u_ppu u_rgb req7_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+723,"Game_Console_TOP u_ppu u_rgb req7_exclusive_valid", false,-1);
        tracep->declBus(c+724,"Game_Console_TOP u_ppu u_rgb req8_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+725,"Game_Console_TOP u_ppu u_rgb req8_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+726,"Game_Console_TOP u_ppu u_rgb req8_exclusive_valid", false,-1);
        tracep->declBus(c+727,"Game_Console_TOP u_ppu u_rgb req9_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+728,"Game_Console_TOP u_ppu u_rgb req9_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+729,"Game_Console_TOP u_ppu u_rgb req9_exclusive_valid", false,-1);
        tracep->declBus(c+730,"Game_Console_TOP u_ppu u_rgb req10_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+731,"Game_Console_TOP u_ppu u_rgb req10_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+732,"Game_Console_TOP u_ppu u_rgb req10_exclusive_valid", false,-1);
        tracep->declBus(c+733,"Game_Console_TOP u_ppu u_rgb req11_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+734,"Game_Console_TOP u_ppu u_rgb req11_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+735,"Game_Console_TOP u_ppu u_rgb req11_exclusive_valid", false,-1);
        tracep->declBus(c+736,"Game_Console_TOP u_ppu u_rgb req12_exclusive_pixel", false,-1, 7,0);
        tracep->declBus(c+737,"Game_Console_TOP u_ppu u_rgb req12_exclusive_RGB", false,-1, 17,0);
        tracep->declBit(c+738,"Game_Console_TOP u_ppu u_rgb req12_exclusive_valid", false,-1);
        tracep->declBit(c+2185,"Game_Console_TOP u_ppu u_rgb req1_exclusive_hit", false,-1);
        tracep->declBit(c+2186,"Game_Console_TOP u_ppu u_rgb req2_exclusive_hit", false,-1);
        tracep->declBit(c+2187,"Game_Console_TOP u_ppu u_rgb req3_exclusive_hit", false,-1);
        tracep->declBit(c+2188,"Game_Console_TOP u_ppu u_rgb req4_exclusive_hit", false,-1);
        tracep->declBit(c+2189,"Game_Console_TOP u_ppu u_rgb req5_exclusive_hit", false,-1);
        tracep->declBit(c+2190,"Game_Console_TOP u_ppu u_rgb req6_exclusive_hit", false,-1);
        tracep->declBit(c+2191,"Game_Console_TOP u_ppu u_rgb req7_exclusive_hit", false,-1);
        tracep->declBit(c+2192,"Game_Console_TOP u_ppu u_rgb req8_exclusive_hit", false,-1);
        tracep->declBit(c+2193,"Game_Console_TOP u_ppu u_rgb req9_exclusive_hit", false,-1);
        tracep->declBit(c+2194,"Game_Console_TOP u_ppu u_rgb req10_exclusive_hit", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req11_exclusive_hit", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req12_exclusive_hit", false,-1);
        tracep->declBit(c+2195,"Game_Console_TOP u_ppu u_rgb req1_hit1", false,-1);
        tracep->declBit(c+2196,"Game_Console_TOP u_ppu u_rgb req1_hit2", false,-1);
        tracep->declBit(c+2197,"Game_Console_TOP u_ppu u_rgb req1_hit3", false,-1);
        tracep->declBit(c+2198,"Game_Console_TOP u_ppu u_rgb req1_hit4", false,-1);
        tracep->declBit(c+2199,"Game_Console_TOP u_ppu u_rgb req2_hit1", false,-1);
        tracep->declBit(c+2200,"Game_Console_TOP u_ppu u_rgb req2_hit2", false,-1);
        tracep->declBit(c+2201,"Game_Console_TOP u_ppu u_rgb req2_hit3", false,-1);
        tracep->declBit(c+2202,"Game_Console_TOP u_ppu u_rgb req2_hit4", false,-1);
        tracep->declBit(c+2203,"Game_Console_TOP u_ppu u_rgb req3_hit1", false,-1);
        tracep->declBit(c+2204,"Game_Console_TOP u_ppu u_rgb req3_hit2", false,-1);
        tracep->declBit(c+2205,"Game_Console_TOP u_ppu u_rgb req3_hit3", false,-1);
        tracep->declBit(c+2206,"Game_Console_TOP u_ppu u_rgb req3_hit4", false,-1);
        tracep->declBit(c+2207,"Game_Console_TOP u_ppu u_rgb req4_hit1", false,-1);
        tracep->declBit(c+2208,"Game_Console_TOP u_ppu u_rgb req4_hit2", false,-1);
        tracep->declBit(c+2209,"Game_Console_TOP u_ppu u_rgb req4_hit3", false,-1);
        tracep->declBit(c+2210,"Game_Console_TOP u_ppu u_rgb req4_hit4", false,-1);
        tracep->declBit(c+2211,"Game_Console_TOP u_ppu u_rgb req5_hit1", false,-1);
        tracep->declBit(c+2212,"Game_Console_TOP u_ppu u_rgb req5_hit2", false,-1);
        tracep->declBit(c+2213,"Game_Console_TOP u_ppu u_rgb req5_hit3", false,-1);
        tracep->declBit(c+2214,"Game_Console_TOP u_ppu u_rgb req5_hit4", false,-1);
        tracep->declBit(c+2215,"Game_Console_TOP u_ppu u_rgb req6_hit1", false,-1);
        tracep->declBit(c+2216,"Game_Console_TOP u_ppu u_rgb req6_hit2", false,-1);
        tracep->declBit(c+2217,"Game_Console_TOP u_ppu u_rgb req6_hit3", false,-1);
        tracep->declBit(c+2218,"Game_Console_TOP u_ppu u_rgb req6_hit4", false,-1);
        tracep->declBit(c+2219,"Game_Console_TOP u_ppu u_rgb req7_hit1", false,-1);
        tracep->declBit(c+2220,"Game_Console_TOP u_ppu u_rgb req7_hit2", false,-1);
        tracep->declBit(c+2221,"Game_Console_TOP u_ppu u_rgb req7_hit3", false,-1);
        tracep->declBit(c+2222,"Game_Console_TOP u_ppu u_rgb req7_hit4", false,-1);
        tracep->declBit(c+2223,"Game_Console_TOP u_ppu u_rgb req8_hit1", false,-1);
        tracep->declBit(c+2224,"Game_Console_TOP u_ppu u_rgb req8_hit2", false,-1);
        tracep->declBit(c+2225,"Game_Console_TOP u_ppu u_rgb req8_hit3", false,-1);
        tracep->declBit(c+2226,"Game_Console_TOP u_ppu u_rgb req8_hit4", false,-1);
        tracep->declBit(c+2227,"Game_Console_TOP u_ppu u_rgb req9_hit1", false,-1);
        tracep->declBit(c+2228,"Game_Console_TOP u_ppu u_rgb req9_hit2", false,-1);
        tracep->declBit(c+2229,"Game_Console_TOP u_ppu u_rgb req9_hit3", false,-1);
        tracep->declBit(c+2230,"Game_Console_TOP u_ppu u_rgb req9_hit4", false,-1);
        tracep->declBit(c+2231,"Game_Console_TOP u_ppu u_rgb req10_hit1", false,-1);
        tracep->declBit(c+2232,"Game_Console_TOP u_ppu u_rgb req10_hit2", false,-1);
        tracep->declBit(c+2233,"Game_Console_TOP u_ppu u_rgb req10_hit3", false,-1);
        tracep->declBit(c+2234,"Game_Console_TOP u_ppu u_rgb req10_hit4", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req11_hit1", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req11_hit2", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req11_hit3", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req11_hit4", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req12_hit1", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req12_hit2", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req12_hit3", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req12_hit4", false,-1);
        tracep->declBit(c+2235,"Game_Console_TOP u_ppu u_rgb req1_is_zero", false,-1);
        tracep->declBit(c+2236,"Game_Console_TOP u_ppu u_rgb req2_is_zero", false,-1);
        tracep->declBit(c+2237,"Game_Console_TOP u_ppu u_rgb req3_is_zero", false,-1);
        tracep->declBit(c+2238,"Game_Console_TOP u_ppu u_rgb req4_is_zero", false,-1);
        tracep->declBit(c+2239,"Game_Console_TOP u_ppu u_rgb req5_is_zero", false,-1);
        tracep->declBit(c+2240,"Game_Console_TOP u_ppu u_rgb req6_is_zero", false,-1);
        tracep->declBit(c+2241,"Game_Console_TOP u_ppu u_rgb req7_is_zero", false,-1);
        tracep->declBit(c+2242,"Game_Console_TOP u_ppu u_rgb req8_is_zero", false,-1);
        tracep->declBit(c+2243,"Game_Console_TOP u_ppu u_rgb req9_is_zero", false,-1);
        tracep->declBit(c+2244,"Game_Console_TOP u_ppu u_rgb req10_is_zero", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req11_is_zero", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb req12_is_zero", false,-1);
        tracep->declBus(c+2245,"Game_Console_TOP u_ppu u_rgb total_req", false,-1, 11,0);
        tracep->declBus(c+739,"Game_Console_TOP u_ppu u_rgb random_counter_0_3", false,-1, 1,0);
        tracep->declBit(c+740,"Game_Console_TOP u_ppu u_rgb random_counter_0_1", false,-1);
        tracep->declBus(c+741,"Game_Console_TOP u_ppu u_rgb random_counter_0_2", false,-1, 1,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb cache1_w_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb cache2_w_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb cache3_w_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_rgb cache4_w_ena", false,-1);
        tracep->declBit(c+2246,"Game_Console_TOP u_ppu u_rgb req1_w_ena", false,-1);
        tracep->declBit(c+2247,"Game_Console_TOP u_ppu u_rgb req2_w_ena", false,-1);
        tracep->declBit(c+2248,"Game_Console_TOP u_ppu u_rgb req3_w_ena", false,-1);
        tracep->declBit(c+2249,"Game_Console_TOP u_ppu u_rgb req4_w_ena", false,-1);
        tracep->declBit(c+2250,"Game_Console_TOP u_ppu u_rgb req5_w_ena", false,-1);
        tracep->declBit(c+2251,"Game_Console_TOP u_ppu u_rgb req6_w_ena", false,-1);
        tracep->declBit(c+2252,"Game_Console_TOP u_ppu u_rgb req7_w_ena", false,-1);
        tracep->declBit(c+2253,"Game_Console_TOP u_ppu u_rgb req8_w_ena", false,-1);
        tracep->declBit(c+2254,"Game_Console_TOP u_ppu u_rgb req9_w_ena", false,-1);
        tracep->declBit(c+2255,"Game_Console_TOP u_ppu u_rgb req10_w_ena", false,-1);
        tracep->declBit(c+2256,"Game_Console_TOP u_ppu u_rgb req11_w_ena", false,-1);
        tracep->declBit(c+2257,"Game_Console_TOP u_ppu u_rgb req12_w_ena", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_proc clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_proc resetn", false,-1);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_proc PPU_start", false,-1);
        tracep->declBus(c+311,"Game_Console_TOP u_ppu u_proc Background1_a", false,-1, 7,0);
        tracep->declBus(c+312,"Game_Console_TOP u_ppu u_proc Background1_z", false,-1, 7,0);
        tracep->declBit(c+2101,"Game_Console_TOP u_ppu u_proc Background1_pixel_valid", false,-1);
        tracep->declBus(c+479,"Game_Console_TOP u_ppu u_proc Background1_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+480,"Game_Console_TOP u_ppu u_proc Background1_pixel_is_trans", false,-1);
        tracep->declBit(c+2102,"Game_Console_TOP u_ppu u_proc Background1_pixel_ready", false,-1);
        tracep->declBus(c+313,"Game_Console_TOP u_ppu u_proc Background2_a", false,-1, 7,0);
        tracep->declBus(c+314,"Game_Console_TOP u_ppu u_proc Background2_z", false,-1, 7,0);
        tracep->declBit(c+2103,"Game_Console_TOP u_ppu u_proc Background2_pixel_valid", false,-1);
        tracep->declBus(c+481,"Game_Console_TOP u_ppu u_proc Background2_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+482,"Game_Console_TOP u_ppu u_proc Background2_pixel_is_trans", false,-1);
        tracep->declBit(c+2104,"Game_Console_TOP u_ppu u_proc Background2_pixel_ready", false,-1);
        tracep->declBus(c+315,"Game_Console_TOP u_ppu u_proc Character1_a", false,-1, 7,0);
        tracep->declBus(c+316,"Game_Console_TOP u_ppu u_proc Character1_z", false,-1, 7,0);
        tracep->declBit(c+2105,"Game_Console_TOP u_ppu u_proc Character1_pixel_valid", false,-1);
        tracep->declBus(c+483,"Game_Console_TOP u_ppu u_proc Character1_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+484,"Game_Console_TOP u_ppu u_proc Character1_pixel_is_trans", false,-1);
        tracep->declBit(c+2106,"Game_Console_TOP u_ppu u_proc Character1_pixel_ready", false,-1);
        tracep->declBus(c+317,"Game_Console_TOP u_ppu u_proc Character2_a", false,-1, 7,0);
        tracep->declBus(c+318,"Game_Console_TOP u_ppu u_proc Character2_z", false,-1, 7,0);
        tracep->declBit(c+2107,"Game_Console_TOP u_ppu u_proc Character2_pixel_valid", false,-1);
        tracep->declBus(c+485,"Game_Console_TOP u_ppu u_proc Character2_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+486,"Game_Console_TOP u_ppu u_proc Character2_pixel_is_trans", false,-1);
        tracep->declBit(c+2108,"Game_Console_TOP u_ppu u_proc Character2_pixel_ready", false,-1);
        tracep->declBus(c+319,"Game_Console_TOP u_ppu u_proc Character3_a", false,-1, 7,0);
        tracep->declBus(c+320,"Game_Console_TOP u_ppu u_proc Character3_z", false,-1, 7,0);
        tracep->declBit(c+2109,"Game_Console_TOP u_ppu u_proc Character3_pixel_valid", false,-1);
        tracep->declBus(c+487,"Game_Console_TOP u_ppu u_proc Character3_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+488,"Game_Console_TOP u_ppu u_proc Character3_pixel_is_trans", false,-1);
        tracep->declBit(c+2110,"Game_Console_TOP u_ppu u_proc Character3_pixel_ready", false,-1);
        tracep->declBus(c+321,"Game_Console_TOP u_ppu u_proc Character4_a", false,-1, 7,0);
        tracep->declBus(c+322,"Game_Console_TOP u_ppu u_proc Character4_z", false,-1, 7,0);
        tracep->declBit(c+2111,"Game_Console_TOP u_ppu u_proc Character4_pixel_valid", false,-1);
        tracep->declBus(c+489,"Game_Console_TOP u_ppu u_proc Character4_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+490,"Game_Console_TOP u_ppu u_proc Character4_pixel_is_trans", false,-1);
        tracep->declBit(c+2112,"Game_Console_TOP u_ppu u_proc Character4_pixel_ready", false,-1);
        tracep->declBus(c+323,"Game_Console_TOP u_ppu u_proc Script_a", false,-1, 7,0);
        tracep->declBus(c+324,"Game_Console_TOP u_ppu u_proc Script_z", false,-1, 7,0);
        tracep->declBit(c+2113,"Game_Console_TOP u_ppu u_proc Script_pixel_valid", false,-1);
        tracep->declBus(c+491,"Game_Console_TOP u_ppu u_proc Script_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+492,"Game_Console_TOP u_ppu u_proc Script_pixel_is_trans", false,-1);
        tracep->declBit(c+2114,"Game_Console_TOP u_ppu u_proc Script_pixel_ready", false,-1);
        tracep->declBus(c+325,"Game_Console_TOP u_ppu u_proc Status_a", false,-1, 7,0);
        tracep->declBus(c+326,"Game_Console_TOP u_ppu u_proc Status_z", false,-1, 7,0);
        tracep->declBit(c+2115,"Game_Console_TOP u_ppu u_proc Status_pixel_valid", false,-1);
        tracep->declBus(c+493,"Game_Console_TOP u_ppu u_proc Status_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+494,"Game_Console_TOP u_ppu u_proc Status_pixel_is_trans", false,-1);
        tracep->declBit(c+2116,"Game_Console_TOP u_ppu u_proc Status_pixel_ready", false,-1);
        tracep->declBus(c+327,"Game_Console_TOP u_ppu u_proc Universal1_a", false,-1, 7,0);
        tracep->declBus(c+328,"Game_Console_TOP u_ppu u_proc Universal1_z", false,-1, 7,0);
        tracep->declBit(c+2117,"Game_Console_TOP u_ppu u_proc Universal1_pixel_valid", false,-1);
        tracep->declBus(c+495,"Game_Console_TOP u_ppu u_proc Universal1_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+496,"Game_Console_TOP u_ppu u_proc Universal1_pixel_is_trans", false,-1);
        tracep->declBit(c+2118,"Game_Console_TOP u_ppu u_proc Universal1_pixel_ready", false,-1);
        tracep->declBus(c+329,"Game_Console_TOP u_ppu u_proc Universal2_a", false,-1, 7,0);
        tracep->declBus(c+330,"Game_Console_TOP u_ppu u_proc Universal2_z", false,-1, 7,0);
        tracep->declBit(c+2119,"Game_Console_TOP u_ppu u_proc Universal2_pixel_valid", false,-1);
        tracep->declBus(c+497,"Game_Console_TOP u_ppu u_proc Universal2_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+498,"Game_Console_TOP u_ppu u_proc Universal2_pixel_is_trans", false,-1);
        tracep->declBit(c+2120,"Game_Console_TOP u_ppu u_proc Universal2_pixel_ready", false,-1);
        tracep->declBit(c+500,"Game_Console_TOP u_ppu u_proc Final_pixel_valid", false,-1);
        tracep->declBus(c+499,"Game_Console_TOP u_ppu u_proc Final_pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+742,"Game_Console_TOP u_ppu u_proc is_new_pixel", false,-1);
        tracep->declBus(c+743,"Game_Console_TOP u_ppu u_proc Z1_RGB", false,-1, 17,0);
        tracep->declBit(c+744,"Game_Console_TOP u_ppu u_proc Z1_is_trans", false,-1);
        tracep->declBus(c+745,"Game_Console_TOP u_ppu u_proc Z1_a", false,-1, 7,0);
        tracep->declBit(c+746,"Game_Console_TOP u_ppu u_proc Z1_valid", false,-1);
        tracep->declBit(c+747,"Game_Console_TOP u_ppu u_proc Z1_ready", false,-1);
        tracep->declBus(c+748,"Game_Console_TOP u_ppu u_proc Z2_RGB", false,-1, 17,0);
        tracep->declBit(c+749,"Game_Console_TOP u_ppu u_proc Z2_is_trans", false,-1);
        tracep->declBus(c+750,"Game_Console_TOP u_ppu u_proc Z2_a", false,-1, 7,0);
        tracep->declBit(c+751,"Game_Console_TOP u_ppu u_proc Z2_valid", false,-1);
        tracep->declBit(c+752,"Game_Console_TOP u_ppu u_proc Z2_ready", false,-1);
        tracep->declBus(c+753,"Game_Console_TOP u_ppu u_proc Z3_RGB", false,-1, 17,0);
        tracep->declBit(c+754,"Game_Console_TOP u_ppu u_proc Z3_is_trans", false,-1);
        tracep->declBus(c+755,"Game_Console_TOP u_ppu u_proc Z3_a", false,-1, 7,0);
        tracep->declBit(c+756,"Game_Console_TOP u_ppu u_proc Z3_valid", false,-1);
        tracep->declBit(c+757,"Game_Console_TOP u_ppu u_proc Z3_ready", false,-1);
        tracep->declBus(c+758,"Game_Console_TOP u_ppu u_proc Z4_RGB", false,-1, 17,0);
        tracep->declBit(c+759,"Game_Console_TOP u_ppu u_proc Z4_is_trans", false,-1);
        tracep->declBus(c+760,"Game_Console_TOP u_ppu u_proc Z4_a", false,-1, 7,0);
        tracep->declBit(c+761,"Game_Console_TOP u_ppu u_proc Z4_valid", false,-1);
        tracep->declBit(c+762,"Game_Console_TOP u_ppu u_proc Z4_ready", false,-1);
        tracep->declBus(c+763,"Game_Console_TOP u_ppu u_proc Z5_RGB", false,-1, 17,0);
        tracep->declBit(c+764,"Game_Console_TOP u_ppu u_proc Z5_is_trans", false,-1);
        tracep->declBus(c+765,"Game_Console_TOP u_ppu u_proc Z5_a", false,-1, 7,0);
        tracep->declBit(c+766,"Game_Console_TOP u_ppu u_proc Z5_valid", false,-1);
        tracep->declBit(c+767,"Game_Console_TOP u_ppu u_proc Z5_ready", false,-1);
        tracep->declBus(c+768,"Game_Console_TOP u_ppu u_proc Z6_RGB", false,-1, 17,0);
        tracep->declBit(c+769,"Game_Console_TOP u_ppu u_proc Z6_is_trans", false,-1);
        tracep->declBus(c+770,"Game_Console_TOP u_ppu u_proc Z6_a", false,-1, 7,0);
        tracep->declBit(c+771,"Game_Console_TOP u_ppu u_proc Z6_valid", false,-1);
        tracep->declBit(c+772,"Game_Console_TOP u_ppu u_proc Z6_ready", false,-1);
        tracep->declBus(c+773,"Game_Console_TOP u_ppu u_proc Z7_RGB", false,-1, 17,0);
        tracep->declBit(c+774,"Game_Console_TOP u_ppu u_proc Z7_is_trans", false,-1);
        tracep->declBus(c+775,"Game_Console_TOP u_ppu u_proc Z7_a", false,-1, 7,0);
        tracep->declBit(c+776,"Game_Console_TOP u_ppu u_proc Z7_valid", false,-1);
        tracep->declBit(c+777,"Game_Console_TOP u_ppu u_proc Z7_ready", false,-1);
        tracep->declBus(c+778,"Game_Console_TOP u_ppu u_proc Z8_RGB", false,-1, 17,0);
        tracep->declBit(c+779,"Game_Console_TOP u_ppu u_proc Z8_is_trans", false,-1);
        tracep->declBus(c+780,"Game_Console_TOP u_ppu u_proc Z8_a", false,-1, 7,0);
        tracep->declBit(c+781,"Game_Console_TOP u_ppu u_proc Z8_valid", false,-1);
        tracep->declBit(c+782,"Game_Console_TOP u_ppu u_proc Z8_ready", false,-1);
        tracep->declBus(c+783,"Game_Console_TOP u_ppu u_proc Z9_RGB", false,-1, 17,0);
        tracep->declBit(c+784,"Game_Console_TOP u_ppu u_proc Z9_is_trans", false,-1);
        tracep->declBus(c+785,"Game_Console_TOP u_ppu u_proc Z9_a", false,-1, 7,0);
        tracep->declBit(c+786,"Game_Console_TOP u_ppu u_proc Z9_valid", false,-1);
        tracep->declBit(c+787,"Game_Console_TOP u_ppu u_proc Z9_ready", false,-1);
        tracep->declBus(c+788,"Game_Console_TOP u_ppu u_proc Z10_RGB", false,-1, 17,0);
        tracep->declBit(c+789,"Game_Console_TOP u_ppu u_proc Z10_is_trans", false,-1);
        tracep->declBus(c+790,"Game_Console_TOP u_ppu u_proc Z10_a", false,-1, 7,0);
        tracep->declBit(c+791,"Game_Console_TOP u_ppu u_proc Z10_valid", false,-1);
        tracep->declBit(c+792,"Game_Console_TOP u_ppu u_proc Z10_ready", false,-1);
        tracep->declBit(c+793,"Game_Console_TOP u_ppu u_proc Pipeline_move", false,-1);
        tracep->declBus(c+794,"Game_Console_TOP u_ppu u_proc Pipe1_R", false,-1, 14,0);
        tracep->declBus(c+795,"Game_Console_TOP u_ppu u_proc Pipe1_G", false,-1, 14,0);
        tracep->declBus(c+796,"Game_Console_TOP u_ppu u_proc Pipe1_B", false,-1, 14,0);
        tracep->declBit(c+797,"Game_Console_TOP u_ppu u_proc Pipe1_is_trans", false,-1);
        tracep->declBit(c+798,"Game_Console_TOP u_ppu u_proc Pipe1_valid", false,-1);
        tracep->declBus(c+799,"Game_Console_TOP u_ppu u_proc Pipe2_R", false,-1, 14,0);
        tracep->declBus(c+800,"Game_Console_TOP u_ppu u_proc Pipe2_G", false,-1, 14,0);
        tracep->declBus(c+801,"Game_Console_TOP u_ppu u_proc Pipe2_B", false,-1, 14,0);
        tracep->declBit(c+802,"Game_Console_TOP u_ppu u_proc Pipe2_is_trans", false,-1);
        tracep->declBit(c+803,"Game_Console_TOP u_ppu u_proc Pipe2_valid", false,-1);
        tracep->declBus(c+804,"Game_Console_TOP u_ppu u_proc Pipe3_R", false,-1, 14,0);
        tracep->declBus(c+805,"Game_Console_TOP u_ppu u_proc Pipe3_G", false,-1, 14,0);
        tracep->declBus(c+806,"Game_Console_TOP u_ppu u_proc Pipe3_B", false,-1, 14,0);
        tracep->declBit(c+807,"Game_Console_TOP u_ppu u_proc Pipe3_is_trans", false,-1);
        tracep->declBit(c+808,"Game_Console_TOP u_ppu u_proc Pipe3_valid", false,-1);
        tracep->declBus(c+809,"Game_Console_TOP u_ppu u_proc Pipe4_R", false,-1, 14,0);
        tracep->declBus(c+810,"Game_Console_TOP u_ppu u_proc Pipe4_G", false,-1, 14,0);
        tracep->declBus(c+811,"Game_Console_TOP u_ppu u_proc Pipe4_B", false,-1, 14,0);
        tracep->declBit(c+812,"Game_Console_TOP u_ppu u_proc Pipe4_is_trans", false,-1);
        tracep->declBit(c+813,"Game_Console_TOP u_ppu u_proc Pipe4_valid", false,-1);
        tracep->declBus(c+814,"Game_Console_TOP u_ppu u_proc Pipe5_R", false,-1, 14,0);
        tracep->declBus(c+815,"Game_Console_TOP u_ppu u_proc Pipe5_G", false,-1, 14,0);
        tracep->declBus(c+816,"Game_Console_TOP u_ppu u_proc Pipe5_B", false,-1, 14,0);
        tracep->declBit(c+817,"Game_Console_TOP u_ppu u_proc Pipe5_is_trans", false,-1);
        tracep->declBit(c+818,"Game_Console_TOP u_ppu u_proc Pipe5_valid", false,-1);
        tracep->declBus(c+819,"Game_Console_TOP u_ppu u_proc Pipe6_R", false,-1, 14,0);
        tracep->declBus(c+820,"Game_Console_TOP u_ppu u_proc Pipe6_G", false,-1, 14,0);
        tracep->declBus(c+821,"Game_Console_TOP u_ppu u_proc Pipe6_B", false,-1, 14,0);
        tracep->declBit(c+822,"Game_Console_TOP u_ppu u_proc Pipe6_is_trans", false,-1);
        tracep->declBit(c+823,"Game_Console_TOP u_ppu u_proc Pipe6_valid", false,-1);
        tracep->declBus(c+824,"Game_Console_TOP u_ppu u_proc Pipe7_R", false,-1, 14,0);
        tracep->declBus(c+825,"Game_Console_TOP u_ppu u_proc Pipe7_G", false,-1, 14,0);
        tracep->declBus(c+826,"Game_Console_TOP u_ppu u_proc Pipe7_B", false,-1, 14,0);
        tracep->declBit(c+827,"Game_Console_TOP u_ppu u_proc Pipe7_is_trans", false,-1);
        tracep->declBit(c+828,"Game_Console_TOP u_ppu u_proc Pipe7_valid", false,-1);
        tracep->declBus(c+829,"Game_Console_TOP u_ppu u_proc Pipe8_R", false,-1, 14,0);
        tracep->declBus(c+830,"Game_Console_TOP u_ppu u_proc Pipe8_G", false,-1, 14,0);
        tracep->declBus(c+831,"Game_Console_TOP u_ppu u_proc Pipe8_B", false,-1, 14,0);
        tracep->declBit(c+832,"Game_Console_TOP u_ppu u_proc Pipe8_is_trans", false,-1);
        tracep->declBit(c+833,"Game_Console_TOP u_ppu u_proc Pipe8_valid", false,-1);
        tracep->declBus(c+834,"Game_Console_TOP u_ppu u_proc Pipe9_R", false,-1, 14,0);
        tracep->declBus(c+835,"Game_Console_TOP u_ppu u_proc Pipe9_G", false,-1, 14,0);
        tracep->declBus(c+836,"Game_Console_TOP u_ppu u_proc Pipe9_B", false,-1, 14,0);
        tracep->declBit(c+837,"Game_Console_TOP u_ppu u_proc Pipe9_is_trans", false,-1);
        tracep->declBit(c+838,"Game_Console_TOP u_ppu u_proc Pipe9_valid", false,-1);
        tracep->declBit(c+839,"Game_Console_TOP u_ppu u_proc all_fsm_reset", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+840+i*1,"Game_Console_TOP u_ppu u_proc layer_RGB", true,(i+0), 17,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+851+i*1,"Game_Console_TOP u_ppu u_proc layer_is_trans", true,(i+0));}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+2258+i*1,"Game_Console_TOP u_ppu u_proc layer_valid", true,(i+0));}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+862+i*1,"Game_Console_TOP u_ppu u_proc layer_z", true,(i+0), 7,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+873+i*1,"Game_Console_TOP u_ppu u_proc layer_a", true,(i+0), 7,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+2269+i*1,"Game_Console_TOP u_ppu u_proc layer_ready", true,(i+0));}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+884+i*1,"Game_Console_TOP u_ppu u_proc z_index_map", true,(i+1), 3,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+894+i*1,"Game_Console_TOP u_ppu u_proc z_input_RGB", true,(i+1), 17,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBit(c+904+i*1,"Game_Console_TOP u_ppu u_proc z_input_is_trans", true,(i+1));}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+914+i*1,"Game_Console_TOP u_ppu u_proc z_input_a", true,(i+1), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBit(c+2280+i*1,"Game_Console_TOP u_ppu u_proc z_input_valid", true,(i+1));}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBit(c+2290+i*1,"Game_Console_TOP u_ppu u_proc z_input_ready", true,(i+1));}}
        tracep->declBus(c+2686,"Game_Console_TOP u_ppu u_proc i", false,-1, 31,0);
        tracep->declBus(c+2686,"Game_Console_TOP u_ppu u_proc j", false,-1, 31,0);
        tracep->declBus(c+924,"Game_Console_TOP u_ppu u_proc Z1_state", false,-1, 1,0);
        tracep->declBus(c+2300,"Game_Console_TOP u_ppu u_proc Z1_state_next", false,-1, 1,0);
        tracep->declBus(c+925,"Game_Console_TOP u_ppu u_proc Z2_state", false,-1, 1,0);
        tracep->declBus(c+2301,"Game_Console_TOP u_ppu u_proc Z2_state_next", false,-1, 1,0);
        tracep->declBus(c+926,"Game_Console_TOP u_ppu u_proc Z3_state", false,-1, 1,0);
        tracep->declBus(c+2302,"Game_Console_TOP u_ppu u_proc Z3_state_next", false,-1, 1,0);
        tracep->declBus(c+927,"Game_Console_TOP u_ppu u_proc Z4_state", false,-1, 1,0);
        tracep->declBus(c+2303,"Game_Console_TOP u_ppu u_proc Z4_state_next", false,-1, 1,0);
        tracep->declBus(c+928,"Game_Console_TOP u_ppu u_proc Z5_state", false,-1, 1,0);
        tracep->declBus(c+2304,"Game_Console_TOP u_ppu u_proc Z5_state_next", false,-1, 1,0);
        tracep->declBus(c+929,"Game_Console_TOP u_ppu u_proc Z6_state", false,-1, 1,0);
        tracep->declBus(c+2305,"Game_Console_TOP u_ppu u_proc Z6_state_next", false,-1, 1,0);
        tracep->declBus(c+930,"Game_Console_TOP u_ppu u_proc Z7_state", false,-1, 1,0);
        tracep->declBus(c+2306,"Game_Console_TOP u_ppu u_proc Z7_state_next", false,-1, 1,0);
        tracep->declBus(c+931,"Game_Console_TOP u_ppu u_proc Z8_state", false,-1, 1,0);
        tracep->declBus(c+2307,"Game_Console_TOP u_ppu u_proc Z8_state_next", false,-1, 1,0);
        tracep->declBus(c+932,"Game_Console_TOP u_ppu u_proc Z9_state", false,-1, 1,0);
        tracep->declBus(c+2308,"Game_Console_TOP u_ppu u_proc Z9_state_next", false,-1, 1,0);
        tracep->declBus(c+933,"Game_Console_TOP u_ppu u_proc Z10_state", false,-1, 1,0);
        tracep->declBus(c+2309,"Game_Console_TOP u_ppu u_proc Z10_state_next", false,-1, 1,0);
        tracep->declBus(c+934,"Game_Console_TOP u_ppu u_proc main_state", false,-1, 3,0);
        tracep->declBus(c+935,"Game_Console_TOP u_ppu u_proc main_state_next", false,-1, 3,0);
        tracep->declBus(c+936,"Game_Console_TOP u_ppu u_proc main_state_counter_x", false,-1, 8,0);
        tracep->declBus(c+937,"Game_Console_TOP u_ppu u_proc main_state_counter_y", false,-1, 8,0);
        tracep->declBus(c+938,"Game_Console_TOP u_ppu u_proc main_state_counter_x_next", false,-1, 8,0);
        tracep->declBus(c+939,"Game_Console_TOP u_ppu u_proc main_state_counter_y_next", false,-1, 8,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_font clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_font resetn", false,-1);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_font PPU_start", false,-1);
        tracep->declBus(c+501,"Game_Console_TOP u_ppu u_font Font_Mixed_Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+502,"Game_Console_TOP u_ppu u_font Font_Mixed_Pixel_valid", false,-1);
        tracep->declBit(c+503,"Game_Console_TOP u_ppu u_font Line_End", false,-1);
        tracep->declBit(c+504,"Game_Console_TOP u_ppu u_font Frame_End", false,-1);
        tracep->declBit(c+500,"Game_Console_TOP u_ppu u_font PPU_pixel_valid", false,-1);
        tracep->declBus(c+499,"Game_Console_TOP u_ppu u_font PPU_pixel_RGB", false,-1, 17,0);
        tracep->declBus(c+403,"Game_Console_TOP u_ppu u_font Line0_visible_number", false,-1, 7,0);
        tracep->declBus(c+404,"Game_Console_TOP u_ppu u_font Line1_visible_number", false,-1, 7,0);
        tracep->declBus(c+405,"Game_Console_TOP u_ppu u_font Line2_visible_number", false,-1, 7,0);
        tracep->declBus(c+406,"Game_Console_TOP u_ppu u_font Line3_visible_number", false,-1, 7,0);
        tracep->declBus(c+407,"Game_Console_TOP u_ppu u_font Line4_visible_number", false,-1, 7,0);
        tracep->declBus(c+408,"Game_Console_TOP u_ppu u_font Line5_visible_number", false,-1, 7,0);
        tracep->declBus(c+409,"Game_Console_TOP u_ppu u_font Line6_visible_number", false,-1, 7,0);
        tracep->declBus(c+410,"Game_Console_TOP u_ppu u_font Line7_visible_number", false,-1, 7,0);
        tracep->declBus(c+411,"Game_Console_TOP u_ppu u_font Line8_visible_number", false,-1, 7,0);
        tracep->declBus(c+412,"Game_Console_TOP u_ppu u_font Line9_visible_number", false,-1, 7,0);
        tracep->declBus(c+413,"Game_Console_TOP u_ppu u_font Line10_visible_number", false,-1, 7,0);
        tracep->declBus(c+414,"Game_Console_TOP u_ppu u_font Line11_visible_number", false,-1, 7,0);
        tracep->declBus(c+415,"Game_Console_TOP u_ppu u_font Line12_visible_number", false,-1, 7,0);
        tracep->declBus(c+416,"Game_Console_TOP u_ppu u_font Line13_visible_number", false,-1, 7,0);
        tracep->declBus(c+417,"Game_Console_TOP u_ppu u_font Line14_visible_number", false,-1, 7,0);
        tracep->declBus(c+418,"Game_Console_TOP u_ppu u_font Line0_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+419,"Game_Console_TOP u_ppu u_font Line1_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+420,"Game_Console_TOP u_ppu u_font Line2_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+421,"Game_Console_TOP u_ppu u_font Line3_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+422,"Game_Console_TOP u_ppu u_font Line4_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+423,"Game_Console_TOP u_ppu u_font Line5_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+424,"Game_Console_TOP u_ppu u_font Line6_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+425,"Game_Console_TOP u_ppu u_font Line7_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+426,"Game_Console_TOP u_ppu u_font Line8_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+427,"Game_Console_TOP u_ppu u_font Line9_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+428,"Game_Console_TOP u_ppu u_font Line10_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+429,"Game_Console_TOP u_ppu u_font Line11_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+430,"Game_Console_TOP u_ppu u_font Line12_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+431,"Game_Console_TOP u_ppu u_font Line13_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+432,"Game_Console_TOP u_ppu u_font Line14_font_RGB_9bit", false,-1, 8,0);
        tracep->declBus(c+433,"Game_Console_TOP u_ppu u_font Line0_a", false,-1, 2,0);
        tracep->declBus(c+434,"Game_Console_TOP u_ppu u_font Line1_a", false,-1, 2,0);
        tracep->declBus(c+435,"Game_Console_TOP u_ppu u_font Line2_a", false,-1, 2,0);
        tracep->declBus(c+436,"Game_Console_TOP u_ppu u_font Line3_a", false,-1, 2,0);
        tracep->declBus(c+437,"Game_Console_TOP u_ppu u_font Line4_a", false,-1, 2,0);
        tracep->declBus(c+438,"Game_Console_TOP u_ppu u_font Line5_a", false,-1, 2,0);
        tracep->declBus(c+439,"Game_Console_TOP u_ppu u_font Line6_a", false,-1, 2,0);
        tracep->declBus(c+440,"Game_Console_TOP u_ppu u_font Line7_a", false,-1, 2,0);
        tracep->declBus(c+441,"Game_Console_TOP u_ppu u_font Line8_a", false,-1, 2,0);
        tracep->declBus(c+442,"Game_Console_TOP u_ppu u_font Line9_a", false,-1, 2,0);
        tracep->declBus(c+443,"Game_Console_TOP u_ppu u_font Line10_a", false,-1, 2,0);
        tracep->declBus(c+444,"Game_Console_TOP u_ppu u_font Line11_a", false,-1, 2,0);
        tracep->declBus(c+445,"Game_Console_TOP u_ppu u_font Line12_a", false,-1, 2,0);
        tracep->declBus(c+446,"Game_Console_TOP u_ppu u_font Line13_a", false,-1, 2,0);
        tracep->declBus(c+447,"Game_Console_TOP u_ppu u_font Line14_a", false,-1, 2,0);
        tracep->declBit(c+2524,"Game_Console_TOP u_ppu u_font BRAM4_en_a", false,-1);
        tracep->declBus(c+2525,"Game_Console_TOP u_ppu u_font BRAM4_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2526,"Game_Console_TOP u_ppu u_font BRAM4_addr_a", false,-1, 9,0);
        tracep->declBus(c+2527,"Game_Console_TOP u_ppu u_font BRAM4_din_a", false,-1, 31,0);
        tracep->declBus(c+2528,"Game_Console_TOP u_ppu u_font BRAM4_dout_a", false,-1, 31,0);
        tracep->declBit(c+2534,"Game_Console_TOP u_ppu u_font BRAM5_en_a", false,-1);
        tracep->declBus(c+2535,"Game_Console_TOP u_ppu u_font BRAM5_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2536,"Game_Console_TOP u_ppu u_font BRAM5_addr_a", false,-1, 9,0);
        tracep->declBus(c+2537,"Game_Console_TOP u_ppu u_font BRAM5_din_a", false,-1, 31,0);
        tracep->declBus(c+2538,"Game_Console_TOP u_ppu u_font BRAM5_dout_a", false,-1, 31,0);
        tracep->declBit(c+2544,"Game_Console_TOP u_ppu u_font BRAM6_en_a", false,-1);
        tracep->declBus(c+2545,"Game_Console_TOP u_ppu u_font BRAM6_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2546,"Game_Console_TOP u_ppu u_font BRAM6_addr_a", false,-1, 9,0);
        tracep->declBus(c+2547,"Game_Console_TOP u_ppu u_font BRAM6_din_a", false,-1, 31,0);
        tracep->declBus(c+2548,"Game_Console_TOP u_ppu u_font BRAM6_dout_a", false,-1, 31,0);
        tracep->declBit(c+2554,"Game_Console_TOP u_ppu u_font BRAM13_en_a", false,-1);
        tracep->declBus(c+2555,"Game_Console_TOP u_ppu u_font BRAM13_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2556,"Game_Console_TOP u_ppu u_font BRAM13_addr_a", false,-1, 9,0);
        tracep->declBus(c+2557,"Game_Console_TOP u_ppu u_font BRAM13_din_a", false,-1, 31,0);
        tracep->declBus(c+2558,"Game_Console_TOP u_ppu u_font BRAM13_dout_a", false,-1, 31,0);
        tracep->declBit(c+2564,"Game_Console_TOP u_ppu u_font BRAM14_en_a", false,-1);
        tracep->declBus(c+2565,"Game_Console_TOP u_ppu u_font BRAM14_wstrb_a", false,-1, 3,0);
        tracep->declBus(c+2566,"Game_Console_TOP u_ppu u_font BRAM14_addr_a", false,-1, 9,0);
        tracep->declBus(c+2567,"Game_Console_TOP u_ppu u_font BRAM14_din_a", false,-1, 31,0);
        tracep->declBus(c+2568,"Game_Console_TOP u_ppu u_font BRAM14_dout_a", false,-1, 31,0);
        tracep->declBus(c+940,"Game_Console_TOP u_ppu u_font line0_rgb", false,-1, 17,0);
        tracep->declBus(c+941,"Game_Console_TOP u_ppu u_font line1_rgb", false,-1, 17,0);
        tracep->declBus(c+942,"Game_Console_TOP u_ppu u_font line2_rgb", false,-1, 17,0);
        tracep->declBus(c+943,"Game_Console_TOP u_ppu u_font line3_rgb", false,-1, 17,0);
        tracep->declBus(c+944,"Game_Console_TOP u_ppu u_font line4_rgb", false,-1, 17,0);
        tracep->declBus(c+945,"Game_Console_TOP u_ppu u_font line5_rgb", false,-1, 17,0);
        tracep->declBus(c+946,"Game_Console_TOP u_ppu u_font line6_rgb", false,-1, 17,0);
        tracep->declBus(c+947,"Game_Console_TOP u_ppu u_font line7_rgb", false,-1, 17,0);
        tracep->declBus(c+948,"Game_Console_TOP u_ppu u_font line8_rgb", false,-1, 17,0);
        tracep->declBus(c+949,"Game_Console_TOP u_ppu u_font line9_rgb", false,-1, 17,0);
        tracep->declBus(c+950,"Game_Console_TOP u_ppu u_font line10_rgb", false,-1, 17,0);
        tracep->declBus(c+951,"Game_Console_TOP u_ppu u_font line11_rgb", false,-1, 17,0);
        tracep->declBus(c+952,"Game_Console_TOP u_ppu u_font line12_rgb", false,-1, 17,0);
        tracep->declBus(c+953,"Game_Console_TOP u_ppu u_font line13_rgb", false,-1, 17,0);
        tracep->declBus(c+954,"Game_Console_TOP u_ppu u_font line14_rgb", false,-1, 17,0);
        tracep->declBus(c+955,"Game_Console_TOP u_ppu u_font fontmap_skid_data", false,-1, 15,0);
        tracep->declBit(c+956,"Game_Console_TOP u_ppu u_font fontmap_skid_valid", false,-1);
        tracep->declBus(c+957,"Game_Console_TOP u_ppu u_font korea_bitmap_skid_data", false,-1, 15,0);
        tracep->declBit(c+958,"Game_Console_TOP u_ppu u_font korea_bitmap_skid_valid", false,-1);
        tracep->declBus(c+959,"Game_Console_TOP u_ppu u_font ascii_bitmap_skid_data", false,-1, 7,0);
        tracep->declBit(c+960,"Game_Console_TOP u_ppu u_font ascii_bitmap_skid_valid", false,-1);
        tracep->declBus(c+961,"Game_Console_TOP u_ppu u_font custom_tile_bitmap_skid_data", false,-1, 7,0);
        tracep->declBit(c+962,"Game_Console_TOP u_ppu u_font custom_tile_bitmap_skid_valid", false,-1);
        tracep->declBus(c+963,"Game_Console_TOP u_ppu u_font pixel_state", false,-1, 3,0);
        tracep->declBus(c+964,"Game_Console_TOP u_ppu u_font pixel_state_next", false,-1, 3,0);
        tracep->declBus(c+965,"Game_Console_TOP u_ppu u_font output_state", false,-1, 3,0);
        tracep->declBus(c+966,"Game_Console_TOP u_ppu u_font output_state_next", false,-1, 3,0);
        tracep->declBus(c+967,"Game_Console_TOP u_ppu u_font font_state", false,-1, 3,0);
        tracep->declBus(c+968,"Game_Console_TOP u_ppu u_font font_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_font IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_font START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_font BUBBLE_1", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_font BUBBLE_2", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_font BUBBLE_3", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_font FIRST_CASE_1", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_font FIRST_CASE_2", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_font SECOND_CASE", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_font THIRD_CASE", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_font NOT_MIX", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_font KOREA", false,-1, 31,0);
        tracep->declBus(c+969,"Game_Console_TOP u_ppu u_font counter_0_39", false,-1, 5,0);
        tracep->declBus(c+970,"Game_Console_TOP u_ppu u_font counter_0_15", false,-1, 3,0);
        tracep->declBus(c+971,"Game_Console_TOP u_ppu u_font counter_0_14", false,-1, 5,0);
        tracep->declBus(c+972,"Game_Console_TOP u_ppu u_font counter_font_x", false,-1, 5,0);
        tracep->declBit(c+973,"Game_Console_TOP u_ppu u_font counter_0_39_reset", false,-1);
        tracep->declBit(c+974,"Game_Console_TOP u_ppu u_font counter_font_x_reset", false,-1);
        tracep->declBit(c+975,"Game_Console_TOP u_ppu u_font counter_font_x_reset_reg", false,-1);
        tracep->declBit(c+976,"Game_Console_TOP u_ppu u_font counter_font_x_reset_reg_reg", false,-1);
        tracep->declBus(c+977,"Game_Console_TOP u_ppu u_font RGB_1_reg", false,-1, 17,0);
        tracep->declBit(c+978,"Game_Console_TOP u_ppu u_font RGB_1_reg_valid", false,-1);
        tracep->declBus(c+979,"Game_Console_TOP u_ppu u_font RGB_2_reg", false,-1, 17,0);
        tracep->declBit(c+980,"Game_Console_TOP u_ppu u_font RGB_2_reg_valid", false,-1);
        tracep->declBus(c+981,"Game_Console_TOP u_ppu u_font RGB_3_reg", false,-1, 17,0);
        tracep->declBit(c+982,"Game_Console_TOP u_ppu u_font RGB_3_reg_valid", false,-1);
        tracep->declBus(c+983,"Game_Console_TOP u_ppu u_font RGB_4_reg", false,-1, 17,0);
        tracep->declBit(c+984,"Game_Console_TOP u_ppu u_font RGB_4_reg_valid", false,-1);
        tracep->declBus(c+985,"Game_Console_TOP u_ppu u_font RGB_5_reg", false,-1, 17,0);
        tracep->declBit(c+986,"Game_Console_TOP u_ppu u_font RGB_5_reg_valid", false,-1);
        tracep->declBus(c+987,"Game_Console_TOP u_ppu u_font RGB_6_reg", false,-1, 17,0);
        tracep->declBit(c+988,"Game_Console_TOP u_ppu u_font RGB_6_reg_valid", false,-1);
        tracep->declBus(c+989,"Game_Console_TOP u_ppu u_font RGB_7_reg", false,-1, 17,0);
        tracep->declBit(c+990,"Game_Console_TOP u_ppu u_font RGB_7_reg_valid", false,-1);
        tracep->declBus(c+991,"Game_Console_TOP u_ppu u_font RGB_8_reg", false,-1, 17,0);
        tracep->declBit(c+992,"Game_Console_TOP u_ppu u_font RGB_8_reg_valid", false,-1);
        tracep->declBus(c+993,"Game_Console_TOP u_ppu u_font mixed_RGB_1", false,-1, 17,0);
        tracep->declBit(c+994,"Game_Console_TOP u_ppu u_font mixed_RGB_1_valid", false,-1);
        tracep->declBus(c+995,"Game_Console_TOP u_ppu u_font mixed_RGB_2", false,-1, 17,0);
        tracep->declBit(c+996,"Game_Console_TOP u_ppu u_font mixed_RGB_2_valid", false,-1);
        tracep->declBus(c+997,"Game_Console_TOP u_ppu u_font mixed_RGB_3", false,-1, 17,0);
        tracep->declBit(c+998,"Game_Console_TOP u_ppu u_font mixed_RGB_3_valid", false,-1);
        tracep->declBus(c+999,"Game_Console_TOP u_ppu u_font mixed_RGB_4", false,-1, 17,0);
        tracep->declBit(c+1000,"Game_Console_TOP u_ppu u_font mixed_RGB_4_valid", false,-1);
        tracep->declBus(c+1001,"Game_Console_TOP u_ppu u_font mixed_RGB_5", false,-1, 17,0);
        tracep->declBit(c+1002,"Game_Console_TOP u_ppu u_font mixed_RGB_5_valid", false,-1);
        tracep->declBus(c+1003,"Game_Console_TOP u_ppu u_font mixed_RGB_6", false,-1, 17,0);
        tracep->declBit(c+1004,"Game_Console_TOP u_ppu u_font mixed_RGB_6_valid", false,-1);
        tracep->declBus(c+1005,"Game_Console_TOP u_ppu u_font mixed_RGB_7", false,-1, 17,0);
        tracep->declBit(c+1006,"Game_Console_TOP u_ppu u_font mixed_RGB_7_valid", false,-1);
        tracep->declBus(c+1007,"Game_Console_TOP u_ppu u_font mixed_RGB_8", false,-1, 17,0);
        tracep->declBit(c+1008,"Game_Console_TOP u_ppu u_font mixed_RGB_8_valid", false,-1);
        tracep->declBit(c+1009,"Game_Console_TOP u_ppu u_font mixed_RGB_shift", false,-1);
        tracep->declBus(c+1010,"Game_Console_TOP u_ppu u_font output_pixel_x", false,-1, 8,0);
        tracep->declBus(c+1011,"Game_Console_TOP u_ppu u_font output_pixel_y", false,-1, 8,0);
        tracep->declBit(c+1012,"Game_Console_TOP u_ppu u_font output_pixel_inc", false,-1);
        tracep->declBit(c+1013,"Game_Console_TOP u_ppu u_font RGB_reg_shift", false,-1);
        tracep->declBit(c+1014,"Game_Console_TOP u_ppu u_font RGB_reg_all_full", false,-1);
        tracep->declBit(c+1015,"Game_Console_TOP u_ppu u_font font_mix_end", false,-1);
        tracep->declBit(c+1016,"Game_Console_TOP u_ppu u_font mixed_RGB_w_ena", false,-1);
        tracep->declBit(c+1017,"Game_Console_TOP u_ppu u_font pipeline_move", false,-1);
        tracep->declBit(c+1018,"Game_Console_TOP u_ppu u_font pipe1_valid_next", false,-1);
        tracep->declBus(c+1019,"Game_Console_TOP u_ppu u_font pipe1_counter_16_next", false,-1, 3,0);
        tracep->declBus(c+1020,"Game_Console_TOP u_ppu u_font pipe1_font_x_next", false,-1, 5,0);
        tracep->declBus(c+1021,"Game_Console_TOP u_ppu u_font pipe1_font_y_next", false,-1, 5,0);
        tracep->declBit(c+1022,"Game_Console_TOP u_ppu u_font pipe1_next_line_next", false,-1);
        tracep->declBit(c+1023,"Game_Console_TOP u_ppu u_font bram_font_read_ena", false,-1);
        tracep->declBit(c+1024,"Game_Console_TOP u_ppu u_font bram_font_read_ena_reg", false,-1);
        tracep->declBit(c+1025,"Game_Console_TOP u_ppu u_font bram_map_read_ena", false,-1);
        tracep->declBit(c+1026,"Game_Console_TOP u_ppu u_font bram_map_read_ena_reg", false,-1);
        tracep->declBit(c+1027,"Game_Console_TOP u_ppu u_font pipe1_valid", false,-1);
        tracep->declBus(c+1028,"Game_Console_TOP u_ppu u_font pipe1_counter_16", false,-1, 3,0);
        tracep->declBus(c+1029,"Game_Console_TOP u_ppu u_font pipe1_font_x", false,-1, 5,0);
        tracep->declBus(c+1030,"Game_Console_TOP u_ppu u_font pipe1_font_y", false,-1, 5,0);
        tracep->declBit(c+1031,"Game_Console_TOP u_ppu u_font pipe1_next_line", false,-1);
        tracep->declBit(c+1032,"Game_Console_TOP u_ppu u_font pipe2_valid", false,-1);
        tracep->declBus(c+1033,"Game_Console_TOP u_ppu u_font pipe2_mask", false,-1, 3,0);
        tracep->declBus(c+1034,"Game_Console_TOP u_ppu u_font pipe2_font_x", false,-1, 5,0);
        tracep->declBus(c+1035,"Game_Console_TOP u_ppu u_font pipe2_font_y", false,-1, 5,0);
        tracep->declBus(c+1036,"Game_Console_TOP u_ppu u_font pipe2_counter_16", false,-1, 3,0);
        tracep->declBit(c+1037,"Game_Console_TOP u_ppu u_font pipe2_next_line", false,-1);
        tracep->declBit(c+1038,"Game_Console_TOP u_ppu u_font pipe3_valid", false,-1);
        tracep->declBus(c+1039,"Game_Console_TOP u_ppu u_font pipe3_UTF16", false,-1, 15,0);
        tracep->declBus(c+1040,"Game_Console_TOP u_ppu u_font pipe3_font_x", false,-1, 5,0);
        tracep->declBus(c+1041,"Game_Console_TOP u_ppu u_font pipe3_font_y", false,-1, 5,0);
        tracep->declBus(c+1042,"Game_Console_TOP u_ppu u_font pipe3_counter_16", false,-1, 3,0);
        tracep->declBit(c+1043,"Game_Console_TOP u_ppu u_font pipe3_next_line", false,-1);
        tracep->declBit(c+1044,"Game_Console_TOP u_ppu u_font pipe4_valid", false,-1);
        tracep->declBus(c+1045,"Game_Console_TOP u_ppu u_font pipe4_UTF16", false,-1, 15,0);
        tracep->declBit(c+1046,"Game_Console_TOP u_ppu u_font pipe4_is_korea", false,-1);
        tracep->declBit(c+1047,"Game_Console_TOP u_ppu u_font pipe4_is_ascii", false,-1);
        tracep->declBit(c+1048,"Game_Console_TOP u_ppu u_font pipe4_is_custom", false,-1);
        tracep->declBus(c+1049,"Game_Console_TOP u_ppu u_font pipe4_jung_sung_index", false,-1, 4,0);
        tracep->declBus(c+1050,"Game_Console_TOP u_ppu u_font pipe4_chong_sung_index", false,-1, 4,0);
        tracep->declBus(c+1051,"Game_Console_TOP u_ppu u_font pipe4_cho_sung_index", false,-1, 4,0);
        tracep->declBus(c+1052,"Game_Console_TOP u_ppu u_font pipe4_font_x", false,-1, 5,0);
        tracep->declBus(c+1053,"Game_Console_TOP u_ppu u_font pipe4_font_y", false,-1, 5,0);
        tracep->declBus(c+1054,"Game_Console_TOP u_ppu u_font pipe4_counter_16", false,-1, 3,0);
        tracep->declBit(c+1055,"Game_Console_TOP u_ppu u_font pipe4_next_line", false,-1);
        tracep->declBit(c+1056,"Game_Console_TOP u_ppu u_font pipe5_valid", false,-1);
        tracep->declBus(c+1057,"Game_Console_TOP u_ppu u_font pipe5_mask", false,-1, 3,0);
        tracep->declBit(c+1058,"Game_Console_TOP u_ppu u_font pipe5_cho_sung_what_bram", false,-1);
        tracep->declBit(c+1059,"Game_Console_TOP u_ppu u_font pipe5_custom_what_bram", false,-1);
        tracep->declBit(c+1060,"Game_Console_TOP u_ppu u_font pipe5_is_korea", false,-1);
        tracep->declBit(c+1061,"Game_Console_TOP u_ppu u_font pipe5_is_ascii", false,-1);
        tracep->declBit(c+1062,"Game_Console_TOP u_ppu u_font pipe5_is_custom", false,-1);
        tracep->declBus(c+1063,"Game_Console_TOP u_ppu u_font pipe5_font_x", false,-1, 5,0);
        tracep->declBus(c+1064,"Game_Console_TOP u_ppu u_font pipe5_font_y", false,-1, 5,0);
        tracep->declBus(c+1065,"Game_Console_TOP u_ppu u_font pipe5_counter_16", false,-1, 3,0);
        tracep->declBit(c+1066,"Game_Console_TOP u_ppu u_font pipe5_next_line", false,-1);
        tracep->declBit(c+1067,"Game_Console_TOP u_ppu u_font pipe6_valid", false,-1);
        tracep->declBit(c+1068,"Game_Console_TOP u_ppu u_font pipe6_is_korea", false,-1);
        tracep->declBit(c+1069,"Game_Console_TOP u_ppu u_font pipe6_is_ascii", false,-1);
        tracep->declBit(c+1070,"Game_Console_TOP u_ppu u_font pipe6_is_custom", false,-1);
        tracep->declBus(c+1071,"Game_Console_TOP u_ppu u_font pipe6_korea_font_bitmap", false,-1, 15,0);
        tracep->declBus(c+1072,"Game_Console_TOP u_ppu u_font pipe6_ascii_font_bitmap", false,-1, 7,0);
        tracep->declBus(c+1073,"Game_Console_TOP u_ppu u_font pipe6_custom_tile_bitmap", false,-1, 7,0);
        tracep->declBus(c+1074,"Game_Console_TOP u_ppu u_font pipe6_font_x", false,-1, 5,0);
        tracep->declBus(c+1075,"Game_Console_TOP u_ppu u_font pipe6_font_y", false,-1, 5,0);
        tracep->declBus(c+1076,"Game_Console_TOP u_ppu u_font pipe6_counter_16", false,-1, 3,0);
        tracep->declBit(c+1077,"Game_Console_TOP u_ppu u_font pipe6_next_line", false,-1);
        tracep->declBus(c+1078,"Game_Console_TOP u_ppu u_font cho_sung_set", false,-1, 3,0);
        tracep->declBus(c+1079,"Game_Console_TOP u_ppu u_font jung_sung_set", false,-1, 3,0);
        tracep->declBus(c+1080,"Game_Console_TOP u_ppu u_font chong_sung_set", false,-1, 3,0);
        tracep->declBus(c+1081,"Game_Console_TOP u_ppu u_font cho_sung_bram_ad", false,-1, 9,0);
        tracep->declBus(c+1082,"Game_Console_TOP u_ppu u_font jung_sung_bram_ad", false,-1, 9,0);
        tracep->declBus(c+1083,"Game_Console_TOP u_ppu u_font chong_sung_bram_ad", false,-1, 9,0);
        tracep->declBus(c+1084,"Game_Console_TOP u_ppu u_font ascii_bram_ad", false,-1, 9,0);
        tracep->declBus(c+1085,"Game_Console_TOP u_ppu u_font custom_tile_bram_ad", false,-1, 9,0);
        tracep->declBus(c+1086,"Game_Console_TOP u_ppu u_font base_index", false,-1, 13,0);
        tracep->declBus(c+1087,"Game_Console_TOP u_ppu u_font mid_quot", false,-1, 13,0);
        tracep->declBus(c+1088,"Game_Console_TOP u_ppu u_font chong_sung_index", false,-1, 4,0);
        tracep->declBus(c+1089,"Game_Console_TOP u_ppu u_font cho_sung_index", false,-1, 4,0);
        tracep->declBus(c+1090,"Game_Console_TOP u_ppu u_font jung_sung_index", false,-1, 4,0);
        tracep->declBit(c+1091,"Game_Console_TOP u_ppu u_font is_korea_wire", false,-1);
        tracep->declBit(c+1092,"Game_Console_TOP u_ppu u_font is_ascii_wire", false,-1);
        tracep->declBit(c+1093,"Game_Console_TOP u_ppu u_font is_custom_wire", false,-1);
        tracep->declBus(c+1051,"Game_Console_TOP u_ppu u_font cho_sung", false,-1, 4,0);
        tracep->declBus(c+1049,"Game_Console_TOP u_ppu u_font jung_sung", false,-1, 4,0);
        tracep->declBus(c+1050,"Game_Console_TOP u_ppu u_font chong_sung", false,-1, 4,0);
        tracep->declBit(c+1094,"Game_Console_TOP u_ppu u_font do_not_need_mix", false,-1);
        tracep->declBus(c+1095,"Game_Console_TOP u_ppu u_font organized_alpha_0_4", false,-1, 2,0);
        tracep->declBus(c+1096,"Game_Console_TOP u_ppu u_font organized_RGB", false,-1, 17,0);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_bg1 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_bg1 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_bg1 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_bg1 PPU_start", false,-1);
        tracep->declBit(c+1097,"Game_Console_TOP u_ppu u_bg1 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_bg1 is_background", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg1 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg1 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg1 is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg1 is_universal", false,-1);
        tracep->declBus(c+291,"Game_Console_TOP u_ppu u_bg1 WX", false,-1, 15,0);
        tracep->declBus(c+292,"Game_Console_TOP u_ppu u_bg1 WY", false,-1, 15,0);
        tracep->declBus(c+291,"Game_Console_TOP u_ppu u_bg1 SCX", false,-1, 15,0);
        tracep->declBus(c+292,"Game_Console_TOP u_ppu u_bg1 SCY", false,-1, 15,0);
        tracep->declBit(c+2101,"Game_Console_TOP u_ppu u_bg1 Pixel_valid", false,-1);
        tracep->declBus(c+479,"Game_Console_TOP u_ppu u_bg1 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+480,"Game_Console_TOP u_ppu u_bg1 Pixel_is_trans", false,-1);
        tracep->declBit(c+2102,"Game_Console_TOP u_ppu u_bg1 Pixel_ready", false,-1);
        tracep->declBit(c+473,"Game_Console_TOP u_ppu u_bg1 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+474,"Game_Console_TOP u_ppu u_bg1 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2041,"Game_Console_TOP u_ppu u_bg1 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+475,"Game_Console_TOP u_ppu u_bg1 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2081,"Game_Console_TOP u_ppu u_bg1 Lookup_ena", false,-1);
        tracep->declBus(c+2082,"Game_Console_TOP u_ppu u_bg1 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2310,"Game_Console_TOP u_ppu u_bg1 Lookup_end", false,-1);
        tracep->declBus(c+2311,"Game_Console_TOP u_ppu u_bg1 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2312,"Game_Console_TOP u_ppu u_bg1 Lookup_trans", false,-1);
        tracep->declQuad(c+1098,"Game_Console_TOP u_ppu u_bg1 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1100,"Game_Console_TOP u_ppu u_bg1 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1101,"Game_Console_TOP u_ppu u_bg1 RGB_reg_trans", false,-1);
        tracep->declBit(c+2313,"Game_Console_TOP u_ppu u_bg1 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1102,"Game_Console_TOP u_ppu u_bg1 RGB_reg_valid", false,-1);
        tracep->declBit(c+2314,"Game_Console_TOP u_ppu u_bg1 RGB_reg_ready", false,-1);
        tracep->declBus(c+1103,"Game_Console_TOP u_ppu u_bg1 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1104,"Game_Console_TOP u_ppu u_bg1 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1105,"Game_Console_TOP u_ppu u_bg1 main_state", false,-1, 3,0);
        tracep->declBus(c+2315,"Game_Console_TOP u_ppu u_bg1 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1106,"Game_Console_TOP u_ppu u_bg1 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1107,"Game_Console_TOP u_ppu u_bg1 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_bg1 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_bg1 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_bg1 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_bg1 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_bg1 READ", false,-1, 31,0);
        tracep->declBus(c+1108,"Game_Console_TOP u_ppu u_bg1 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2316,"Game_Console_TOP u_ppu u_bg1 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1109,"Game_Console_TOP u_ppu u_bg1 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2317,"Game_Console_TOP u_ppu u_bg1 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2318,"Game_Console_TOP u_ppu u_bg1 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1110,"Game_Console_TOP u_ppu u_bg1 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1111,"Game_Console_TOP u_ppu u_bg1 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1112,"Game_Console_TOP u_ppu u_bg1 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2319,"Game_Console_TOP u_ppu u_bg1 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1113,"Game_Console_TOP u_ppu u_bg1 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2320,"Game_Console_TOP u_ppu u_bg1 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2321,"Game_Console_TOP u_ppu u_bg1 rgb_convert_req", false,-1);
        tracep->declBit(c+2322,"Game_Console_TOP u_ppu u_bg1 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_bg2 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_bg2 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_bg2 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_bg2 PPU_start", false,-1);
        tracep->declBit(c+1114,"Game_Console_TOP u_ppu u_bg2 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_bg2 is_background", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg2 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg2 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg2 is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_bg2 is_universal", false,-1);
        tracep->declBus(c+293,"Game_Console_TOP u_ppu u_bg2 WX", false,-1, 15,0);
        tracep->declBus(c+294,"Game_Console_TOP u_ppu u_bg2 WY", false,-1, 15,0);
        tracep->declBus(c+293,"Game_Console_TOP u_ppu u_bg2 SCX", false,-1, 15,0);
        tracep->declBus(c+294,"Game_Console_TOP u_ppu u_bg2 SCY", false,-1, 15,0);
        tracep->declBit(c+2103,"Game_Console_TOP u_ppu u_bg2 Pixel_valid", false,-1);
        tracep->declBus(c+481,"Game_Console_TOP u_ppu u_bg2 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+482,"Game_Console_TOP u_ppu u_bg2 Pixel_is_trans", false,-1);
        tracep->declBit(c+2104,"Game_Console_TOP u_ppu u_bg2 Pixel_ready", false,-1);
        tracep->declBit(c+476,"Game_Console_TOP u_ppu u_bg2 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+477,"Game_Console_TOP u_ppu u_bg2 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2043,"Game_Console_TOP u_ppu u_bg2 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+478,"Game_Console_TOP u_ppu u_bg2 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2083,"Game_Console_TOP u_ppu u_bg2 Lookup_ena", false,-1);
        tracep->declBus(c+2084,"Game_Console_TOP u_ppu u_bg2 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2323,"Game_Console_TOP u_ppu u_bg2 Lookup_end", false,-1);
        tracep->declBus(c+2324,"Game_Console_TOP u_ppu u_bg2 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2325,"Game_Console_TOP u_ppu u_bg2 Lookup_trans", false,-1);
        tracep->declQuad(c+1115,"Game_Console_TOP u_ppu u_bg2 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1117,"Game_Console_TOP u_ppu u_bg2 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1118,"Game_Console_TOP u_ppu u_bg2 RGB_reg_trans", false,-1);
        tracep->declBit(c+2326,"Game_Console_TOP u_ppu u_bg2 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1119,"Game_Console_TOP u_ppu u_bg2 RGB_reg_valid", false,-1);
        tracep->declBit(c+2327,"Game_Console_TOP u_ppu u_bg2 RGB_reg_ready", false,-1);
        tracep->declBus(c+1120,"Game_Console_TOP u_ppu u_bg2 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1121,"Game_Console_TOP u_ppu u_bg2 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1122,"Game_Console_TOP u_ppu u_bg2 main_state", false,-1, 3,0);
        tracep->declBus(c+2328,"Game_Console_TOP u_ppu u_bg2 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1123,"Game_Console_TOP u_ppu u_bg2 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1124,"Game_Console_TOP u_ppu u_bg2 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_bg2 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_bg2 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_bg2 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_bg2 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_bg2 READ", false,-1, 31,0);
        tracep->declBus(c+1125,"Game_Console_TOP u_ppu u_bg2 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2329,"Game_Console_TOP u_ppu u_bg2 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1126,"Game_Console_TOP u_ppu u_bg2 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2330,"Game_Console_TOP u_ppu u_bg2 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2331,"Game_Console_TOP u_ppu u_bg2 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1127,"Game_Console_TOP u_ppu u_bg2 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1128,"Game_Console_TOP u_ppu u_bg2 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1129,"Game_Console_TOP u_ppu u_bg2 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2332,"Game_Console_TOP u_ppu u_bg2 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1130,"Game_Console_TOP u_ppu u_bg2 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2333,"Game_Console_TOP u_ppu u_bg2 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2334,"Game_Console_TOP u_ppu u_bg2 rgb_convert_req", false,-1);
        tracep->declBit(c+2335,"Game_Console_TOP u_ppu u_bg2 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_ch1 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_ch1 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_ch1 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_ch1 PPU_start", false,-1);
        tracep->declBit(c+1131,"Game_Console_TOP u_ppu u_ch1 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch1 is_background", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_ch1 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch1 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch1 is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch1 is_universal", false,-1);
        tracep->declBus(c+295,"Game_Console_TOP u_ppu u_ch1 WX", false,-1, 15,0);
        tracep->declBus(c+296,"Game_Console_TOP u_ppu u_ch1 WY", false,-1, 15,0);
        tracep->declBus(c+295,"Game_Console_TOP u_ppu u_ch1 SCX", false,-1, 15,0);
        tracep->declBus(c+296,"Game_Console_TOP u_ppu u_ch1 SCY", false,-1, 15,0);
        tracep->declBit(c+2105,"Game_Console_TOP u_ppu u_ch1 Pixel_valid", false,-1);
        tracep->declBus(c+483,"Game_Console_TOP u_ppu u_ch1 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+484,"Game_Console_TOP u_ppu u_ch1 Pixel_is_trans", false,-1);
        tracep->declBit(c+2106,"Game_Console_TOP u_ppu u_ch1 Pixel_ready", false,-1);
        tracep->declBit(c+461,"Game_Console_TOP u_ppu u_ch1 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+462,"Game_Console_TOP u_ppu u_ch1 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2033,"Game_Console_TOP u_ppu u_ch1 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+463,"Game_Console_TOP u_ppu u_ch1 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2085,"Game_Console_TOP u_ppu u_ch1 Lookup_ena", false,-1);
        tracep->declBus(c+2086,"Game_Console_TOP u_ppu u_ch1 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2336,"Game_Console_TOP u_ppu u_ch1 Lookup_end", false,-1);
        tracep->declBus(c+2337,"Game_Console_TOP u_ppu u_ch1 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2338,"Game_Console_TOP u_ppu u_ch1 Lookup_trans", false,-1);
        tracep->declQuad(c+1132,"Game_Console_TOP u_ppu u_ch1 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1134,"Game_Console_TOP u_ppu u_ch1 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1135,"Game_Console_TOP u_ppu u_ch1 RGB_reg_trans", false,-1);
        tracep->declBit(c+2339,"Game_Console_TOP u_ppu u_ch1 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1136,"Game_Console_TOP u_ppu u_ch1 RGB_reg_valid", false,-1);
        tracep->declBit(c+2340,"Game_Console_TOP u_ppu u_ch1 RGB_reg_ready", false,-1);
        tracep->declBus(c+1137,"Game_Console_TOP u_ppu u_ch1 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1138,"Game_Console_TOP u_ppu u_ch1 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1139,"Game_Console_TOP u_ppu u_ch1 main_state", false,-1, 3,0);
        tracep->declBus(c+2341,"Game_Console_TOP u_ppu u_ch1 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1140,"Game_Console_TOP u_ppu u_ch1 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1141,"Game_Console_TOP u_ppu u_ch1 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_ch1 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_ch1 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_ch1 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_ch1 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_ch1 READ", false,-1, 31,0);
        tracep->declBus(c+1142,"Game_Console_TOP u_ppu u_ch1 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2342,"Game_Console_TOP u_ppu u_ch1 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1143,"Game_Console_TOP u_ppu u_ch1 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2343,"Game_Console_TOP u_ppu u_ch1 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2344,"Game_Console_TOP u_ppu u_ch1 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1144,"Game_Console_TOP u_ppu u_ch1 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1145,"Game_Console_TOP u_ppu u_ch1 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1146,"Game_Console_TOP u_ppu u_ch1 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2345,"Game_Console_TOP u_ppu u_ch1 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1147,"Game_Console_TOP u_ppu u_ch1 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2346,"Game_Console_TOP u_ppu u_ch1 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2347,"Game_Console_TOP u_ppu u_ch1 rgb_convert_req", false,-1);
        tracep->declBit(c+2348,"Game_Console_TOP u_ppu u_ch1 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_ch2 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_ch2 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_ch2 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_ch2 PPU_start", false,-1);
        tracep->declBit(c+1148,"Game_Console_TOP u_ppu u_ch2 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch2 is_background", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_ch2 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch2 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch2 is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch2 is_universal", false,-1);
        tracep->declBus(c+297,"Game_Console_TOP u_ppu u_ch2 WX", false,-1, 15,0);
        tracep->declBus(c+298,"Game_Console_TOP u_ppu u_ch2 WY", false,-1, 15,0);
        tracep->declBus(c+297,"Game_Console_TOP u_ppu u_ch2 SCX", false,-1, 15,0);
        tracep->declBus(c+298,"Game_Console_TOP u_ppu u_ch2 SCY", false,-1, 15,0);
        tracep->declBit(c+2107,"Game_Console_TOP u_ppu u_ch2 Pixel_valid", false,-1);
        tracep->declBus(c+485,"Game_Console_TOP u_ppu u_ch2 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+486,"Game_Console_TOP u_ppu u_ch2 Pixel_is_trans", false,-1);
        tracep->declBit(c+2108,"Game_Console_TOP u_ppu u_ch2 Pixel_ready", false,-1);
        tracep->declBit(c+464,"Game_Console_TOP u_ppu u_ch2 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+465,"Game_Console_TOP u_ppu u_ch2 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2035,"Game_Console_TOP u_ppu u_ch2 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+466,"Game_Console_TOP u_ppu u_ch2 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2087,"Game_Console_TOP u_ppu u_ch2 Lookup_ena", false,-1);
        tracep->declBus(c+2088,"Game_Console_TOP u_ppu u_ch2 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2349,"Game_Console_TOP u_ppu u_ch2 Lookup_end", false,-1);
        tracep->declBus(c+2350,"Game_Console_TOP u_ppu u_ch2 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2351,"Game_Console_TOP u_ppu u_ch2 Lookup_trans", false,-1);
        tracep->declQuad(c+1149,"Game_Console_TOP u_ppu u_ch2 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1151,"Game_Console_TOP u_ppu u_ch2 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1152,"Game_Console_TOP u_ppu u_ch2 RGB_reg_trans", false,-1);
        tracep->declBit(c+2352,"Game_Console_TOP u_ppu u_ch2 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1153,"Game_Console_TOP u_ppu u_ch2 RGB_reg_valid", false,-1);
        tracep->declBit(c+2353,"Game_Console_TOP u_ppu u_ch2 RGB_reg_ready", false,-1);
        tracep->declBus(c+1154,"Game_Console_TOP u_ppu u_ch2 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1155,"Game_Console_TOP u_ppu u_ch2 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1156,"Game_Console_TOP u_ppu u_ch2 main_state", false,-1, 3,0);
        tracep->declBus(c+2354,"Game_Console_TOP u_ppu u_ch2 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1157,"Game_Console_TOP u_ppu u_ch2 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1158,"Game_Console_TOP u_ppu u_ch2 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_ch2 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_ch2 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_ch2 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_ch2 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_ch2 READ", false,-1, 31,0);
        tracep->declBus(c+1159,"Game_Console_TOP u_ppu u_ch2 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2355,"Game_Console_TOP u_ppu u_ch2 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1160,"Game_Console_TOP u_ppu u_ch2 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2356,"Game_Console_TOP u_ppu u_ch2 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2357,"Game_Console_TOP u_ppu u_ch2 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1161,"Game_Console_TOP u_ppu u_ch2 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1162,"Game_Console_TOP u_ppu u_ch2 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1163,"Game_Console_TOP u_ppu u_ch2 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2358,"Game_Console_TOP u_ppu u_ch2 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1164,"Game_Console_TOP u_ppu u_ch2 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2359,"Game_Console_TOP u_ppu u_ch2 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2360,"Game_Console_TOP u_ppu u_ch2 rgb_convert_req", false,-1);
        tracep->declBit(c+2361,"Game_Console_TOP u_ppu u_ch2 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_ch3 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_ch3 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_ch3 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_ch3 PPU_start", false,-1);
        tracep->declBit(c+1165,"Game_Console_TOP u_ppu u_ch3 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch3 is_background", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_ch3 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch3 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch3 is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch3 is_universal", false,-1);
        tracep->declBus(c+299,"Game_Console_TOP u_ppu u_ch3 WX", false,-1, 15,0);
        tracep->declBus(c+300,"Game_Console_TOP u_ppu u_ch3 WY", false,-1, 15,0);
        tracep->declBus(c+299,"Game_Console_TOP u_ppu u_ch3 SCX", false,-1, 15,0);
        tracep->declBus(c+300,"Game_Console_TOP u_ppu u_ch3 SCY", false,-1, 15,0);
        tracep->declBit(c+2109,"Game_Console_TOP u_ppu u_ch3 Pixel_valid", false,-1);
        tracep->declBus(c+487,"Game_Console_TOP u_ppu u_ch3 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+488,"Game_Console_TOP u_ppu u_ch3 Pixel_is_trans", false,-1);
        tracep->declBit(c+2110,"Game_Console_TOP u_ppu u_ch3 Pixel_ready", false,-1);
        tracep->declBit(c+467,"Game_Console_TOP u_ppu u_ch3 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+468,"Game_Console_TOP u_ppu u_ch3 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2037,"Game_Console_TOP u_ppu u_ch3 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+469,"Game_Console_TOP u_ppu u_ch3 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2089,"Game_Console_TOP u_ppu u_ch3 Lookup_ena", false,-1);
        tracep->declBus(c+2090,"Game_Console_TOP u_ppu u_ch3 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2362,"Game_Console_TOP u_ppu u_ch3 Lookup_end", false,-1);
        tracep->declBus(c+2363,"Game_Console_TOP u_ppu u_ch3 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2364,"Game_Console_TOP u_ppu u_ch3 Lookup_trans", false,-1);
        tracep->declQuad(c+1166,"Game_Console_TOP u_ppu u_ch3 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1168,"Game_Console_TOP u_ppu u_ch3 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1169,"Game_Console_TOP u_ppu u_ch3 RGB_reg_trans", false,-1);
        tracep->declBit(c+2365,"Game_Console_TOP u_ppu u_ch3 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1170,"Game_Console_TOP u_ppu u_ch3 RGB_reg_valid", false,-1);
        tracep->declBit(c+2366,"Game_Console_TOP u_ppu u_ch3 RGB_reg_ready", false,-1);
        tracep->declBus(c+1171,"Game_Console_TOP u_ppu u_ch3 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1172,"Game_Console_TOP u_ppu u_ch3 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1173,"Game_Console_TOP u_ppu u_ch3 main_state", false,-1, 3,0);
        tracep->declBus(c+2367,"Game_Console_TOP u_ppu u_ch3 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1174,"Game_Console_TOP u_ppu u_ch3 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1175,"Game_Console_TOP u_ppu u_ch3 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_ch3 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_ch3 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_ch3 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_ch3 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_ch3 READ", false,-1, 31,0);
        tracep->declBus(c+1176,"Game_Console_TOP u_ppu u_ch3 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2368,"Game_Console_TOP u_ppu u_ch3 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1177,"Game_Console_TOP u_ppu u_ch3 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2369,"Game_Console_TOP u_ppu u_ch3 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2370,"Game_Console_TOP u_ppu u_ch3 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1178,"Game_Console_TOP u_ppu u_ch3 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1179,"Game_Console_TOP u_ppu u_ch3 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1180,"Game_Console_TOP u_ppu u_ch3 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2371,"Game_Console_TOP u_ppu u_ch3 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1181,"Game_Console_TOP u_ppu u_ch3 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2372,"Game_Console_TOP u_ppu u_ch3 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2373,"Game_Console_TOP u_ppu u_ch3 rgb_convert_req", false,-1);
        tracep->declBit(c+2374,"Game_Console_TOP u_ppu u_ch3 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_ch4 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_ch4 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_ch4 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_ch4 PPU_start", false,-1);
        tracep->declBit(c+1182,"Game_Console_TOP u_ppu u_ch4 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch4 is_background", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_ch4 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch4 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch4 is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_ch4 is_universal", false,-1);
        tracep->declBus(c+301,"Game_Console_TOP u_ppu u_ch4 WX", false,-1, 15,0);
        tracep->declBus(c+302,"Game_Console_TOP u_ppu u_ch4 WY", false,-1, 15,0);
        tracep->declBus(c+301,"Game_Console_TOP u_ppu u_ch4 SCX", false,-1, 15,0);
        tracep->declBus(c+302,"Game_Console_TOP u_ppu u_ch4 SCY", false,-1, 15,0);
        tracep->declBit(c+2111,"Game_Console_TOP u_ppu u_ch4 Pixel_valid", false,-1);
        tracep->declBus(c+489,"Game_Console_TOP u_ppu u_ch4 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+490,"Game_Console_TOP u_ppu u_ch4 Pixel_is_trans", false,-1);
        tracep->declBit(c+2112,"Game_Console_TOP u_ppu u_ch4 Pixel_ready", false,-1);
        tracep->declBit(c+470,"Game_Console_TOP u_ppu u_ch4 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+471,"Game_Console_TOP u_ppu u_ch4 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2039,"Game_Console_TOP u_ppu u_ch4 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+472,"Game_Console_TOP u_ppu u_ch4 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2091,"Game_Console_TOP u_ppu u_ch4 Lookup_ena", false,-1);
        tracep->declBus(c+2092,"Game_Console_TOP u_ppu u_ch4 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2375,"Game_Console_TOP u_ppu u_ch4 Lookup_end", false,-1);
        tracep->declBus(c+2376,"Game_Console_TOP u_ppu u_ch4 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2377,"Game_Console_TOP u_ppu u_ch4 Lookup_trans", false,-1);
        tracep->declQuad(c+1183,"Game_Console_TOP u_ppu u_ch4 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1185,"Game_Console_TOP u_ppu u_ch4 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1186,"Game_Console_TOP u_ppu u_ch4 RGB_reg_trans", false,-1);
        tracep->declBit(c+2378,"Game_Console_TOP u_ppu u_ch4 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1187,"Game_Console_TOP u_ppu u_ch4 RGB_reg_valid", false,-1);
        tracep->declBit(c+2379,"Game_Console_TOP u_ppu u_ch4 RGB_reg_ready", false,-1);
        tracep->declBus(c+1188,"Game_Console_TOP u_ppu u_ch4 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1189,"Game_Console_TOP u_ppu u_ch4 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1190,"Game_Console_TOP u_ppu u_ch4 main_state", false,-1, 3,0);
        tracep->declBus(c+2380,"Game_Console_TOP u_ppu u_ch4 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1191,"Game_Console_TOP u_ppu u_ch4 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1192,"Game_Console_TOP u_ppu u_ch4 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_ch4 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_ch4 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_ch4 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_ch4 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_ch4 READ", false,-1, 31,0);
        tracep->declBus(c+1193,"Game_Console_TOP u_ppu u_ch4 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2381,"Game_Console_TOP u_ppu u_ch4 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1194,"Game_Console_TOP u_ppu u_ch4 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2382,"Game_Console_TOP u_ppu u_ch4 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2383,"Game_Console_TOP u_ppu u_ch4 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1195,"Game_Console_TOP u_ppu u_ch4 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1196,"Game_Console_TOP u_ppu u_ch4 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1197,"Game_Console_TOP u_ppu u_ch4 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2384,"Game_Console_TOP u_ppu u_ch4 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1198,"Game_Console_TOP u_ppu u_ch4 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2385,"Game_Console_TOP u_ppu u_ch4 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2386,"Game_Console_TOP u_ppu u_ch4 rgb_convert_req", false,-1);
        tracep->declBit(c+2387,"Game_Console_TOP u_ppu u_ch4 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_sc clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_sc resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_sc Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_sc PPU_start", false,-1);
        tracep->declBit(c+1199,"Game_Console_TOP u_ppu u_sc Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_sc is_background", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_sc is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_sc is_status", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_sc is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_sc is_universal", false,-1);
        tracep->declBus(c+303,"Game_Console_TOP u_ppu u_sc WX", false,-1, 15,0);
        tracep->declBus(c+304,"Game_Console_TOP u_ppu u_sc WY", false,-1, 15,0);
        tracep->declBus(c+303,"Game_Console_TOP u_ppu u_sc SCX", false,-1, 15,0);
        tracep->declBus(c+304,"Game_Console_TOP u_ppu u_sc SCY", false,-1, 15,0);
        tracep->declBit(c+2113,"Game_Console_TOP u_ppu u_sc Pixel_valid", false,-1);
        tracep->declBus(c+491,"Game_Console_TOP u_ppu u_sc Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+492,"Game_Console_TOP u_ppu u_sc Pixel_is_trans", false,-1);
        tracep->declBit(c+2114,"Game_Console_TOP u_ppu u_sc Pixel_ready", false,-1);
        tracep->declBit(c+455,"Game_Console_TOP u_ppu u_sc Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+456,"Game_Console_TOP u_ppu u_sc Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2029,"Game_Console_TOP u_ppu u_sc Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+457,"Game_Console_TOP u_ppu u_sc Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2093,"Game_Console_TOP u_ppu u_sc Lookup_ena", false,-1);
        tracep->declBus(c+2094,"Game_Console_TOP u_ppu u_sc Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2388,"Game_Console_TOP u_ppu u_sc Lookup_end", false,-1);
        tracep->declBus(c+2389,"Game_Console_TOP u_ppu u_sc Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2390,"Game_Console_TOP u_ppu u_sc Lookup_trans", false,-1);
        tracep->declQuad(c+1200,"Game_Console_TOP u_ppu u_sc decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1202,"Game_Console_TOP u_ppu u_sc RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1203,"Game_Console_TOP u_ppu u_sc RGB_reg_trans", false,-1);
        tracep->declBit(c+2391,"Game_Console_TOP u_ppu u_sc RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1204,"Game_Console_TOP u_ppu u_sc RGB_reg_valid", false,-1);
        tracep->declBit(c+2392,"Game_Console_TOP u_ppu u_sc RGB_reg_ready", false,-1);
        tracep->declBus(c+1205,"Game_Console_TOP u_ppu u_sc personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1206,"Game_Console_TOP u_ppu u_sc personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1207,"Game_Console_TOP u_ppu u_sc main_state", false,-1, 3,0);
        tracep->declBus(c+2393,"Game_Console_TOP u_ppu u_sc main_state_next", false,-1, 3,0);
        tracep->declBus(c+1208,"Game_Console_TOP u_ppu u_sc main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1209,"Game_Console_TOP u_ppu u_sc main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_sc IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_sc BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_sc NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_sc START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_sc READ", false,-1, 31,0);
        tracep->declBus(c+1210,"Game_Console_TOP u_ppu u_sc fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2394,"Game_Console_TOP u_ppu u_sc fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1211,"Game_Console_TOP u_ppu u_sc fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2395,"Game_Console_TOP u_ppu u_sc fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2396,"Game_Console_TOP u_ppu u_sc valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1212,"Game_Console_TOP u_ppu u_sc read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1213,"Game_Console_TOP u_ppu u_sc read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1214,"Game_Console_TOP u_ppu u_sc rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2397,"Game_Console_TOP u_ppu u_sc rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1215,"Game_Console_TOP u_ppu u_sc rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2398,"Game_Console_TOP u_ppu u_sc rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2399,"Game_Console_TOP u_ppu u_sc rgb_convert_req", false,-1);
        tracep->declBit(c+2400,"Game_Console_TOP u_ppu u_sc rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_st clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_st resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_st Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_st PPU_start", false,-1);
        tracep->declBit(c+1216,"Game_Console_TOP u_ppu u_st Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_st is_background", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_st is_character", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_st is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_st is_script", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_st is_universal", false,-1);
        tracep->declBus(c+305,"Game_Console_TOP u_ppu u_st WX", false,-1, 15,0);
        tracep->declBus(c+306,"Game_Console_TOP u_ppu u_st WY", false,-1, 15,0);
        tracep->declBus(c+305,"Game_Console_TOP u_ppu u_st SCX", false,-1, 15,0);
        tracep->declBus(c+306,"Game_Console_TOP u_ppu u_st SCY", false,-1, 15,0);
        tracep->declBit(c+2115,"Game_Console_TOP u_ppu u_st Pixel_valid", false,-1);
        tracep->declBus(c+493,"Game_Console_TOP u_ppu u_st Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+494,"Game_Console_TOP u_ppu u_st Pixel_is_trans", false,-1);
        tracep->declBit(c+2116,"Game_Console_TOP u_ppu u_st Pixel_ready", false,-1);
        tracep->declBit(c+458,"Game_Console_TOP u_ppu u_st Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+459,"Game_Console_TOP u_ppu u_st Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2031,"Game_Console_TOP u_ppu u_st Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+460,"Game_Console_TOP u_ppu u_st Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2095,"Game_Console_TOP u_ppu u_st Lookup_ena", false,-1);
        tracep->declBus(c+2096,"Game_Console_TOP u_ppu u_st Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2401,"Game_Console_TOP u_ppu u_st Lookup_end", false,-1);
        tracep->declBus(c+2402,"Game_Console_TOP u_ppu u_st Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2403,"Game_Console_TOP u_ppu u_st Lookup_trans", false,-1);
        tracep->declQuad(c+1217,"Game_Console_TOP u_ppu u_st decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1219,"Game_Console_TOP u_ppu u_st RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1220,"Game_Console_TOP u_ppu u_st RGB_reg_trans", false,-1);
        tracep->declBit(c+2404,"Game_Console_TOP u_ppu u_st RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1221,"Game_Console_TOP u_ppu u_st RGB_reg_valid", false,-1);
        tracep->declBit(c+2405,"Game_Console_TOP u_ppu u_st RGB_reg_ready", false,-1);
        tracep->declBus(c+1222,"Game_Console_TOP u_ppu u_st personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1223,"Game_Console_TOP u_ppu u_st personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1224,"Game_Console_TOP u_ppu u_st main_state", false,-1, 3,0);
        tracep->declBus(c+2406,"Game_Console_TOP u_ppu u_st main_state_next", false,-1, 3,0);
        tracep->declBus(c+1225,"Game_Console_TOP u_ppu u_st main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1226,"Game_Console_TOP u_ppu u_st main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_st IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_st BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_st NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_st START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_st READ", false,-1, 31,0);
        tracep->declBus(c+1227,"Game_Console_TOP u_ppu u_st fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2407,"Game_Console_TOP u_ppu u_st fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1228,"Game_Console_TOP u_ppu u_st fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2408,"Game_Console_TOP u_ppu u_st fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2409,"Game_Console_TOP u_ppu u_st valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1229,"Game_Console_TOP u_ppu u_st read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1230,"Game_Console_TOP u_ppu u_st read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1231,"Game_Console_TOP u_ppu u_st rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2410,"Game_Console_TOP u_ppu u_st rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1232,"Game_Console_TOP u_ppu u_st rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2411,"Game_Console_TOP u_ppu u_st rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2412,"Game_Console_TOP u_ppu u_st rgb_convert_req", false,-1);
        tracep->declBit(c+2413,"Game_Console_TOP u_ppu u_st rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_un1 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_un1 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_un1 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_un1 PPU_start", false,-1);
        tracep->declBit(c+1233,"Game_Console_TOP u_ppu u_un1 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un1 is_background", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un1 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un1 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un1 is_script", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_un1 is_universal", false,-1);
        tracep->declBus(c+307,"Game_Console_TOP u_ppu u_un1 WX", false,-1, 15,0);
        tracep->declBus(c+308,"Game_Console_TOP u_ppu u_un1 WY", false,-1, 15,0);
        tracep->declBus(c+307,"Game_Console_TOP u_ppu u_un1 SCX", false,-1, 15,0);
        tracep->declBus(c+308,"Game_Console_TOP u_ppu u_un1 SCY", false,-1, 15,0);
        tracep->declBit(c+2117,"Game_Console_TOP u_ppu u_un1 Pixel_valid", false,-1);
        tracep->declBus(c+495,"Game_Console_TOP u_ppu u_un1 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+496,"Game_Console_TOP u_ppu u_un1 Pixel_is_trans", false,-1);
        tracep->declBit(c+2118,"Game_Console_TOP u_ppu u_un1 Pixel_ready", false,-1);
        tracep->declBit(c+449,"Game_Console_TOP u_ppu u_un1 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+450,"Game_Console_TOP u_ppu u_un1 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2025,"Game_Console_TOP u_ppu u_un1 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+451,"Game_Console_TOP u_ppu u_un1 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2097,"Game_Console_TOP u_ppu u_un1 Lookup_ena", false,-1);
        tracep->declBus(c+2098,"Game_Console_TOP u_ppu u_un1 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2414,"Game_Console_TOP u_ppu u_un1 Lookup_end", false,-1);
        tracep->declBus(c+2415,"Game_Console_TOP u_ppu u_un1 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2416,"Game_Console_TOP u_ppu u_un1 Lookup_trans", false,-1);
        tracep->declQuad(c+1234,"Game_Console_TOP u_ppu u_un1 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1236,"Game_Console_TOP u_ppu u_un1 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1237,"Game_Console_TOP u_ppu u_un1 RGB_reg_trans", false,-1);
        tracep->declBit(c+2417,"Game_Console_TOP u_ppu u_un1 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1238,"Game_Console_TOP u_ppu u_un1 RGB_reg_valid", false,-1);
        tracep->declBit(c+2418,"Game_Console_TOP u_ppu u_un1 RGB_reg_ready", false,-1);
        tracep->declBus(c+1239,"Game_Console_TOP u_ppu u_un1 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1240,"Game_Console_TOP u_ppu u_un1 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1241,"Game_Console_TOP u_ppu u_un1 main_state", false,-1, 3,0);
        tracep->declBus(c+2419,"Game_Console_TOP u_ppu u_un1 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1242,"Game_Console_TOP u_ppu u_un1 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1243,"Game_Console_TOP u_ppu u_un1 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_un1 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_un1 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_un1 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_un1 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_un1 READ", false,-1, 31,0);
        tracep->declBus(c+1244,"Game_Console_TOP u_ppu u_un1 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2420,"Game_Console_TOP u_ppu u_un1 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1245,"Game_Console_TOP u_ppu u_un1 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2421,"Game_Console_TOP u_ppu u_un1 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2422,"Game_Console_TOP u_ppu u_un1 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1246,"Game_Console_TOP u_ppu u_un1 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1247,"Game_Console_TOP u_ppu u_un1 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1248,"Game_Console_TOP u_ppu u_un1 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2423,"Game_Console_TOP u_ppu u_un1 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1249,"Game_Console_TOP u_ppu u_un1 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2424,"Game_Console_TOP u_ppu u_un1 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2425,"Game_Console_TOP u_ppu u_un1 rgb_convert_req", false,-1);
        tracep->declBit(c+2426,"Game_Console_TOP u_ppu u_un1 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_un2 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_un2 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_un2 Clk_Counter", false,-1, 1,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_un2 PPU_start", false,-1);
        tracep->declBit(c+1250,"Game_Console_TOP u_ppu u_un2 Pixel_Reader_ena", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un2 is_background", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un2 is_character", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un2 is_status", false,-1);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_un2 is_script", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_un2 is_universal", false,-1);
        tracep->declBus(c+309,"Game_Console_TOP u_ppu u_un2 WX", false,-1, 15,0);
        tracep->declBus(c+310,"Game_Console_TOP u_ppu u_un2 WY", false,-1, 15,0);
        tracep->declBus(c+309,"Game_Console_TOP u_ppu u_un2 SCX", false,-1, 15,0);
        tracep->declBus(c+310,"Game_Console_TOP u_ppu u_un2 SCY", false,-1, 15,0);
        tracep->declBit(c+2119,"Game_Console_TOP u_ppu u_un2 Pixel_valid", false,-1);
        tracep->declBus(c+497,"Game_Console_TOP u_ppu u_un2 Pixel_RGB", false,-1, 17,0);
        tracep->declBit(c+498,"Game_Console_TOP u_ppu u_un2 Pixel_is_trans", false,-1);
        tracep->declBit(c+2120,"Game_Console_TOP u_ppu u_un2 Pixel_ready", false,-1);
        tracep->declBit(c+452,"Game_Console_TOP u_ppu u_un2 Decomp_fifo_r_master", false,-1);
        tracep->declBit(c+453,"Game_Console_TOP u_ppu u_un2 Decomp_fifo_empty", false,-1);
        tracep->declQuad(c+2027,"Game_Console_TOP u_ppu u_un2 Decomp_fifo_data", false,-1, 63,0);
        tracep->declBit(c+454,"Game_Console_TOP u_ppu u_un2 Decomp_fifo_dequeue", false,-1);
        tracep->declBit(c+2099,"Game_Console_TOP u_ppu u_un2 Lookup_ena", false,-1);
        tracep->declBus(c+2100,"Game_Console_TOP u_ppu u_un2 Lookup_pixel", false,-1, 7,0);
        tracep->declBit(c+2427,"Game_Console_TOP u_ppu u_un2 Lookup_end", false,-1);
        tracep->declBus(c+2428,"Game_Console_TOP u_ppu u_un2 Lookup_RGB", false,-1, 17,0);
        tracep->declBit(c+2429,"Game_Console_TOP u_ppu u_un2 Lookup_trans", false,-1);
        tracep->declQuad(c+1251,"Game_Console_TOP u_ppu u_un2 decomp_pixel_reg", false,-1, 63,0);
        tracep->declBus(c+1253,"Game_Console_TOP u_ppu u_un2 RGB_reg", false,-1, 17,0);
        tracep->declBit(c+1254,"Game_Console_TOP u_ppu u_un2 RGB_reg_trans", false,-1);
        tracep->declBit(c+2430,"Game_Console_TOP u_ppu u_un2 RGB_reg_w_ena", false,-1);
        tracep->declBit(c+1255,"Game_Console_TOP u_ppu u_un2 RGB_reg_valid", false,-1);
        tracep->declBit(c+2431,"Game_Console_TOP u_ppu u_un2 RGB_reg_ready", false,-1);
        tracep->declBus(c+1256,"Game_Console_TOP u_ppu u_un2 personal_counter_x", false,-1, 8,0);
        tracep->declBus(c+1257,"Game_Console_TOP u_ppu u_un2 personal_counter_y", false,-1, 8,0);
        tracep->declBus(c+1258,"Game_Console_TOP u_ppu u_un2 main_state", false,-1, 3,0);
        tracep->declBus(c+2432,"Game_Console_TOP u_ppu u_un2 main_state_next", false,-1, 3,0);
        tracep->declBus(c+1259,"Game_Console_TOP u_ppu u_un2 main_state_counter", false,-1, 3,0);
        tracep->declBus(c+1260,"Game_Console_TOP u_ppu u_un2 main_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_un2 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_un2 BG_START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_un2 NO_BG_START", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_un2 START", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_un2 READ", false,-1, 31,0);
        tracep->declBus(c+1261,"Game_Console_TOP u_ppu u_un2 fifo_r_state", false,-1, 3,0);
        tracep->declBus(c+2433,"Game_Console_TOP u_ppu u_un2 fifo_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1262,"Game_Console_TOP u_ppu u_un2 fifo_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2434,"Game_Console_TOP u_ppu u_un2 fifo_r_state_counter_next", false,-1, 3,0);
        tracep->declBus(c+2435,"Game_Console_TOP u_ppu u_un2 valid_pixel_check", false,-1, 7,0);
        tracep->declBus(c+1263,"Game_Console_TOP u_ppu u_un2 read_pixel_x", false,-1, 5,0);
        tracep->declBus(c+1264,"Game_Console_TOP u_ppu u_un2 read_pixel_y", false,-1, 8,0);
        tracep->declBus(c+1265,"Game_Console_TOP u_ppu u_un2 rgb_r_state", false,-1, 3,0);
        tracep->declBus(c+2436,"Game_Console_TOP u_ppu u_un2 rgb_r_state_next", false,-1, 3,0);
        tracep->declBus(c+1266,"Game_Console_TOP u_ppu u_un2 rgb_r_state_counter", false,-1, 3,0);
        tracep->declBus(c+2437,"Game_Console_TOP u_ppu u_un2 rgb_r_state_counter_next", false,-1, 3,0);
        tracep->declBit(c+2438,"Game_Console_TOP u_ppu u_un2 rgb_convert_req", false,-1);
        tracep->declBit(c+2439,"Game_Console_TOP u_ppu u_un2 rgb_convert_end", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2691,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2692,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM_size", false,-1);
        tracep->declBus(c+2693,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 PPU_start", false,-1);
        tracep->declBit(c+505,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2133,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1267,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+540,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+541,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+552,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_en_a", false,-1);
        tracep->declBus(c+553,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+555,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+557,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+554,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_en_b", false,-1);
        tracep->declBus(c+556,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+1,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_en_a", false,-1);
        tracep->declBus(c+2,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+3,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+4,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+6,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_en_b", false,-1);
        tracep->declBus(c+7,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+8,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_en_a", false,-1);
        tracep->declBus(c+9,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+10,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+11,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+13,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_en_b", false,-1);
        tracep->declBus(c+14,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+451,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+449,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2025,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+450,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 tdm_match", false,-1);
        tracep->declBit(c+1268,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1269,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1270,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2440,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1271,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1272,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1273,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1274,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1276,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1277,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1278,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+15,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1279,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+16,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_empty_256", false,-1);
        tracep->declBus(c+1280,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1281,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1282,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1283,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1284,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_full_128", false,-1);
        tracep->declBit(c+450,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 fifo_empty_128", false,-1);
        tracep->declBus(c+1285,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_state", false,-1, 3,0);
        tracep->declBus(c+1286,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1287,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 w_state", false,-1, 3,0);
        tracep->declBus(c+1288,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1289,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1290,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1291,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1293,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1294,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1295,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1296,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1297,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1299,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1300,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1301,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1302,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1303,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_8", false,-1, 7,0);
        tracep->declBit(c+1304,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_8_valid", false,-1);
        tracep->declBus(c+1305,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1306,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1307,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1308,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1309,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1310,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1311,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1312,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1313,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1314,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1315,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1316,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 r_end_req", false,-1);
        tracep->declBus(c+1317,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 w_8", false,-1, 7,0);
        tracep->declBit(c+1318,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 w_8_valid", false,-1);
        tracep->declBit(c+1319,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 w_8_ready", false,-1);
        tracep->declBit(c+1316,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni1 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2691,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2697,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM_size", false,-1);
        tracep->declBus(c+2698,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 PPU_start", false,-1);
        tracep->declBit(c+506,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2135,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1320,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+543,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+544,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+559,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_en_a", false,-1);
        tracep->declBus(c+560,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+562,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+564,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+561,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_en_b", false,-1);
        tracep->declBus(c+563,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+17,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_en_a", false,-1);
        tracep->declBus(c+18,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+19,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+20,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+22,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_en_b", false,-1);
        tracep->declBus(c+23,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+24,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_en_a", false,-1);
        tracep->declBus(c+25,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+26,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+27,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+29,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_en_b", false,-1);
        tracep->declBus(c+30,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+454,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+452,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2027,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+453,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 tdm_match", false,-1);
        tracep->declBit(c+1321,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1322,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1323,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2442,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1324,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1325,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1326,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1327,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1329,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1330,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1331,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+31,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1332,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+32,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_empty_256", false,-1);
        tracep->declBus(c+1333,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1334,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1335,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1336,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1337,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_full_128", false,-1);
        tracep->declBit(c+453,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 fifo_empty_128", false,-1);
        tracep->declBus(c+1338,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_state", false,-1, 3,0);
        tracep->declBus(c+1339,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1340,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 w_state", false,-1, 3,0);
        tracep->declBus(c+1341,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1342,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1343,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1344,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1346,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1347,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1348,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1349,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1350,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1352,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1353,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1354,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1355,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1356,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_8", false,-1, 7,0);
        tracep->declBit(c+1357,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_8_valid", false,-1);
        tracep->declBus(c+1358,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1359,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1360,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1361,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1362,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1363,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1364,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1365,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1366,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1367,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1368,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1369,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 r_end_req", false,-1);
        tracep->declBus(c+1370,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 w_8", false,-1, 7,0);
        tracep->declBit(c+1371,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 w_8_valid", false,-1);
        tracep->declBit(c+1372,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 w_8_ready", false,-1);
        tracep->declBit(c+1369,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_uni2 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2691,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2699,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM_size", false,-1);
        tracep->declBus(c+2700,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script PPU_start", false,-1);
        tracep->declBit(c+507,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2137,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1373,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+546,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+547,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+566,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_en_a", false,-1);
        tracep->declBus(c+567,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+569,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+571,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+568,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_en_b", false,-1);
        tracep->declBus(c+570,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+33,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_en_a", false,-1);
        tracep->declBus(c+34,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+35,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+36,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+38,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_en_b", false,-1);
        tracep->declBus(c+39,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+40,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_en_a", false,-1);
        tracep->declBus(c+41,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+42,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+43,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+45,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_en_b", false,-1);
        tracep->declBus(c+46,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+457,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+455,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2029,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+456,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script tdm_match", false,-1);
        tracep->declBit(c+1374,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1375,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1376,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2444,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1377,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1378,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1379,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1380,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1382,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1383,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1384,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+47,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1385,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+48,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_empty_256", false,-1);
        tracep->declBus(c+1386,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1387,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1388,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1389,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1390,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_full_128", false,-1);
        tracep->declBit(c+456,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script fifo_empty_128", false,-1);
        tracep->declBus(c+1391,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_state", false,-1, 3,0);
        tracep->declBus(c+1392,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_state_next", false,-1, 3,0);
        tracep->declBus(c+1393,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script w_state", false,-1, 3,0);
        tracep->declBus(c+1394,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script w_state_next", false,-1, 3,0);
        tracep->declBus(c+1395,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompress_state", false,-1, 3,0);
        tracep->declBus(c+1396,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1397,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1399,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1400,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1401,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1402,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1403,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1405,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1406,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1407,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1408,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1409,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_8", false,-1, 7,0);
        tracep->declBit(c+1410,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_8_valid", false,-1);
        tracep->declBus(c+1411,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1412,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1413,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1414,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1415,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1416,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1417,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1418,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1419,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1420,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1421,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1422,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script r_end_req", false,-1);
        tracep->declBus(c+1423,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script w_8", false,-1, 7,0);
        tracep->declBit(c+1424,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script w_8_valid", false,-1);
        tracep->declBit(c+1425,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script w_8_ready", false,-1);
        tracep->declBit(c+1422,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_script w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2691,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2701,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM_size", false,-1);
        tracep->declBus(c+2702,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status PPU_start", false,-1);
        tracep->declBit(c+508,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2139,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1426,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+549,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+550,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+573,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_en_a", false,-1);
        tracep->declBus(c+574,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+576,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+578,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+575,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_en_b", false,-1);
        tracep->declBus(c+577,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2608,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+49,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_en_a", false,-1);
        tracep->declBus(c+50,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+51,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+52,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+54,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_en_b", false,-1);
        tracep->declBus(c+55,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+56,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_en_a", false,-1);
        tracep->declBus(c+57,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+58,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+59,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+61,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_en_b", false,-1);
        tracep->declBus(c+62,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+458,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2031,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+459,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status tdm_match", false,-1);
        tracep->declBit(c+1427,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1428,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1429,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2446,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1430,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1431,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1432,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1433,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1435,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1436,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1437,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+63,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1438,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+64,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_empty_256", false,-1);
        tracep->declBus(c+1439,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1440,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1441,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1442,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1443,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_full_128", false,-1);
        tracep->declBit(c+459,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status fifo_empty_128", false,-1);
        tracep->declBus(c+1444,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_state", false,-1, 3,0);
        tracep->declBus(c+1445,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_state_next", false,-1, 3,0);
        tracep->declBus(c+1446,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status w_state", false,-1, 3,0);
        tracep->declBus(c+1447,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status w_state_next", false,-1, 3,0);
        tracep->declBus(c+1448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompress_state", false,-1, 3,0);
        tracep->declBus(c+1449,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1450,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1452,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1453,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1454,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1455,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1456,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1458,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1459,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1462,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_8", false,-1, 7,0);
        tracep->declBit(c+1463,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_8_valid", false,-1);
        tracep->declBus(c+1464,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1465,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1466,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1467,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1468,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1469,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1470,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1471,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1472,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1473,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1474,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1475,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status r_end_req", false,-1);
        tracep->declBus(c+1476,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status w_8", false,-1, 7,0);
        tracep->declBit(c+1477,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status w_8_valid", false,-1);
        tracep->declBit(c+1478,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status w_8_ready", false,-1);
        tracep->declBit(c+1475,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_status w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2703,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2692,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM_size", false,-1);
        tracep->declBus(c+2693,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 PPU_start", false,-1);
        tracep->declBit(c+509,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2125,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1479,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+524,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+525,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+65,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_en_a", false,-1);
        tracep->declBus(c+66,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+67,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+68,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+70,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_en_b", false,-1);
        tracep->declBus(c+71,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+580,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_en_a", false,-1);
        tracep->declBus(c+581,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+583,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+585,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+582,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_en_b", false,-1);
        tracep->declBus(c+584,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+72,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_en_a", false,-1);
        tracep->declBus(c+73,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+74,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+75,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+77,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_en_b", false,-1);
        tracep->declBus(c+78,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+463,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2033,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+462,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+526,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 tdm_match", false,-1);
        tracep->declBit(c+1480,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1481,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1482,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1483,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1484,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1485,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1486,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1488,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1489,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1490,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+79,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1491,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+80,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_empty_256", false,-1);
        tracep->declBus(c+1492,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1493,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1494,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1495,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1496,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_full_128", false,-1);
        tracep->declBit(c+462,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 fifo_empty_128", false,-1);
        tracep->declBus(c+1497,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_state", false,-1, 3,0);
        tracep->declBus(c+1498,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1499,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 w_state", false,-1, 3,0);
        tracep->declBus(c+1500,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1501,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1502,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1503,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1505,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1506,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1507,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1508,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1509,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1511,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1512,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1513,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1514,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1515,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_8", false,-1, 7,0);
        tracep->declBit(c+1516,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_8_valid", false,-1);
        tracep->declBus(c+1517,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1518,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1519,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1520,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1521,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1522,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1523,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1524,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1525,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1526,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1527,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1528,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 r_end_req", false,-1);
        tracep->declBus(c+1529,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 w_8", false,-1, 7,0);
        tracep->declBit(c+1530,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 w_8_valid", false,-1);
        tracep->declBit(c+1531,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 w_8_ready", false,-1);
        tracep->declBit(c+1528,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch1 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2703,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2697,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM_size", false,-1);
        tracep->declBus(c+2698,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 PPU_start", false,-1);
        tracep->declBit(c+510,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2127,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1532,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+528,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+529,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+81,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_en_a", false,-1);
        tracep->declBus(c+82,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+83,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+84,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+86,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_en_b", false,-1);
        tracep->declBus(c+87,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+587,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_en_a", false,-1);
        tracep->declBus(c+588,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+590,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+592,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+589,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_en_b", false,-1);
        tracep->declBus(c+591,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+88,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_en_a", false,-1);
        tracep->declBus(c+89,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+90,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+91,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+93,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_en_b", false,-1);
        tracep->declBus(c+94,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+466,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+464,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2035,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+465,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+530,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 tdm_match", false,-1);
        tracep->declBit(c+1533,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1534,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1535,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2450,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1536,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1537,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1538,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1539,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1541,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1542,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1543,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+95,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1544,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+96,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_empty_256", false,-1);
        tracep->declBus(c+1545,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1546,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1547,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1548,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1549,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_full_128", false,-1);
        tracep->declBit(c+465,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 fifo_empty_128", false,-1);
        tracep->declBus(c+1550,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_state", false,-1, 3,0);
        tracep->declBus(c+1551,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1552,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 w_state", false,-1, 3,0);
        tracep->declBus(c+1553,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1554,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1555,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1556,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1558,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1559,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1560,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1561,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1562,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1564,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1565,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1566,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1567,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1568,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_8", false,-1, 7,0);
        tracep->declBit(c+1569,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_8_valid", false,-1);
        tracep->declBus(c+1570,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1571,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1572,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1573,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1574,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1575,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1576,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1577,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1578,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1579,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1580,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1581,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 r_end_req", false,-1);
        tracep->declBus(c+1582,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 w_8", false,-1, 7,0);
        tracep->declBit(c+1583,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 w_8_valid", false,-1);
        tracep->declBit(c+1584,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 w_8_ready", false,-1);
        tracep->declBit(c+1585,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch2 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2703,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2699,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM_size", false,-1);
        tracep->declBus(c+2700,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 PPU_start", false,-1);
        tracep->declBit(c+511,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2129,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1586,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+532,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+533,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+97,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_en_a", false,-1);
        tracep->declBus(c+98,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+99,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+100,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+102,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_en_b", false,-1);
        tracep->declBus(c+103,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+594,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_en_a", false,-1);
        tracep->declBus(c+595,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+597,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+599,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+596,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_en_b", false,-1);
        tracep->declBus(c+598,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+104,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_en_a", false,-1);
        tracep->declBus(c+105,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+106,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+107,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+109,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_en_b", false,-1);
        tracep->declBus(c+110,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+469,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+467,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2037,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+468,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+534,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 tdm_match", false,-1);
        tracep->declBit(c+1587,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1588,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1589,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2452,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1590,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1591,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1592,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1593,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1595,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1596,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1597,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+111,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1598,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+112,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_empty_256", false,-1);
        tracep->declBus(c+1599,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1600,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1601,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1602,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1603,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_full_128", false,-1);
        tracep->declBit(c+468,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 fifo_empty_128", false,-1);
        tracep->declBus(c+1604,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_state", false,-1, 3,0);
        tracep->declBus(c+1605,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1606,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 w_state", false,-1, 3,0);
        tracep->declBus(c+1607,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1608,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1609,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1610,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1612,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1613,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1614,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1615,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1616,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1618,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1619,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1620,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1621,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1622,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_8", false,-1, 7,0);
        tracep->declBit(c+1623,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_8_valid", false,-1);
        tracep->declBus(c+1624,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1625,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1626,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1627,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1628,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1629,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1630,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1631,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1632,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1633,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1634,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1635,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 r_end_req", false,-1);
        tracep->declBus(c+1636,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 w_8", false,-1, 7,0);
        tracep->declBit(c+1637,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 w_8_valid", false,-1);
        tracep->declBit(c+1638,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 w_8_ready", false,-1);
        tracep->declBit(c+1639,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch3 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2703,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2701,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM_size", false,-1);
        tracep->declBus(c+2702,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 PPU_start", false,-1);
        tracep->declBit(c+512,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2131,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+1640,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+536,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+537,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+113,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_en_a", false,-1);
        tracep->declBus(c+114,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+115,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+116,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+118,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_en_b", false,-1);
        tracep->declBus(c+119,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+601,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_en_a", false,-1);
        tracep->declBus(c+602,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+604,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+606,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+603,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_en_b", false,-1);
        tracep->declBus(c+605,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2617,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+120,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_en_a", false,-1);
        tracep->declBus(c+121,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+122,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+123,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+125,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_en_b", false,-1);
        tracep->declBus(c+126,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+472,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+470,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2039,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+471,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+538,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 tdm_match", false,-1);
        tracep->declBit(c+1641,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1642,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1643,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2454,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1644,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1645,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1646,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1647,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1649,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1650,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1651,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+127,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1652,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+128,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_full_256", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_empty_256", false,-1);
        tracep->declBus(c+1653,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+1654,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1655,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+1656,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+1657,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_full_128", false,-1);
        tracep->declBit(c+471,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 fifo_empty_128", false,-1);
        tracep->declBus(c+1658,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_state", false,-1, 3,0);
        tracep->declBus(c+1659,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1660,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 w_state", false,-1, 3,0);
        tracep->declBus(c+1661,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1662,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1663,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1664,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1666,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1667,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1668,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1669,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1670,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1672,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1673,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1674,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1675,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_8", false,-1, 7,0);
        tracep->declBit(c+1677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_8_valid", false,-1);
        tracep->declBus(c+1678,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1685,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1686,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 r_end_req", false,-1);
        tracep->declBus(c+1690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 w_8", false,-1, 7,0);
        tracep->declBit(c+1691,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 w_8_valid", false,-1);
        tracep->declBit(c+1692,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 w_8_ready", false,-1);
        tracep->declBit(c+1689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_ch4 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2704,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2692,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM_size", false,-1);
        tracep->declBus(c+2705,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 PPU_start", false,-1);
        tracep->declBit(c+513,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+518,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2121,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+519,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+516,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+517,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+129,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_en_a", false,-1);
        tracep->declBus(c+130,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+131,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+132,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+134,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_en_b", false,-1);
        tracep->declBus(c+135,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+136,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_en_a", false,-1);
        tracep->declBus(c+137,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+138,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+139,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+141,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_en_b", false,-1);
        tracep->declBus(c+142,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+608,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_en_a", false,-1);
        tracep->declBus(c+609,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+611,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+613,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+610,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_en_b", false,-1);
        tracep->declBus(c+612,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2626,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+475,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+473,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2041,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+474,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+1693,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 tdm_match", false,-1);
        tracep->declBit(c+1694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1695,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2456,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1697,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1698,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1699,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1700,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1702,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1703,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1704,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+1705,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1706,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+1707,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+1708,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_full_256", false,-1);
        tracep->declBit(c+474,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_empty_256", false,-1);
        tracep->declBus(c+1709,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+143,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1710,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+144,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_full_128", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 fifo_empty_128", false,-1);
        tracep->declBus(c+1711,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_state", false,-1, 3,0);
        tracep->declBus(c+1712,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1713,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 w_state", false,-1, 3,0);
        tracep->declBus(c+1714,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1715,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1716,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1717,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1719,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1720,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1721,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1722,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1723,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1725,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1726,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1727,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1728,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1729,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_8", false,-1, 7,0);
        tracep->declBit(c+1730,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_8_valid", false,-1);
        tracep->declBus(c+1731,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1732,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1733,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1734,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1735,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1736,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1737,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1738,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1739,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1740,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1741,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1742,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 r_end_req", false,-1);
        tracep->declBus(c+1743,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 w_8", false,-1, 7,0);
        tracep->declBit(c+1744,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 w_8_valid", false,-1);
        tracep->declBit(c+1745,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 w_8_ready", false,-1);
        tracep->declBit(c+1742,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg1 w_end_req", false,-1);
        tracep->declBit(c+2460,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 clk", false,-1);
        tracep->declBit(c+2461,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 resetn", false,-1);
        tracep->declBus(c+448,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Clk_Counter", false,-1, 1,0);
        tracep->declBus(c+2704,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM_number", false,-1, 3,0);
        tracep->declBus(c+2699,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM_base", false,-1, 8,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM_size", false,-1);
        tracep->declBus(c+2704,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM_rw_counter_bits", false,-1, 3,0);
        tracep->declBit(c+239,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 PPU_start", false,-1);
        tracep->declBit(c+514,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Decompresser_is_IDLE", false,-1);
        tracep->declBit(c+522,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Compressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2123,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Compressed_FIFO_data", false,-1, 63,0);
        tracep->declBus(c+523,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Compressed_FIFO_count", false,-1, 8,0);
        tracep->declBit(c+520,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Compressed_FIFO_ena", false,-1);
        tracep->declBit(c+521,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Compressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+145,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_en_a", false,-1);
        tracep->declBus(c+146,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_we_a", false,-1, 0,0);
        tracep->declBus(c+147,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_addr_a", false,-1, 8,0);
        tracep->declQuad(c+148,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_din_a", false,-1, 63,0);
        tracep->declBit(c+150,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_en_b", false,-1);
        tracep->declBus(c+151,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM10_dout_b", false,-1, 63,0);
        tracep->declBit(c+152,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_en_a", false,-1);
        tracep->declBus(c+153,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_we_a", false,-1, 0,0);
        tracep->declBus(c+154,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_addr_a", false,-1, 8,0);
        tracep->declQuad(c+155,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_din_a", false,-1, 63,0);
        tracep->declBit(c+157,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_en_b", false,-1);
        tracep->declBus(c+158,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2694,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM11_dout_b", false,-1, 63,0);
        tracep->declBit(c+615,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_en_a", false,-1);
        tracep->declBus(c+616,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_we_a", false,-1, 0,0);
        tracep->declBus(c+618,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_addr_a", false,-1, 8,0);
        tracep->declQuad(c+620,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_din_a", false,-1, 63,0);
        tracep->declBit(c+617,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_en_b", false,-1);
        tracep->declBus(c+619,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_addr_b", false,-1, 8,0);
        tracep->declQuad(c+2626,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 BRAM12_dout_b", false,-1, 63,0);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Decompressed_FIFO_ena", false,-1);
        tracep->declBit(c+478,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Decompressed_FIFO_dequeue", false,-1);
        tracep->declBit(c+476,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Decompressed_FIFO_r_master", false,-1);
        tracep->declQuad(c+2043,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Decompressed_FIFO_data", false,-1, 63,0);
        tracep->declBit(c+477,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 Decompressed_FIFO_empty", false,-1);
        tracep->declBit(c+1746,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 tdm_match", false,-1);
        tracep->declBit(c+1747,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_fifo_r_end", false,-1);
        tracep->declBit(c+1748,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_fifo_w_end", false,-1);
        tracep->declBit(c+1749,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_fifo_r_ena", false,-1);
        tracep->declQuad(c+2458,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_fifo_r_data", false,-1, 63,0);
        tracep->declBit(c+1750,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_fifo_r_state", false,-1);
        tracep->declBit(c+1751,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_fifo_r_state_next", false,-1);
        tracep->declBit(c+1752,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_fifo_w_ena", false,-1);
        tracep->declQuad(c+1753,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_fifo_w_data", false,-1, 63,0);
        tracep->declBus(c+1755,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_fifo_r_state", false,-1, 1,0);
        tracep->declBus(c+1756,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_fifo_r_state_next", false,-1, 1,0);
        tracep->declBus(c+1757,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_front_256", false,-1, 8,0);
        tracep->declBit(c+1758,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_front_256_inc_ena", false,-1);
        tracep->declBus(c+1759,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_rear_256", false,-1, 8,0);
        tracep->declBit(c+1760,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_rear_256_inc_ena", false,-1);
        tracep->declBit(c+1761,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_full_256", false,-1);
        tracep->declBit(c+477,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_empty_256", false,-1);
        tracep->declBus(c+1762,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_front_128", false,-1, 7,0);
        tracep->declBit(c+159,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_front_128_inc_ena", false,-1);
        tracep->declBus(c+1763,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_rear_128", false,-1, 7,0);
        tracep->declBit(c+160,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_rear_128_inc_ena", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_full_128", false,-1);
        tracep->declBit(c+2684,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 fifo_empty_128", false,-1);
        tracep->declBus(c+1764,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_state", false,-1, 3,0);
        tracep->declBus(c+1765,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_state_next", false,-1, 3,0);
        tracep->declBus(c+1766,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 w_state", false,-1, 3,0);
        tracep->declBus(c+1767,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 w_state_next", false,-1, 3,0);
        tracep->declBus(c+1768,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompress_state", false,-1, 3,0);
        tracep->declBus(c+1769,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompress_state_next", false,-1, 3,0);
        tracep->declBus(c+2679,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 IDLE", false,-1, 31,0);
        tracep->declBus(c+2676,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 START", false,-1, 31,0);
        tracep->declBus(c+2680,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 COMPLETE", false,-1, 31,0);
        tracep->declBus(c+2681,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 PIXEL_REPEAT", false,-1, 31,0);
        tracep->declBus(c+2677,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 PIXEL_UNREPEAT", false,-1, 31,0);
        tracep->declBus(c+2682,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 SAME_PIXEL", false,-1, 31,0);
        tracep->declBus(c+2683,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 WAIT_DATA", false,-1, 31,0);
        tracep->declBus(c+2687,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 READ", false,-1, 31,0);
        tracep->declBus(c+2688,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 DELAY", false,-1, 31,0);
        tracep->declBus(c+2689,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 UNREPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2690,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 REPEAT_DELAY", false,-1, 31,0);
        tracep->declBus(c+2696,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 LAST_WRITE", false,-1, 31,0);
        tracep->declQuad(c+1770,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBit(c+1772,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_FIFO_reg_64_w_ena", false,-1);
        tracep->declBus(c+1773,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1774,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBit(c+1775,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_FIFO_reg_counter_reset", false,-1);
        tracep->declQuad(c+1776,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_FIFO_reg_64", false,-1, 63,0);
        tracep->declBus(c+1778,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_FIFO_reg_counter", false,-1, 2,0);
        tracep->declBit(c+1779,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_FIFO_reg_counter_inc_ena", false,-1);
        tracep->declBus(c+1780,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_FIFO_reg_wstrb", false,-1, 7,0);
        tracep->declBit(c+1781,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 decompressed_FIFO_reg_counter_reset", false,-1);
        tracep->declBus(c+1782,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_8", false,-1, 7,0);
        tracep->declBit(c+1783,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_8_valid", false,-1);
        tracep->declBus(c+1784,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_8_reg", false,-1, 7,0);
        tracep->declBit(c+1785,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_8_reg_w_ena", false,-1);
        tracep->declBus(c+1786,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 repeat_counter", false,-1, 6,0);
        tracep->declBit(c+1787,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 repeat_counter_w_ena", false,-1);
        tracep->declBit(c+1788,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 repeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1789,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 unrepeat_counter", false,-1, 6,0);
        tracep->declBit(c+1790,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 unrepeat_counter_w_ena", false,-1);
        tracep->declBit(c+1791,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 unrepeat_counter_dec_ena", false,-1);
        tracep->declBus(c+1792,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 pixel_reg", false,-1, 7,0);
        tracep->declBit(c+1793,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 pixel_reg_w_ena", false,-1);
        tracep->declBit(c+1794,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 compressed_FIFO_r_req", false,-1);
        tracep->declBit(c+1795,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 r_end_req", false,-1);
        tracep->declBus(c+1796,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 w_8", false,-1, 7,0);
        tracep->declBit(c+1797,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 w_8_valid", false,-1);
        tracep->declBit(c+1798,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 w_8_ready", false,-1);
        tracep->declBit(c+1799,"Game_Console_TOP u_ppu u_pixel_fifo u_decomp_bg2 w_end_req", false,-1);
    }
}

void VGame_Console_TOP::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VGame_Console_TOP::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VGame_Console_TOP::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_en_a));
        tracep->fullBit(oldp+2,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_we_a));
        tracep->fullSData(oldp+3,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_addr_a),9);
        tracep->fullQData(oldp+4,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_din_a),64);
        tracep->fullBit(oldp+6,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_en_b));
        tracep->fullSData(oldp+7,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_addr_b),9);
        tracep->fullBit(oldp+8,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_en_a));
        tracep->fullBit(oldp+9,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_we_a));
        tracep->fullSData(oldp+10,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_addr_a),9);
        tracep->fullQData(oldp+11,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_din_a),64);
        tracep->fullBit(oldp+13,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_en_b));
        tracep->fullSData(oldp+14,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_addr_b),9);
        tracep->fullBit(oldp+15,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+16,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+17,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_en_a));
        tracep->fullBit(oldp+18,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_we_a));
        tracep->fullSData(oldp+19,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_addr_a),9);
        tracep->fullQData(oldp+20,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_din_a),64);
        tracep->fullBit(oldp+22,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_en_b));
        tracep->fullSData(oldp+23,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_addr_b),9);
        tracep->fullBit(oldp+24,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_en_a));
        tracep->fullBit(oldp+25,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_we_a));
        tracep->fullSData(oldp+26,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_addr_a),9);
        tracep->fullQData(oldp+27,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_din_a),64);
        tracep->fullBit(oldp+29,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_en_b));
        tracep->fullSData(oldp+30,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_addr_b),9);
        tracep->fullBit(oldp+31,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+33,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_en_a));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_we_a));
        tracep->fullSData(oldp+35,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_addr_a),9);
        tracep->fullQData(oldp+36,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_din_a),64);
        tracep->fullBit(oldp+38,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_en_b));
        tracep->fullSData(oldp+39,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_addr_b),9);
        tracep->fullBit(oldp+40,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_en_a));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_we_a));
        tracep->fullSData(oldp+42,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_addr_a),9);
        tracep->fullQData(oldp+43,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_din_a),64);
        tracep->fullBit(oldp+45,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_en_b));
        tracep->fullSData(oldp+46,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_addr_b),9);
        tracep->fullBit(oldp+47,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+48,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_en_a));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_we_a));
        tracep->fullSData(oldp+51,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_addr_a),9);
        tracep->fullQData(oldp+52,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_din_a),64);
        tracep->fullBit(oldp+54,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_en_b));
        tracep->fullSData(oldp+55,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_addr_b),9);
        tracep->fullBit(oldp+56,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_en_a));
        tracep->fullBit(oldp+57,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_we_a));
        tracep->fullSData(oldp+58,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_addr_a),9);
        tracep->fullQData(oldp+59,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_din_a),64);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_en_b));
        tracep->fullSData(oldp+62,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_addr_b),9);
        tracep->fullBit(oldp+63,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+64,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+65,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_en_a));
        tracep->fullBit(oldp+66,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_we_a));
        tracep->fullSData(oldp+67,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_addr_a),9);
        tracep->fullQData(oldp+68,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_din_a),64);
        tracep->fullBit(oldp+70,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_en_b));
        tracep->fullSData(oldp+71,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_addr_b),9);
        tracep->fullBit(oldp+72,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_en_a));
        tracep->fullBit(oldp+73,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_we_a));
        tracep->fullSData(oldp+74,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_addr_a),9);
        tracep->fullQData(oldp+75,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_din_a),64);
        tracep->fullBit(oldp+77,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_en_b));
        tracep->fullSData(oldp+78,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_addr_b),9);
        tracep->fullBit(oldp+79,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+80,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+81,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_en_a));
        tracep->fullBit(oldp+82,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_we_a));
        tracep->fullSData(oldp+83,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_addr_a),9);
        tracep->fullQData(oldp+84,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_din_a),64);
        tracep->fullBit(oldp+86,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_en_b));
        tracep->fullSData(oldp+87,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_addr_b),9);
        tracep->fullBit(oldp+88,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_en_a));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_we_a));
        tracep->fullSData(oldp+90,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_addr_a),9);
        tracep->fullQData(oldp+91,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_din_a),64);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_en_b));
        tracep->fullSData(oldp+94,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_addr_b),9);
        tracep->fullBit(oldp+95,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_en_a));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_we_a));
        tracep->fullSData(oldp+99,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_addr_a),9);
        tracep->fullQData(oldp+100,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_din_a),64);
        tracep->fullBit(oldp+102,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_en_b));
        tracep->fullSData(oldp+103,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_addr_b),9);
        tracep->fullBit(oldp+104,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_en_a));
        tracep->fullBit(oldp+105,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_we_a));
        tracep->fullSData(oldp+106,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_addr_a),9);
        tracep->fullQData(oldp+107,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_din_a),64);
        tracep->fullBit(oldp+109,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_en_b));
        tracep->fullSData(oldp+110,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_addr_b),9);
        tracep->fullBit(oldp+111,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+112,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+113,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_en_a));
        tracep->fullBit(oldp+114,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_we_a));
        tracep->fullSData(oldp+115,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_addr_a),9);
        tracep->fullQData(oldp+116,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_din_a),64);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_en_b));
        tracep->fullSData(oldp+119,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_addr_b),9);
        tracep->fullBit(oldp+120,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_en_a));
        tracep->fullBit(oldp+121,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_we_a));
        tracep->fullSData(oldp+122,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_addr_a),9);
        tracep->fullQData(oldp+123,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_din_a),64);
        tracep->fullBit(oldp+125,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_en_b));
        tracep->fullSData(oldp+126,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_addr_b),9);
        tracep->fullBit(oldp+127,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_256_inc_ena));
        tracep->fullBit(oldp+128,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+129,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_en_a));
        tracep->fullBit(oldp+130,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_we_a));
        tracep->fullSData(oldp+131,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_addr_a),9);
        tracep->fullQData(oldp+132,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_din_a),64);
        tracep->fullBit(oldp+134,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_en_b));
        tracep->fullSData(oldp+135,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_addr_b),9);
        tracep->fullBit(oldp+136,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_en_a));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_we_a));
        tracep->fullSData(oldp+138,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_addr_a),9);
        tracep->fullQData(oldp+139,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_din_a),64);
        tracep->fullBit(oldp+141,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_en_b));
        tracep->fullSData(oldp+142,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_addr_b),9);
        tracep->fullBit(oldp+143,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_128_inc_ena));
        tracep->fullBit(oldp+144,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_en_a));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_we_a));
        tracep->fullSData(oldp+147,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_addr_a),9);
        tracep->fullQData(oldp+148,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_din_a),64);
        tracep->fullBit(oldp+150,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_en_b));
        tracep->fullSData(oldp+151,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_addr_b),9);
        tracep->fullBit(oldp+152,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_en_a));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_we_a));
        tracep->fullSData(oldp+154,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_addr_a),9);
        tracep->fullQData(oldp+155,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_din_a),64);
        tracep->fullBit(oldp+157,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_en_b));
        tracep->fullSData(oldp+158,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_addr_b),9);
        tracep->fullBit(oldp+159,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_128_inc_ena));
        tracep->fullBit(oldp+160,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+161,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid));
        tracep->fullBit(oldp+162,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr));
        tracep->fullIData(oldp+163,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata),32);
        tracep->fullCData(oldp+164,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb),4);
        tracep->fullBit(oldp+165,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__trace_valid));
        tracep->fullQData(oldp+166,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__trace_data),36);
        tracep->fullIData(oldp+168,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode),32);
        tracep->fullIData(oldp+169,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode),32);
        tracep->fullIData(oldp+170,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_addr),32);
        tracep->fullBit(oldp+171,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wr));
        tracep->fullIData(oldp+172,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_rd),32);
        tracep->fullBit(oldp+173,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready));
        tracep->fullBit(oldp+174,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wr));
        tracep->fullIData(oldp+175,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_rd),32);
        tracep->fullBit(oldp+176,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready));
        tracep->fullCData(oldp+177,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state),2);
        tracep->fullBit(oldp+178,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_secondword));
        tracep->fullBit(oldp+179,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_firstword_reg));
        tracep->fullBit(oldp+180,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__last_mem_valid));
        tracep->fullBit(oldp+181,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__prefetched_high_word));
        tracep->fullBit(oldp+182,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_fence));
        tracep->fullCData(oldp+183,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1),6);
        tracep->fullBit(oldp+184,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q));
        tracep->fullCData(oldp+185,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1),5);
        tracep->fullQData(oldp+186,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_ascii_instr),64);
        tracep->fullIData(oldp+188,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_imm),32);
        tracep->fullIData(oldp+189,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_opcode),32);
        tracep->fullCData(oldp+190,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs1),5);
        tracep->fullCData(oldp+191,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs2),5);
        tracep->fullCData(oldp+192,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rd),5);
        tracep->fullBit(oldp+193,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next));
        tracep->fullBit(oldp+194,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_valid_insn));
        tracep->fullQData(oldp+195,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_ascii_instr),64);
        tracep->fullIData(oldp+197,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_imm),32);
        tracep->fullIData(oldp+198,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_opcode),32);
        tracep->fullCData(oldp+199,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs1),5);
        tracep->fullCData(oldp+200,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs2),5);
        tracep->fullCData(oldp+201,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rd),5);
        tracep->fullBit(oldp+202,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_trace));
        tracep->fullBit(oldp+203,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0_q));
        tracep->fullBit(oldp+204,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_wait));
        tracep->fullBit(oldp+205,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_wait_2));
        tracep->fullBit(oldp+206,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word_q));
        tracep->fullBit(oldp+207,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q));
        tracep->fullQData(oldp+208,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1),64);
        tracep->fullQData(oldp+210,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2),64);
        tracep->fullQData(oldp+212,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd),64);
        tracep->fullQData(oldp+214,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx),64);
        tracep->fullQData(oldp+216,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1),64);
        tracep->fullQData(oldp+218,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2),64);
        tracep->fullQData(oldp+220,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2),64);
        tracep->fullQData(oldp+222,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd),64);
        tracep->fullQData(oldp+224,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx),64);
        tracep->fullQData(oldp+226,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt),64);
        tracep->fullCData(oldp+228,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter),7);
        tracep->fullBit(oldp+229,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting));
        tracep->fullBit(oldp+230,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish));
        tracep->fullBit(oldp+231,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__pcpi_wait_q));
        tracep->fullIData(oldp+232,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend),32);
        tracep->fullQData(oldp+233,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor),63);
        tracep->fullIData(oldp+235,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient),32);
        tracep->fullIData(oldp+236,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk),32);
        tracep->fullBit(oldp+237,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running));
        tracep->fullBit(oldp+238,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__outsign));
        tracep->fullBit(oldp+239,(vlTOPp->Game_Console_TOP__DOT__PPU_start));
        tracep->fullBit(oldp+240,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid));
        tracep->fullIData(oldp+241,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr),32);
        tracep->fullIData(oldp+242,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata),32);
        tracep->fullCData(oldp+243,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb),4);
        tracep->fullCData(oldp+244,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len),8);
        tracep->fullBit(oldp+245,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en));
        tracep->fullIData(oldp+246,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0U]),32);
        tracep->fullIData(oldp+247,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [1U]),32);
        tracep->fullIData(oldp+248,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [2U]),32);
        tracep->fullIData(oldp+249,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [3U]),32);
        tracep->fullIData(oldp+250,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [4U]),32);
        tracep->fullIData(oldp+251,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [5U]),32);
        tracep->fullIData(oldp+252,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [6U]),32);
        tracep->fullIData(oldp+253,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [7U]),32);
        tracep->fullIData(oldp+254,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [8U]),32);
        tracep->fullIData(oldp+255,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [9U]),32);
        tracep->fullIData(oldp+256,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0xaU]),32);
        tracep->fullIData(oldp+257,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0xbU]),32);
        tracep->fullIData(oldp+258,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0xcU]),32);
        tracep->fullIData(oldp+259,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0xdU]),32);
        tracep->fullIData(oldp+260,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0xeU]),32);
        tracep->fullIData(oldp+261,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0xfU]),32);
        tracep->fullIData(oldp+262,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x10U]),32);
        tracep->fullIData(oldp+263,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x11U]),32);
        tracep->fullIData(oldp+264,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x12U]),32);
        tracep->fullIData(oldp+265,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x13U]),32);
        tracep->fullIData(oldp+266,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x14U]),32);
        tracep->fullIData(oldp+267,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x15U]),32);
        tracep->fullIData(oldp+268,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x16U]),32);
        tracep->fullIData(oldp+269,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x17U]),32);
        tracep->fullIData(oldp+270,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x18U]),32);
        tracep->fullIData(oldp+271,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x19U]),32);
        tracep->fullIData(oldp+272,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1aU]),32);
        tracep->fullIData(oldp+273,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1bU]),32);
        tracep->fullIData(oldp+274,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1cU]),32);
        tracep->fullIData(oldp+275,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1dU]),32);
        tracep->fullIData(oldp+276,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1eU]),32);
        tracep->fullIData(oldp+277,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1fU]),32);
        tracep->fullIData(oldp+278,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x20U]),32);
        tracep->fullIData(oldp+279,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x21U]),32);
        tracep->fullIData(oldp+280,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x22U]),32);
        tracep->fullIData(oldp+281,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x23U]),32);
        tracep->fullIData(oldp+282,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x24U]),32);
        tracep->fullIData(oldp+283,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x25U]),32);
        tracep->fullIData(oldp+284,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x26U]),32);
        tracep->fullIData(oldp+285,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x27U]),32);
        tracep->fullIData(oldp+286,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x28U]),32);
        tracep->fullCData(oldp+287,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0xaU])),8);
        tracep->fullCData(oldp+288,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xaU] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+289,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xaU] 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+290,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xaU] 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+291,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0xbU])),16);
        tracep->fullSData(oldp+292,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0xbU] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+293,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0xdU])),16);
        tracep->fullSData(oldp+294,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0xdU] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+295,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0xfU])),16);
        tracep->fullSData(oldp+296,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0xfU] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+297,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x11U])),16);
        tracep->fullSData(oldp+298,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x11U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+299,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x13U])),16);
        tracep->fullSData(oldp+300,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x13U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+301,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x15U])),16);
        tracep->fullSData(oldp+302,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x15U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+303,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x17U])),16);
        tracep->fullSData(oldp+304,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x17U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+305,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x19U])),16);
        tracep->fullSData(oldp+306,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x19U] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+307,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x1bU])),16);
        tracep->fullSData(oldp+308,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x1bU] 
                                                >> 0x10U))),16);
        tracep->fullSData(oldp+309,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x1dU])),16);
        tracep->fullSData(oldp+310,((0xffffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x1dU] 
                                                >> 0x10U))),16);
        tracep->fullCData(oldp+311,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xcU] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+312,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0xcU])),8);
        tracep->fullCData(oldp+313,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xeU] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+314,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0xeU])),8);
        tracep->fullCData(oldp+315,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x10U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+316,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x10U])),8);
        tracep->fullCData(oldp+317,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x12U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+318,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x12U])),8);
        tracep->fullCData(oldp+319,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x14U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+320,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x14U])),8);
        tracep->fullCData(oldp+321,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x16U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+322,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x16U])),8);
        tracep->fullCData(oldp+323,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x18U] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+324,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x18U])),8);
        tracep->fullCData(oldp+325,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x1aU] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+326,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x1aU])),8);
        tracep->fullCData(oldp+327,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x1cU] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+328,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x1cU])),8);
        tracep->fullCData(oldp+329,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x1eU] 
                                              >> 8U))),8);
        tracep->fullCData(oldp+330,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                     [0x1eU])),8);
        tracep->fullCData(oldp+331,(vlTOPp->Game_Console_TOP__DOT__line_visible[0]),8);
        tracep->fullCData(oldp+332,(vlTOPp->Game_Console_TOP__DOT__line_visible[1]),8);
        tracep->fullCData(oldp+333,(vlTOPp->Game_Console_TOP__DOT__line_visible[2]),8);
        tracep->fullCData(oldp+334,(vlTOPp->Game_Console_TOP__DOT__line_visible[3]),8);
        tracep->fullCData(oldp+335,(vlTOPp->Game_Console_TOP__DOT__line_visible[4]),8);
        tracep->fullCData(oldp+336,(vlTOPp->Game_Console_TOP__DOT__line_visible[5]),8);
        tracep->fullCData(oldp+337,(vlTOPp->Game_Console_TOP__DOT__line_visible[6]),8);
        tracep->fullCData(oldp+338,(vlTOPp->Game_Console_TOP__DOT__line_visible[7]),8);
        tracep->fullCData(oldp+339,(vlTOPp->Game_Console_TOP__DOT__line_visible[8]),8);
        tracep->fullCData(oldp+340,(vlTOPp->Game_Console_TOP__DOT__line_visible[9]),8);
        tracep->fullCData(oldp+341,(vlTOPp->Game_Console_TOP__DOT__line_visible[10]),8);
        tracep->fullCData(oldp+342,(vlTOPp->Game_Console_TOP__DOT__line_visible[11]),8);
        tracep->fullCData(oldp+343,(vlTOPp->Game_Console_TOP__DOT__line_visible[12]),8);
        tracep->fullCData(oldp+344,(vlTOPp->Game_Console_TOP__DOT__line_visible[13]),8);
        tracep->fullCData(oldp+345,(vlTOPp->Game_Console_TOP__DOT__line_visible[14]),8);
        tracep->fullSData(oldp+346,(vlTOPp->Game_Console_TOP__DOT__line_rgb[0]),9);
        tracep->fullSData(oldp+347,(vlTOPp->Game_Console_TOP__DOT__line_rgb[1]),9);
        tracep->fullSData(oldp+348,(vlTOPp->Game_Console_TOP__DOT__line_rgb[2]),9);
        tracep->fullSData(oldp+349,(vlTOPp->Game_Console_TOP__DOT__line_rgb[3]),9);
        tracep->fullSData(oldp+350,(vlTOPp->Game_Console_TOP__DOT__line_rgb[4]),9);
        tracep->fullSData(oldp+351,(vlTOPp->Game_Console_TOP__DOT__line_rgb[5]),9);
        tracep->fullSData(oldp+352,(vlTOPp->Game_Console_TOP__DOT__line_rgb[6]),9);
        tracep->fullSData(oldp+353,(vlTOPp->Game_Console_TOP__DOT__line_rgb[7]),9);
        tracep->fullSData(oldp+354,(vlTOPp->Game_Console_TOP__DOT__line_rgb[8]),9);
        tracep->fullSData(oldp+355,(vlTOPp->Game_Console_TOP__DOT__line_rgb[9]),9);
        tracep->fullSData(oldp+356,(vlTOPp->Game_Console_TOP__DOT__line_rgb[10]),9);
        tracep->fullSData(oldp+357,(vlTOPp->Game_Console_TOP__DOT__line_rgb[11]),9);
        tracep->fullSData(oldp+358,(vlTOPp->Game_Console_TOP__DOT__line_rgb[12]),9);
        tracep->fullSData(oldp+359,(vlTOPp->Game_Console_TOP__DOT__line_rgb[13]),9);
        tracep->fullSData(oldp+360,(vlTOPp->Game_Console_TOP__DOT__line_rgb[14]),9);
        tracep->fullCData(oldp+361,(vlTOPp->Game_Console_TOP__DOT__line_alpha[0]),3);
        tracep->fullCData(oldp+362,(vlTOPp->Game_Console_TOP__DOT__line_alpha[1]),3);
        tracep->fullCData(oldp+363,(vlTOPp->Game_Console_TOP__DOT__line_alpha[2]),3);
        tracep->fullCData(oldp+364,(vlTOPp->Game_Console_TOP__DOT__line_alpha[3]),3);
        tracep->fullCData(oldp+365,(vlTOPp->Game_Console_TOP__DOT__line_alpha[4]),3);
        tracep->fullCData(oldp+366,(vlTOPp->Game_Console_TOP__DOT__line_alpha[5]),3);
        tracep->fullCData(oldp+367,(vlTOPp->Game_Console_TOP__DOT__line_alpha[6]),3);
        tracep->fullCData(oldp+368,(vlTOPp->Game_Console_TOP__DOT__line_alpha[7]),3);
        tracep->fullCData(oldp+369,(vlTOPp->Game_Console_TOP__DOT__line_alpha[8]),3);
        tracep->fullCData(oldp+370,(vlTOPp->Game_Console_TOP__DOT__line_alpha[9]),3);
        tracep->fullCData(oldp+371,(vlTOPp->Game_Console_TOP__DOT__line_alpha[10]),3);
        tracep->fullCData(oldp+372,(vlTOPp->Game_Console_TOP__DOT__line_alpha[11]),3);
        tracep->fullCData(oldp+373,(vlTOPp->Game_Console_TOP__DOT__line_alpha[12]),3);
        tracep->fullCData(oldp+374,(vlTOPp->Game_Console_TOP__DOT__line_alpha[13]),3);
        tracep->fullCData(oldp+375,(vlTOPp->Game_Console_TOP__DOT__line_alpha[14]),3);
        tracep->fullCData(oldp+376,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state),4);
        tracep->fullBit(oldp+377,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save));
        tracep->fullSData(oldp+378,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag),15);
        tracep->fullCData(oldp+379,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter),4);
        tracep->fullIData(oldp+380,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[0]),32);
        tracep->fullIData(oldp+381,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[1]),32);
        tracep->fullIData(oldp+382,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[2]),32);
        tracep->fullIData(oldp+383,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[3]),32);
        tracep->fullBit(oldp+384,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit));
        tracep->fullIData(oldp+385,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x29U]),32);
        tracep->fullCData(oldp+386,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state),4);
        tracep->fullBit(oldp+387,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_r));
        tracep->fullBit(oldp+388,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_w));
        tracep->fullBit(oldp+389,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_r));
        tracep->fullBit(oldp+390,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_w));
        tracep->fullBit(oldp+391,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_r));
        tracep->fullBit(oldp+392,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_w));
        tracep->fullBit(oldp+393,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_r));
        tracep->fullBit(oldp+394,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_w));
        tracep->fullBit(oldp+395,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_r));
        tracep->fullBit(oldp+396,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_w));
        tracep->fullBit(oldp+397,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_lut_w));
        tracep->fullBit(oldp+398,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_r));
        tracep->fullBit(oldp+399,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_w));
        tracep->fullBit(oldp+400,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending));
        tracep->fullCData(oldp+401,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_state_latched),8);
        tracep->fullIData(oldp+402,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__i),32);
        tracep->fullCData(oldp+403,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [0U]),8);
        tracep->fullCData(oldp+404,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [1U]),8);
        tracep->fullCData(oldp+405,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [2U]),8);
        tracep->fullCData(oldp+406,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [3U]),8);
        tracep->fullCData(oldp+407,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [4U]),8);
        tracep->fullCData(oldp+408,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [5U]),8);
        tracep->fullCData(oldp+409,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [6U]),8);
        tracep->fullCData(oldp+410,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [7U]),8);
        tracep->fullCData(oldp+411,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [8U]),8);
        tracep->fullCData(oldp+412,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [9U]),8);
        tracep->fullCData(oldp+413,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [0xaU]),8);
        tracep->fullCData(oldp+414,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [0xbU]),8);
        tracep->fullCData(oldp+415,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [0xcU]),8);
        tracep->fullCData(oldp+416,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [0xdU]),8);
        tracep->fullCData(oldp+417,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                    [0xeU]),8);
        tracep->fullSData(oldp+418,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U]),9);
        tracep->fullSData(oldp+419,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [1U]),9);
        tracep->fullSData(oldp+420,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [2U]),9);
        tracep->fullSData(oldp+421,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [3U]),9);
        tracep->fullSData(oldp+422,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [4U]),9);
        tracep->fullSData(oldp+423,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [5U]),9);
        tracep->fullSData(oldp+424,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [6U]),9);
        tracep->fullSData(oldp+425,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [7U]),9);
        tracep->fullSData(oldp+426,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U]),9);
        tracep->fullSData(oldp+427,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [9U]),9);
        tracep->fullSData(oldp+428,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0xaU]),9);
        tracep->fullSData(oldp+429,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0xbU]),9);
        tracep->fullSData(oldp+430,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0xcU]),9);
        tracep->fullSData(oldp+431,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0xdU]),9);
        tracep->fullSData(oldp+432,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0xeU]),9);
        tracep->fullCData(oldp+433,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0U]),3);
        tracep->fullCData(oldp+434,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [1U]),3);
        tracep->fullCData(oldp+435,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [2U]),3);
        tracep->fullCData(oldp+436,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [3U]),3);
        tracep->fullCData(oldp+437,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [4U]),3);
        tracep->fullCData(oldp+438,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [5U]),3);
        tracep->fullCData(oldp+439,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [6U]),3);
        tracep->fullCData(oldp+440,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [7U]),3);
        tracep->fullCData(oldp+441,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [8U]),3);
        tracep->fullCData(oldp+442,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [9U]),3);
        tracep->fullCData(oldp+443,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xaU]),3);
        tracep->fullCData(oldp+444,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xbU]),3);
        tracep->fullCData(oldp+445,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xcU]),3);
        tracep->fullCData(oldp+446,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xdU]),3);
        tracep->fullCData(oldp+447,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xeU]),3);
        tracep->fullCData(oldp+448,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter),2);
        tracep->fullBit(oldp+449,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+450,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+451,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+452,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+453,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+454,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+455,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+456,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+457,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+458,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+459,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+460,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+461,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+462,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+463,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+464,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+465,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+466,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+467,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+468,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+469,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+470,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+471,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128));
        tracep->fullBit(oldp+472,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+473,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+474,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256));
        tracep->fullBit(oldp+475,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Decomp_fifo_dequeue));
        tracep->fullBit(oldp+476,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master));
        tracep->fullBit(oldp+477,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256));
        tracep->fullBit(oldp+478,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Decomp_fifo_dequeue));
        tracep->fullIData(oldp+479,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_RGB),18);
        tracep->fullBit(oldp+480,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_is_trans));
        tracep->fullIData(oldp+481,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_RGB),18);
        tracep->fullBit(oldp+482,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_is_trans));
        tracep->fullIData(oldp+483,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_RGB),18);
        tracep->fullBit(oldp+484,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_is_trans));
        tracep->fullIData(oldp+485,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_RGB),18);
        tracep->fullBit(oldp+486,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_is_trans));
        tracep->fullIData(oldp+487,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_RGB),18);
        tracep->fullBit(oldp+488,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_is_trans));
        tracep->fullIData(oldp+489,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_RGB),18);
        tracep->fullBit(oldp+490,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_is_trans));
        tracep->fullIData(oldp+491,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_RGB),18);
        tracep->fullBit(oldp+492,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_is_trans));
        tracep->fullIData(oldp+493,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_RGB),18);
        tracep->fullBit(oldp+494,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_is_trans));
        tracep->fullIData(oldp+495,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_RGB),18);
        tracep->fullBit(oldp+496,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_is_trans));
        tracep->fullIData(oldp+497,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_RGB),18);
        tracep->fullBit(oldp+498,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_is_trans));
        tracep->fullIData(oldp+499,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB),18);
        tracep->fullBit(oldp+500,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid));
        tracep->fullIData(oldp+501,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB),18);
        tracep->fullBit(oldp+502,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid));
        tracep->fullBit(oldp+503,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end));
        tracep->fullBit(oldp+504,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end));
        tracep->fullBit(oldp+505,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state)))));
        tracep->fullBit(oldp+506,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state)))));
        tracep->fullBit(oldp+507,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state)))));
        tracep->fullBit(oldp+508,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state)))));
        tracep->fullBit(oldp+509,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state)))));
        tracep->fullBit(oldp+510,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state)))));
        tracep->fullBit(oldp+511,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state)))));
        tracep->fullBit(oldp+512,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state)))));
        tracep->fullBit(oldp+513,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state)))));
        tracep->fullBit(oldp+514,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
                                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state))) 
                                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state)))));
        tracep->fullBit(oldp+515,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE));
        tracep->fullBit(oldp+516,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena));
        tracep->fullBit(oldp+517,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue));
        tracep->fullBit(oldp+518,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master));
        tracep->fullSData(oldp+519,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count),9);
        tracep->fullBit(oldp+520,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena));
        tracep->fullBit(oldp+521,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue));
        tracep->fullBit(oldp+522,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master));
        tracep->fullSData(oldp+523,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count),9);
        tracep->fullBit(oldp+524,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue));
        tracep->fullBit(oldp+526,((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
        tracep->fullCData(oldp+527,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count),8);
        tracep->fullBit(oldp+528,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena));
        tracep->fullBit(oldp+529,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue));
        tracep->fullBit(oldp+530,((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
        tracep->fullCData(oldp+531,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count),8);
        tracep->fullBit(oldp+532,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena));
        tracep->fullBit(oldp+533,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue));
        tracep->fullBit(oldp+534,((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
        tracep->fullCData(oldp+535,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count),8);
        tracep->fullBit(oldp+536,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena));
        tracep->fullBit(oldp+537,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue));
        tracep->fullBit(oldp+538,((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
        tracep->fullCData(oldp+539,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count),8);
        tracep->fullBit(oldp+540,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena));
        tracep->fullBit(oldp+541,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue));
        tracep->fullCData(oldp+542,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count),8);
        tracep->fullBit(oldp+543,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena));
        tracep->fullBit(oldp+544,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue));
        tracep->fullCData(oldp+545,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count),8);
        tracep->fullBit(oldp+546,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena));
        tracep->fullBit(oldp+547,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue));
        tracep->fullCData(oldp+548,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count),8);
        tracep->fullBit(oldp+549,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena));
        tracep->fullBit(oldp+550,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue));
        tracep->fullCData(oldp+551,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count),8);
        tracep->fullBit(oldp+552,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_a));
        tracep->fullBit(oldp+553,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_we_a));
        tracep->fullBit(oldp+554,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_b));
        tracep->fullSData(oldp+555,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_a),9);
        tracep->fullSData(oldp+556,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_b),9);
        tracep->fullQData(oldp+557,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_din_a),64);
        tracep->fullBit(oldp+559,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_a));
        tracep->fullBit(oldp+560,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_we_a));
        tracep->fullBit(oldp+561,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_b));
        tracep->fullSData(oldp+562,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_a),9);
        tracep->fullSData(oldp+563,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_b),9);
        tracep->fullQData(oldp+564,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_din_a),64);
        tracep->fullBit(oldp+566,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_a));
        tracep->fullBit(oldp+567,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_we_a));
        tracep->fullBit(oldp+568,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_b));
        tracep->fullSData(oldp+569,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_a),9);
        tracep->fullSData(oldp+570,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_b),9);
        tracep->fullQData(oldp+571,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_din_a),64);
        tracep->fullBit(oldp+573,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_a));
        tracep->fullBit(oldp+574,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_we_a));
        tracep->fullBit(oldp+575,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_b));
        tracep->fullSData(oldp+576,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_a),9);
        tracep->fullSData(oldp+577,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_b),9);
        tracep->fullQData(oldp+578,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_din_a),64);
        tracep->fullBit(oldp+580,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_a));
        tracep->fullBit(oldp+581,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_we_a));
        tracep->fullBit(oldp+582,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_b));
        tracep->fullSData(oldp+583,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_a),9);
        tracep->fullSData(oldp+584,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_b),9);
        tracep->fullQData(oldp+585,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_din_a),64);
        tracep->fullBit(oldp+587,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_a));
        tracep->fullBit(oldp+588,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_we_a));
        tracep->fullBit(oldp+589,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_b));
        tracep->fullSData(oldp+590,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_a),9);
        tracep->fullSData(oldp+591,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_b),9);
        tracep->fullQData(oldp+592,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_din_a),64);
        tracep->fullBit(oldp+594,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_a));
        tracep->fullBit(oldp+595,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_we_a));
        tracep->fullBit(oldp+596,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_b));
        tracep->fullSData(oldp+597,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_a),9);
        tracep->fullSData(oldp+598,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_b),9);
        tracep->fullQData(oldp+599,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_din_a),64);
        tracep->fullBit(oldp+601,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_a));
        tracep->fullBit(oldp+602,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_we_a));
        tracep->fullBit(oldp+603,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_b));
        tracep->fullSData(oldp+604,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_a),9);
        tracep->fullSData(oldp+605,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_b),9);
        tracep->fullQData(oldp+606,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_din_a),64);
        tracep->fullBit(oldp+608,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_a));
        tracep->fullBit(oldp+609,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_we_a));
        tracep->fullBit(oldp+610,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_b));
        tracep->fullSData(oldp+611,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_a),9);
        tracep->fullSData(oldp+612,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_b),9);
        tracep->fullQData(oldp+613,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_din_a),64);
        tracep->fullBit(oldp+615,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_a));
        tracep->fullBit(oldp+616,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_we_a));
        tracep->fullBit(oldp+617,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_b));
        tracep->fullSData(oldp+618,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_a),9);
        tracep->fullSData(oldp+619,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_b),9);
        tracep->fullQData(oldp+620,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_din_a),64);
        tracep->fullBit(oldp+622,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+623,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front),8);
        tracep->fullCData(oldp+624,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear),8);
        tracep->fullBit(oldp+625,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+626,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front),8);
        tracep->fullCData(oldp+627,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear),8);
        tracep->fullBit(oldp+628,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+629,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front),8);
        tracep->fullCData(oldp+630,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear),8);
        tracep->fullBit(oldp+631,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+632,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front),8);
        tracep->fullCData(oldp+633,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear),8);
        tracep->fullBit(oldp+634,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+635,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front),8);
        tracep->fullCData(oldp+636,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear),8);
        tracep->fullBit(oldp+637,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+638,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front),8);
        tracep->fullCData(oldp+639,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear),8);
        tracep->fullBit(oldp+640,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+641,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front),8);
        tracep->fullCData(oldp+642,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear),8);
        tracep->fullBit(oldp+643,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena))));
        tracep->fullCData(oldp+644,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front),8);
        tracep->fullCData(oldp+645,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear),8);
        tracep->fullBit(oldp+646,(((0x40U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena))));
        tracep->fullSData(oldp+647,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front),9);
        tracep->fullSData(oldp+648,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear),9);
        tracep->fullBit(oldp+649,(((0x40U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena))));
        tracep->fullSData(oldp+650,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front),9);
        tracep->fullSData(oldp+651,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear),9);
        tracep->fullBit(oldp+652,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want));
        tracep->fullBit(oldp+653,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want));
        tracep->fullBit(oldp+654,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want));
        tracep->fullBit(oldp+655,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want));
        tracep->fullBit(oldp+656,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want));
        tracep->fullBit(oldp+657,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want));
        tracep->fullBit(oldp+658,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want));
        tracep->fullBit(oldp+659,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want));
        tracep->fullBit(oldp+660,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want));
        tracep->fullBit(oldp+661,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want));
        tracep->fullCData(oldp+662,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state),4);
        tracep->fullCData(oldp+663,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state),3);
        tracep->fullCData(oldp+664,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next),3);
        tracep->fullCData(oldp+665,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state),3);
        tracep->fullCData(oldp+666,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next),3);
        tracep->fullCData(oldp+667,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state),3);
        tracep->fullCData(oldp+668,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next),3);
        tracep->fullIData(oldp+669,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad),32);
        tracep->fullIData(oldp+670,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad),32);
        tracep->fullIData(oldp+671,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad),32);
        tracep->fullIData(oldp+672,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad),32);
        tracep->fullIData(oldp+673,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad),32);
        tracep->fullIData(oldp+674,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad),32);
        tracep->fullIData(oldp+675,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad),32);
        tracep->fullIData(oldp+676,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad),32);
        tracep->fullIData(oldp+677,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad),32);
        tracep->fullIData(oldp+678,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad),32);
        tracep->fullSData(oldp+679,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer),10);
        tracep->fullSData(oldp+680,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic),10);
        tracep->fullSData(oldp+681,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent),10);
        tracep->fullSData(oldp+682,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req),10);
        tracep->fullSData(oldp+683,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req),10);
        tracep->fullSData(oldp+684,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req),10);
        tracep->fullSData(oldp+685,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req),10);
        tracep->fullBit(oldp+686,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end));
        tracep->fullBit(oldp+687,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode));
        tracep->fullSData(oldp+688,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer),10);
        tracep->fullCData(oldp+689,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter),8);
        tracep->fullIData(oldp+690,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg),32);
        tracep->fullCData(oldp+691,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel),8);
        tracep->fullIData(oldp+692,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB),18);
        tracep->fullBit(oldp+693,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
        tracep->fullCData(oldp+694,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel),8);
        tracep->fullIData(oldp+695,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB),18);
        tracep->fullBit(oldp+696,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
        tracep->fullCData(oldp+697,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel),8);
        tracep->fullIData(oldp+698,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB),18);
        tracep->fullBit(oldp+699,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
        tracep->fullCData(oldp+700,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel),8);
        tracep->fullIData(oldp+701,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB),18);
        tracep->fullBit(oldp+702,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
        tracep->fullCData(oldp+703,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_pixel),8);
        tracep->fullIData(oldp+704,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_RGB),18);
        tracep->fullBit(oldp+705,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_valid));
        tracep->fullCData(oldp+706,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_pixel),8);
        tracep->fullIData(oldp+707,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_RGB),18);
        tracep->fullBit(oldp+708,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_valid));
        tracep->fullCData(oldp+709,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_pixel),8);
        tracep->fullIData(oldp+710,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_RGB),18);
        tracep->fullBit(oldp+711,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_valid));
        tracep->fullCData(oldp+712,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_pixel),8);
        tracep->fullIData(oldp+713,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_RGB),18);
        tracep->fullBit(oldp+714,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_valid));
        tracep->fullCData(oldp+715,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_pixel),8);
        tracep->fullIData(oldp+716,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_RGB),18);
        tracep->fullBit(oldp+717,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_valid));
        tracep->fullCData(oldp+718,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_pixel),8);
        tracep->fullIData(oldp+719,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_RGB),18);
        tracep->fullBit(oldp+720,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_valid));
        tracep->fullCData(oldp+721,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_pixel),8);
        tracep->fullIData(oldp+722,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_RGB),18);
        tracep->fullBit(oldp+723,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_valid));
        tracep->fullCData(oldp+724,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_pixel),8);
        tracep->fullIData(oldp+725,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_RGB),18);
        tracep->fullBit(oldp+726,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_valid));
        tracep->fullCData(oldp+727,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_pixel),8);
        tracep->fullIData(oldp+728,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_RGB),18);
        tracep->fullBit(oldp+729,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_valid));
        tracep->fullCData(oldp+730,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_pixel),8);
        tracep->fullIData(oldp+731,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_RGB),18);
        tracep->fullBit(oldp+732,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_valid));
        tracep->fullCData(oldp+733,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_pixel),8);
        tracep->fullIData(oldp+734,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_RGB),18);
        tracep->fullBit(oldp+735,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_valid));
        tracep->fullCData(oldp+736,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_pixel),8);
        tracep->fullIData(oldp+737,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_RGB),18);
        tracep->fullBit(oldp+738,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_valid));
        tracep->fullCData(oldp+739,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_3),2);
        tracep->fullBit(oldp+740,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1));
        tracep->fullCData(oldp+741,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2),2);
        tracep->fullBit(oldp+742,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel));
        tracep->fullIData(oldp+743,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB),18);
        tracep->fullBit(oldp+744,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans));
        tracep->fullCData(oldp+745,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_a),8);
        tracep->fullBit(oldp+746,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid));
        tracep->fullBit(oldp+747,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready));
        tracep->fullIData(oldp+748,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB),18);
        tracep->fullBit(oldp+749,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans));
        tracep->fullCData(oldp+750,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a),8);
        tracep->fullBit(oldp+751,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid));
        tracep->fullBit(oldp+752,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready));
        tracep->fullIData(oldp+753,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB),18);
        tracep->fullBit(oldp+754,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans));
        tracep->fullCData(oldp+755,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a),8);
        tracep->fullBit(oldp+756,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid));
        tracep->fullBit(oldp+757,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready));
        tracep->fullIData(oldp+758,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB),18);
        tracep->fullBit(oldp+759,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans));
        tracep->fullCData(oldp+760,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a),8);
        tracep->fullBit(oldp+761,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid));
        tracep->fullBit(oldp+762,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready));
        tracep->fullIData(oldp+763,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB),18);
        tracep->fullBit(oldp+764,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans));
        tracep->fullCData(oldp+765,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a),8);
        tracep->fullBit(oldp+766,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid));
        tracep->fullBit(oldp+767,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready));
        tracep->fullIData(oldp+768,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB),18);
        tracep->fullBit(oldp+769,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans));
        tracep->fullCData(oldp+770,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a),8);
        tracep->fullBit(oldp+771,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid));
        tracep->fullBit(oldp+772,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready));
        tracep->fullIData(oldp+773,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB),18);
        tracep->fullBit(oldp+774,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans));
        tracep->fullCData(oldp+775,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a),8);
        tracep->fullBit(oldp+776,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid));
        tracep->fullBit(oldp+777,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready));
        tracep->fullIData(oldp+778,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB),18);
        tracep->fullBit(oldp+779,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans));
        tracep->fullCData(oldp+780,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a),8);
        tracep->fullBit(oldp+781,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid));
        tracep->fullBit(oldp+782,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready));
        tracep->fullIData(oldp+783,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB),18);
        tracep->fullBit(oldp+784,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans));
        tracep->fullCData(oldp+785,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a),8);
        tracep->fullBit(oldp+786,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid));
        tracep->fullBit(oldp+787,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready));
        tracep->fullIData(oldp+788,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB),18);
        tracep->fullBit(oldp+789,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans));
        tracep->fullCData(oldp+790,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a),8);
        tracep->fullBit(oldp+791,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid));
        tracep->fullBit(oldp+792,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready));
        tracep->fullBit(oldp+793,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move));
        tracep->fullSData(oldp+794,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R),15);
        tracep->fullSData(oldp+795,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G),15);
        tracep->fullSData(oldp+796,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B),15);
        tracep->fullBit(oldp+797,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans));
        tracep->fullBit(oldp+798,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid));
        tracep->fullSData(oldp+799,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R),15);
        tracep->fullSData(oldp+800,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G),15);
        tracep->fullSData(oldp+801,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B),15);
        tracep->fullBit(oldp+802,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans));
        tracep->fullBit(oldp+803,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid));
        tracep->fullSData(oldp+804,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R),15);
        tracep->fullSData(oldp+805,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G),15);
        tracep->fullSData(oldp+806,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B),15);
        tracep->fullBit(oldp+807,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans));
        tracep->fullBit(oldp+808,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid));
        tracep->fullSData(oldp+809,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R),15);
        tracep->fullSData(oldp+810,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G),15);
        tracep->fullSData(oldp+811,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B),15);
        tracep->fullBit(oldp+812,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans));
        tracep->fullBit(oldp+813,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid));
        tracep->fullSData(oldp+814,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R),15);
        tracep->fullSData(oldp+815,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G),15);
        tracep->fullSData(oldp+816,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B),15);
        tracep->fullBit(oldp+817,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans));
        tracep->fullBit(oldp+818,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid));
        tracep->fullSData(oldp+819,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R),15);
        tracep->fullSData(oldp+820,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G),15);
        tracep->fullSData(oldp+821,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B),15);
        tracep->fullBit(oldp+822,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans));
        tracep->fullBit(oldp+823,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid));
        tracep->fullSData(oldp+824,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R),15);
        tracep->fullSData(oldp+825,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G),15);
        tracep->fullSData(oldp+826,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B),15);
        tracep->fullBit(oldp+827,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans));
        tracep->fullBit(oldp+828,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid));
        tracep->fullSData(oldp+829,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R),15);
        tracep->fullSData(oldp+830,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G),15);
        tracep->fullSData(oldp+831,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B),15);
        tracep->fullBit(oldp+832,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans));
        tracep->fullBit(oldp+833,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid));
        tracep->fullSData(oldp+834,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R),15);
        tracep->fullSData(oldp+835,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G),15);
        tracep->fullSData(oldp+836,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B),15);
        tracep->fullBit(oldp+837,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans));
        tracep->fullBit(oldp+838,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid));
        tracep->fullBit(oldp+839,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset));
        tracep->fullIData(oldp+840,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[0]),18);
        tracep->fullIData(oldp+841,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[1]),18);
        tracep->fullIData(oldp+842,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[2]),18);
        tracep->fullIData(oldp+843,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[3]),18);
        tracep->fullIData(oldp+844,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[4]),18);
        tracep->fullIData(oldp+845,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[5]),18);
        tracep->fullIData(oldp+846,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[6]),18);
        tracep->fullIData(oldp+847,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[7]),18);
        tracep->fullIData(oldp+848,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[8]),18);
        tracep->fullIData(oldp+849,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[9]),18);
        tracep->fullIData(oldp+850,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[10]),18);
        tracep->fullBit(oldp+851,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[0]));
        tracep->fullBit(oldp+852,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[1]));
        tracep->fullBit(oldp+853,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[2]));
        tracep->fullBit(oldp+854,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[3]));
        tracep->fullBit(oldp+855,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[4]));
        tracep->fullBit(oldp+856,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[5]));
        tracep->fullBit(oldp+857,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[6]));
        tracep->fullBit(oldp+858,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[7]));
        tracep->fullBit(oldp+859,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[8]));
        tracep->fullBit(oldp+860,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[9]));
        tracep->fullBit(oldp+861,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[10]));
        tracep->fullCData(oldp+862,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[0]),8);
        tracep->fullCData(oldp+863,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[1]),8);
        tracep->fullCData(oldp+864,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[2]),8);
        tracep->fullCData(oldp+865,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[3]),8);
        tracep->fullCData(oldp+866,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[4]),8);
        tracep->fullCData(oldp+867,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[5]),8);
        tracep->fullCData(oldp+868,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[6]),8);
        tracep->fullCData(oldp+869,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[7]),8);
        tracep->fullCData(oldp+870,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[8]),8);
        tracep->fullCData(oldp+871,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[9]),8);
        tracep->fullCData(oldp+872,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[10]),8);
        tracep->fullCData(oldp+873,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[0]),8);
        tracep->fullCData(oldp+874,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[1]),8);
        tracep->fullCData(oldp+875,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[2]),8);
        tracep->fullCData(oldp+876,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[3]),8);
        tracep->fullCData(oldp+877,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[4]),8);
        tracep->fullCData(oldp+878,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[5]),8);
        tracep->fullCData(oldp+879,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[6]),8);
        tracep->fullCData(oldp+880,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[7]),8);
        tracep->fullCData(oldp+881,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[8]),8);
        tracep->fullCData(oldp+882,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[9]),8);
        tracep->fullCData(oldp+883,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[10]),8);
        tracep->fullCData(oldp+884,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[0]),4);
        tracep->fullCData(oldp+885,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[1]),4);
        tracep->fullCData(oldp+886,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[2]),4);
        tracep->fullCData(oldp+887,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[3]),4);
        tracep->fullCData(oldp+888,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[4]),4);
        tracep->fullCData(oldp+889,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[5]),4);
        tracep->fullCData(oldp+890,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[6]),4);
        tracep->fullCData(oldp+891,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[7]),4);
        tracep->fullCData(oldp+892,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[8]),4);
        tracep->fullCData(oldp+893,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[9]),4);
        tracep->fullIData(oldp+894,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[0]),18);
        tracep->fullIData(oldp+895,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[1]),18);
        tracep->fullIData(oldp+896,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[2]),18);
        tracep->fullIData(oldp+897,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[3]),18);
        tracep->fullIData(oldp+898,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[4]),18);
        tracep->fullIData(oldp+899,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[5]),18);
        tracep->fullIData(oldp+900,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[6]),18);
        tracep->fullIData(oldp+901,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[7]),18);
        tracep->fullIData(oldp+902,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[8]),18);
        tracep->fullIData(oldp+903,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[9]),18);
        tracep->fullBit(oldp+904,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[0]));
        tracep->fullBit(oldp+905,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[1]));
        tracep->fullBit(oldp+906,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[2]));
        tracep->fullBit(oldp+907,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[3]));
        tracep->fullBit(oldp+908,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[4]));
        tracep->fullBit(oldp+909,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[5]));
        tracep->fullBit(oldp+910,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[6]));
        tracep->fullBit(oldp+911,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[7]));
        tracep->fullBit(oldp+912,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[8]));
        tracep->fullBit(oldp+913,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[9]));
        tracep->fullCData(oldp+914,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[0]),8);
        tracep->fullCData(oldp+915,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[1]),8);
        tracep->fullCData(oldp+916,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[2]),8);
        tracep->fullCData(oldp+917,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[3]),8);
        tracep->fullCData(oldp+918,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[4]),8);
        tracep->fullCData(oldp+919,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[5]),8);
        tracep->fullCData(oldp+920,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[6]),8);
        tracep->fullCData(oldp+921,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[7]),8);
        tracep->fullCData(oldp+922,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[8]),8);
        tracep->fullCData(oldp+923,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[9]),8);
        tracep->fullCData(oldp+924,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state),2);
        tracep->fullCData(oldp+925,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state),2);
        tracep->fullCData(oldp+926,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state),2);
        tracep->fullCData(oldp+927,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state),2);
        tracep->fullCData(oldp+928,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state),2);
        tracep->fullCData(oldp+929,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state),2);
        tracep->fullCData(oldp+930,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state),2);
        tracep->fullCData(oldp+931,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state),2);
        tracep->fullCData(oldp+932,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state),2);
        tracep->fullCData(oldp+933,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state),2);
        tracep->fullCData(oldp+934,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state),4);
        tracep->fullCData(oldp+935,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next),4);
        tracep->fullSData(oldp+936,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x),9);
        tracep->fullSData(oldp+937,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y),9);
        tracep->fullSData(oldp+938,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next),9);
        tracep->fullSData(oldp+939,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next),9);
        tracep->fullIData(oldp+940,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0U]))))))),18);
        tracep->fullIData(oldp+941,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [1U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [1U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [1U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [1U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [1U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [1U]))))))),18);
        tracep->fullIData(oldp+942,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [2U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [2U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [2U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [2U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [2U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [2U]))))))),18);
        tracep->fullIData(oldp+943,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [3U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [3U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [3U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [3U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [3U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [3U]))))))),18);
        tracep->fullIData(oldp+944,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [4U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [4U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [4U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [4U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [4U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [4U]))))))),18);
        tracep->fullIData(oldp+945,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [5U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [5U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [5U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [5U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [5U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [5U]))))))),18);
        tracep->fullIData(oldp+946,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [6U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [6U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [6U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [6U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [6U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [6U]))))))),18);
        tracep->fullIData(oldp+947,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [7U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [7U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [7U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [7U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [7U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [7U]))))))),18);
        tracep->fullIData(oldp+948,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [8U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [8U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [8U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [8U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [8U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [8U]))))))),18);
        tracep->fullIData(oldp+949,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [9U] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [9U] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [9U] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [9U] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [9U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [9U]))))))),18);
        tracep->fullIData(oldp+950,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xaU] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xaU] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xaU] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xaU] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xaU] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0xaU]))))))),18);
        tracep->fullIData(oldp+951,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xbU] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xbU] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xbU] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xbU] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xbU] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0xbU]))))))),18);
        tracep->fullIData(oldp+952,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xcU] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xcU] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xcU] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xcU] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xcU] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0xcU]))))))),18);
        tracep->fullIData(oldp+953,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xdU] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xdU] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xdU] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xdU] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xdU] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0xdU]))))))),18);
        tracep->fullIData(oldp+954,(((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xeU] 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xeU] << 6U)) 
                                        | ((0xe00U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xeU] 
                                               << 6U)) 
                                           | ((0x1c0U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xeU] 
                                                  << 3U)) 
                                              | ((0x38U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xeU] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0xeU]))))))),18);
        tracep->fullSData(oldp+955,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data),16);
        tracep->fullBit(oldp+956,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid));
        tracep->fullSData(oldp+957,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data),16);
        tracep->fullBit(oldp+958,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid));
        tracep->fullCData(oldp+959,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data),8);
        tracep->fullBit(oldp+960,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid));
        tracep->fullCData(oldp+961,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data),8);
        tracep->fullBit(oldp+962,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid));
        tracep->fullCData(oldp+963,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state),4);
        tracep->fullCData(oldp+964,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next),4);
        tracep->fullCData(oldp+965,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state),4);
        tracep->fullCData(oldp+966,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next),4);
        tracep->fullCData(oldp+967,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state),4);
        tracep->fullCData(oldp+968,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next),4);
        tracep->fullCData(oldp+969,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39),6);
        tracep->fullCData(oldp+970,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15),4);
        tracep->fullCData(oldp+971,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14),6);
        tracep->fullCData(oldp+972,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x),6);
        tracep->fullBit(oldp+973,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset));
        tracep->fullBit(oldp+974,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset));
        tracep->fullBit(oldp+975,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg));
        tracep->fullBit(oldp+976,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg_reg));
        tracep->fullIData(oldp+977,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg),18);
        tracep->fullBit(oldp+978,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid));
        tracep->fullIData(oldp+979,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg),18);
        tracep->fullBit(oldp+980,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid));
        tracep->fullIData(oldp+981,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg),18);
        tracep->fullBit(oldp+982,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid));
        tracep->fullIData(oldp+983,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg),18);
        tracep->fullBit(oldp+984,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid));
        tracep->fullIData(oldp+985,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg),18);
        tracep->fullBit(oldp+986,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid));
        tracep->fullIData(oldp+987,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg),18);
        tracep->fullBit(oldp+988,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid));
        tracep->fullIData(oldp+989,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg),18);
        tracep->fullBit(oldp+990,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid));
        tracep->fullIData(oldp+991,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg),18);
        tracep->fullBit(oldp+992,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid));
        tracep->fullIData(oldp+993,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1),18);
        tracep->fullBit(oldp+994,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid));
        tracep->fullIData(oldp+995,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2),18);
        tracep->fullBit(oldp+996,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid));
        tracep->fullIData(oldp+997,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3),18);
        tracep->fullBit(oldp+998,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid));
        tracep->fullIData(oldp+999,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4),18);
        tracep->fullBit(oldp+1000,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid));
        tracep->fullIData(oldp+1001,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5),18);
        tracep->fullBit(oldp+1002,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid));
        tracep->fullIData(oldp+1003,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6),18);
        tracep->fullBit(oldp+1004,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid));
        tracep->fullIData(oldp+1005,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7),18);
        tracep->fullBit(oldp+1006,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid));
        tracep->fullIData(oldp+1007,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8),18);
        tracep->fullBit(oldp+1008,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid));
        tracep->fullBit(oldp+1009,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift));
        tracep->fullSData(oldp+1010,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x),9);
        tracep->fullSData(oldp+1011,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y),9);
        tracep->fullBit(oldp+1012,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc));
        tracep->fullBit(oldp+1013,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift));
        tracep->fullBit(oldp+1014,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full));
        tracep->fullBit(oldp+1015,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end));
        tracep->fullBit(oldp+1016,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena));
        tracep->fullBit(oldp+1017,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move));
        tracep->fullBit(oldp+1018,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next));
        tracep->fullCData(oldp+1019,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next),4);
        tracep->fullCData(oldp+1020,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next),6);
        tracep->fullCData(oldp+1021,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next),6);
        tracep->fullBit(oldp+1022,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next));
        tracep->fullBit(oldp+1023,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena));
        tracep->fullBit(oldp+1024,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena_reg));
        tracep->fullBit(oldp+1025,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena));
        tracep->fullBit(oldp+1026,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena_reg));
        tracep->fullBit(oldp+1027,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid));
        tracep->fullCData(oldp+1028,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16),4);
        tracep->fullCData(oldp+1029,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x),6);
        tracep->fullCData(oldp+1030,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y),6);
        tracep->fullBit(oldp+1031,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line));
        tracep->fullBit(oldp+1032,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_valid));
        tracep->fullCData(oldp+1033,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask),4);
        tracep->fullCData(oldp+1034,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_x),6);
        tracep->fullCData(oldp+1035,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_y),6);
        tracep->fullCData(oldp+1036,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_counter_16),4);
        tracep->fullBit(oldp+1037,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line));
        tracep->fullBit(oldp+1038,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid));
        tracep->fullSData(oldp+1039,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16),16);
        tracep->fullCData(oldp+1040,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_x),6);
        tracep->fullCData(oldp+1041,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_y),6);
        tracep->fullCData(oldp+1042,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_counter_16),4);
        tracep->fullBit(oldp+1043,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_next_line));
        tracep->fullBit(oldp+1044,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid));
        tracep->fullSData(oldp+1045,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16),16);
        tracep->fullBit(oldp+1046,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea));
        tracep->fullBit(oldp+1047,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii));
        tracep->fullBit(oldp+1048,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom));
        tracep->fullCData(oldp+1049,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index),5);
        tracep->fullCData(oldp+1050,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index),5);
        tracep->fullCData(oldp+1051,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index),5);
        tracep->fullCData(oldp+1052,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_x),6);
        tracep->fullCData(oldp+1053,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_y),6);
        tracep->fullCData(oldp+1054,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16),4);
        tracep->fullBit(oldp+1055,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_next_line));
        tracep->fullBit(oldp+1056,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_valid));
        tracep->fullCData(oldp+1057,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask),4);
        tracep->fullBit(oldp+1058,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram));
        tracep->fullBit(oldp+1059,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram));
        tracep->fullBit(oldp+1060,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea));
        tracep->fullBit(oldp+1061,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii));
        tracep->fullBit(oldp+1062,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom));
        tracep->fullCData(oldp+1063,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_x),6);
        tracep->fullCData(oldp+1064,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_y),6);
        tracep->fullCData(oldp+1065,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_counter_16),4);
        tracep->fullBit(oldp+1066,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_next_line));
        tracep->fullBit(oldp+1067,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid));
        tracep->fullBit(oldp+1068,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea));
        tracep->fullBit(oldp+1069,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii));
        tracep->fullBit(oldp+1070,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom));
        tracep->fullSData(oldp+1071,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap),16);
        tracep->fullCData(oldp+1072,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap),8);
        tracep->fullCData(oldp+1073,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap),8);
        tracep->fullCData(oldp+1074,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x),6);
        tracep->fullCData(oldp+1075,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y),6);
        tracep->fullCData(oldp+1076,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_counter_16),4);
        tracep->fullBit(oldp+1077,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line));
        tracep->fullCData(oldp+1078,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set),4);
        tracep->fullCData(oldp+1079,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set),4);
        tracep->fullCData(oldp+1080,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set),4);
        tracep->fullSData(oldp+1081,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad),10);
        tracep->fullSData(oldp+1082,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad),10);
        tracep->fullSData(oldp+1083,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad),10);
        tracep->fullSData(oldp+1084,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad),10);
        tracep->fullSData(oldp+1085,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad),10);
        tracep->fullSData(oldp+1086,((0x3fffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                 - (IData)(0x2c00U)))),14);
        tracep->fullSData(oldp+1087,((0x3fffU & (((IData)(0x2493U) 
                                                  * 
                                                  (0x3fffU 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                      - (IData)(0x2c00U)))) 
                                                 >> 0x12U))),14);
        tracep->fullCData(oldp+1088,((0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                               - ((
                                                   (0x3ff0U 
                                                    & (((IData)(0x2493U) 
                                                        * 
                                                        (0x3fffU 
                                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                            - (IData)(0x2c00U)))) 
                                                       >> 0xeU)) 
                                                   + 
                                                   (0x3ff8U 
                                                    & (((IData)(0x2493U) 
                                                        * 
                                                        (0x3fffU 
                                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                            - (IData)(0x2c00U)))) 
                                                       >> 0xfU))) 
                                                  + 
                                                  (0x3ffcU 
                                                   & (((IData)(0x2493U) 
                                                       * 
                                                       (0x3fffU 
                                                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                           - (IData)(0x2c00U)))) 
                                                      >> 0x10U)))))),5);
        tracep->fullCData(oldp+1089,((0x1fU & (((IData)(0xc31U) 
                                                * (0x3fffU 
                                                   & (((IData)(0x2493U) 
                                                       * 
                                                       (0x3fffU 
                                                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                           - (IData)(0x2c00U)))) 
                                                      >> 0x12U))) 
                                               >> 0x10U))),5);
        tracep->fullCData(oldp+1090,((0x1fU & ((((IData)(0x2493U) 
                                                 * 
                                                 (0x3fffU 
                                                  & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                     - (IData)(0x2c00U)))) 
                                                >> 0x12U) 
                                               - ((
                                                   (0x1f0U 
                                                    & (((IData)(0xc31U) 
                                                        * 
                                                        (0x3fffU 
                                                         & (((IData)(0x2493U) 
                                                             * 
                                                             (0x3fffU 
                                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                                 - (IData)(0x2c00U)))) 
                                                            >> 0x12U))) 
                                                       >> 0xcU)) 
                                                   + 
                                                   (0x7cU 
                                                    & (((IData)(0xc31U) 
                                                        * 
                                                        (0x3fffU 
                                                         & (((IData)(0x2493U) 
                                                             * 
                                                             (0x3fffU 
                                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                                 - (IData)(0x2c00U)))) 
                                                            >> 0x12U))) 
                                                       >> 0xeU))) 
                                                  + 
                                                  (((IData)(0xc31U) 
                                                    * 
                                                    (0x3fffU 
                                                     & (((IData)(0x2493U) 
                                                         * 
                                                         (0x3fffU 
                                                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                             - (IData)(0x2c00U)))) 
                                                        >> 0x12U))) 
                                                   >> 0x10U))))),5);
        tracep->fullBit(oldp+1091,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire));
        tracep->fullBit(oldp+1092,(((0x20U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
                                    & (0x7eU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)))));
        tracep->fullBit(oldp+1093,(((0xe000U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
                                    & (0xe0abU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)))));
        tracep->fullBit(oldp+1094,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix));
        tracep->fullCData(oldp+1095,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4),3);
        tracep->fullIData(oldp+1096,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB),18);
        tracep->fullBit(oldp+1097,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0xcU]))));
        tracep->fullQData(oldp+1098,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1100,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1101,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1102,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1103,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1104,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1105,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state),4);
        tracep->fullCData(oldp+1106,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1107,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1108,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1109,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1110,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1111,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1112,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1113,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1114,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0xeU]))));
        tracep->fullQData(oldp+1115,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1117,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1118,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1119,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1120,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1121,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1122,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state),4);
        tracep->fullCData(oldp+1123,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1124,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1125,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1126,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1127,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1128,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1129,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1130,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1131,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x10U]))));
        tracep->fullQData(oldp+1132,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1134,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1135,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1136,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1137,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1138,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1139,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state),4);
        tracep->fullCData(oldp+1140,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1141,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1142,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1143,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1144,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1145,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1146,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1147,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1148,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x12U]))));
        tracep->fullQData(oldp+1149,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1151,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1152,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1153,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1154,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1155,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1156,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state),4);
        tracep->fullCData(oldp+1157,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1158,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1159,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1160,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1161,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1162,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1163,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1164,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1165,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x14U]))));
        tracep->fullQData(oldp+1166,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1168,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1169,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1170,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1171,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1172,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1173,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state),4);
        tracep->fullCData(oldp+1174,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1175,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1176,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1177,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1178,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1179,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1180,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1181,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1182,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x16U]))));
        tracep->fullQData(oldp+1183,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1185,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1186,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1187,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1188,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1189,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1190,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state),4);
        tracep->fullCData(oldp+1191,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1192,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1193,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1194,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1195,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1196,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1197,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1198,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1199,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x18U]))));
        tracep->fullQData(oldp+1200,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1202,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1203,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1204,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1205,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1206,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1207,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state),4);
        tracep->fullCData(oldp+1208,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1209,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1210,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1211,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1212,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1213,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1214,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1215,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1216,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x1aU]))));
        tracep->fullQData(oldp+1217,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1219,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1220,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1221,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1222,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1223,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1224,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state),4);
        tracep->fullCData(oldp+1225,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1226,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1227,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1228,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1229,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1230,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1231,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1232,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1233,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x1cU]))));
        tracep->fullQData(oldp+1234,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1236,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1237,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1238,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1239,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1240,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1241,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state),4);
        tracep->fullCData(oldp+1242,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1243,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1244,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1245,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1246,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1247,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1248,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1249,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state_counter),4);
        tracep->fullBit(oldp+1250,((0U != (0xffU & 
                                           vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                           [0x1eU]))));
        tracep->fullQData(oldp+1251,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__decomp_pixel_reg),64);
        tracep->fullIData(oldp+1253,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg),18);
        tracep->fullBit(oldp+1254,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_trans));
        tracep->fullBit(oldp+1255,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_valid));
        tracep->fullSData(oldp+1256,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__personal_counter_x),9);
        tracep->fullSData(oldp+1257,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__personal_counter_y),9);
        tracep->fullCData(oldp+1258,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state),4);
        tracep->fullCData(oldp+1259,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state_counter),4);
        tracep->fullCData(oldp+1260,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state_counter_next),4);
        tracep->fullCData(oldp+1261,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state),4);
        tracep->fullCData(oldp+1262,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state_counter),4);
        tracep->fullCData(oldp+1263,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__read_pixel_x),6);
        tracep->fullSData(oldp+1264,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__read_pixel_y),9);
        tracep->fullCData(oldp+1265,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state),4);
        tracep->fullCData(oldp+1266,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state_counter),4);
        tracep->fullSData(oldp+1267,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count),9);
        tracep->fullBit(oldp+1268,(((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1269,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1270,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state))));
        tracep->fullBit(oldp+1271,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1272,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1273,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1274,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1276,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1277,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1278,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1279,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1280,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1281,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1282,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1283,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1284,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1285,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state),4);
        tracep->fullCData(oldp+1286,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1287,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state),4);
        tracep->fullCData(oldp+1288,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1289,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1290,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1291,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1293,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1294,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1295,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1296,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1297,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1299,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1300,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1301,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1302,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1303,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8),8);
        tracep->fullBit(oldp+1304,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_valid));
        tracep->fullCData(oldp+1305,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1306,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1307,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1308,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1309,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1310,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1311,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1312,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1313,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1314,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1315,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1316,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_end_req));
        tracep->fullCData(oldp+1317,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8),8);
        tracep->fullBit(oldp+1318,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8_valid));
        tracep->fullBit(oldp+1319,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8_ready));
        tracep->fullSData(oldp+1320,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count),9);
        tracep->fullBit(oldp+1321,(((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1322,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1323,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state))));
        tracep->fullBit(oldp+1324,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1325,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1326,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1327,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1329,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1330,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1331,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1332,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1333,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1334,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1335,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1336,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1337,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1338,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state),4);
        tracep->fullCData(oldp+1339,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1340,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state),4);
        tracep->fullCData(oldp+1341,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1342,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1343,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1344,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1346,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1347,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1348,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1349,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1350,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1352,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1353,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1354,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1355,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1356,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8),8);
        tracep->fullBit(oldp+1357,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_valid));
        tracep->fullCData(oldp+1358,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1359,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1360,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1361,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1362,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1363,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1364,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1365,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1366,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1367,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1368,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1369,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_end_req));
        tracep->fullCData(oldp+1370,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8),8);
        tracep->fullBit(oldp+1371,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8_valid));
        tracep->fullBit(oldp+1372,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8_ready));
        tracep->fullSData(oldp+1373,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count),9);
        tracep->fullBit(oldp+1374,(((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
                                       & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1375,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1376,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state))));
        tracep->fullBit(oldp+1377,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1378,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1379,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1380,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1382,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1383,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1384,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1385,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1386,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1387,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1388,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1389,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1390,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1391,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state),4);
        tracep->fullCData(oldp+1392,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1393,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state),4);
        tracep->fullCData(oldp+1394,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1395,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1396,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1397,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1399,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1400,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1401,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1402,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1403,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1405,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1406,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1407,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1408,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1409,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8),8);
        tracep->fullBit(oldp+1410,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_valid));
        tracep->fullCData(oldp+1411,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1412,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1413,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1414,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1415,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1416,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1417,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1418,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1419,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1420,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1421,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1422,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_end_req));
        tracep->fullCData(oldp+1423,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8),8);
        tracep->fullBit(oldp+1424,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8_valid));
        tracep->fullBit(oldp+1425,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8_ready));
        tracep->fullSData(oldp+1426,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count),9);
        tracep->fullBit(oldp+1427,(((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
                                       & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1428,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1429,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state))));
        tracep->fullBit(oldp+1430,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1431,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1432,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1433,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1435,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1436,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1437,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1438,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1439,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1440,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1441,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1442,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1443,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1444,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state),4);
        tracep->fullCData(oldp+1445,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1446,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state),4);
        tracep->fullCData(oldp+1447,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1448,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1449,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1450,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1452,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1453,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1454,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1455,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1456,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1458,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1459,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1460,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1461,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1462,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8),8);
        tracep->fullBit(oldp+1463,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_valid));
        tracep->fullCData(oldp+1464,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1465,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1466,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1467,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1468,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1469,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1470,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1471,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1472,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1473,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1474,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1475,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_end_req));
        tracep->fullCData(oldp+1476,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8),8);
        tracep->fullBit(oldp+1477,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8_valid));
        tracep->fullBit(oldp+1478,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8_ready));
        tracep->fullSData(oldp+1479,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count),9);
        tracep->fullBit(oldp+1480,(((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1481,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1482,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state))));
        tracep->fullBit(oldp+1483,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1484,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1485,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1486,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1488,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1489,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1490,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1491,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1492,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1493,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1494,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1495,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1496,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1497,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state),4);
        tracep->fullCData(oldp+1498,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1499,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state),4);
        tracep->fullCData(oldp+1500,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1501,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1502,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1503,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1505,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1506,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1507,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1508,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1509,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1511,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1512,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1513,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1514,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1515,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8),8);
        tracep->fullBit(oldp+1516,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_valid));
        tracep->fullCData(oldp+1517,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1518,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1519,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1520,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1521,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1522,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1523,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1524,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1525,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1526,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1527,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1528,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_end_req));
        tracep->fullCData(oldp+1529,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8),8);
        tracep->fullBit(oldp+1530,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8_valid));
        tracep->fullBit(oldp+1531,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8_ready));
        tracep->fullSData(oldp+1532,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count),9);
        tracep->fullBit(oldp+1533,(((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1534,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1535,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state))));
        tracep->fullBit(oldp+1536,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1537,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1538,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1539,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1541,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1542,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1543,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1544,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1545,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1546,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1547,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1548,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1549,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1550,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state),4);
        tracep->fullCData(oldp+1551,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1552,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state),4);
        tracep->fullCData(oldp+1553,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1554,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1555,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1556,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1558,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1559,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1560,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1561,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1562,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1564,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1565,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1566,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1567,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1568,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8),8);
        tracep->fullBit(oldp+1569,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_valid));
        tracep->fullCData(oldp+1570,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1571,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1572,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1573,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1574,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1575,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1576,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1577,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1578,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1579,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1580,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1581,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_end_req));
        tracep->fullCData(oldp+1582,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8),8);
        tracep->fullBit(oldp+1583,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8_valid));
        tracep->fullBit(oldp+1584,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8_ready));
        tracep->fullBit(oldp+1585,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_end_req));
        tracep->fullSData(oldp+1586,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count),9);
        tracep->fullBit(oldp+1587,(((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
                                       & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1588,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1589,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state))));
        tracep->fullBit(oldp+1590,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1591,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1592,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1593,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1595,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1596,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1597,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1598,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1599,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1600,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1601,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1602,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1603,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1604,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state),4);
        tracep->fullCData(oldp+1605,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1606,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state),4);
        tracep->fullCData(oldp+1607,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1608,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1609,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1610,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1612,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1613,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1614,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1615,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1616,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1618,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1619,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1620,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1621,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1622,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8),8);
        tracep->fullBit(oldp+1623,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_valid));
        tracep->fullCData(oldp+1624,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1625,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1626,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1627,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1628,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1629,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1630,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1631,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1632,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1633,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1634,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1635,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_end_req));
        tracep->fullCData(oldp+1636,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8),8);
        tracep->fullBit(oldp+1637,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8_valid));
        tracep->fullBit(oldp+1638,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8_ready));
        tracep->fullBit(oldp+1639,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_end_req));
        tracep->fullSData(oldp+1640,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count),9);
        tracep->fullBit(oldp+1641,(((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
                                       & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
        tracep->fullBit(oldp+1642,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1643,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state))));
        tracep->fullBit(oldp+1644,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1645,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1646,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1647,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1649,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1650,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1651,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_256),9);
        tracep->fullSData(oldp+1652,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_256),9);
        tracep->fullCData(oldp+1653,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_128),8);
        tracep->fullBit(oldp+1654,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_128_inc_ena));
        tracep->fullCData(oldp+1655,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_128),8);
        tracep->fullBit(oldp+1656,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_128_inc_ena));
        tracep->fullBit(oldp+1657,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_full_128));
        tracep->fullCData(oldp+1658,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state),4);
        tracep->fullCData(oldp+1659,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1660,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state),4);
        tracep->fullCData(oldp+1661,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1662,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1663,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1664,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1666,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1667,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1668,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1669,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1670,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1672,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1673,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1674,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1675,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1676,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8),8);
        tracep->fullBit(oldp+1677,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_valid));
        tracep->fullCData(oldp+1678,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1679,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1680,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1681,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1682,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1683,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1684,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1685,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1686,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1687,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1688,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1689,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_end_req));
        tracep->fullCData(oldp+1690,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8),8);
        tracep->fullBit(oldp+1691,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8_valid));
        tracep->fullBit(oldp+1692,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8_ready));
        tracep->fullBit(oldp+1693,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__tdm_match));
        tracep->fullBit(oldp+1694,(((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__tdm_match) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master)))));
        tracep->fullBit(oldp+1695,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1696,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state))));
        tracep->fullBit(oldp+1697,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1698,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1699,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1700,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1702,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1703,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1704,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_256),9);
        tracep->fullBit(oldp+1705,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_256_inc_ena));
        tracep->fullSData(oldp+1706,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_256),9);
        tracep->fullBit(oldp+1707,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+1708,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_full_256));
        tracep->fullCData(oldp+1709,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_128),8);
        tracep->fullCData(oldp+1710,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_128),8);
        tracep->fullCData(oldp+1711,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state),4);
        tracep->fullCData(oldp+1712,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1713,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state),4);
        tracep->fullCData(oldp+1714,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1715,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1716,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1717,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1719,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1720,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1721,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1722,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1723,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1725,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1726,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1727,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1728,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1729,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8),8);
        tracep->fullBit(oldp+1730,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_valid));
        tracep->fullCData(oldp+1731,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1732,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1733,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1734,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1735,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1736,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1737,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1738,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1739,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1740,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1741,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1742,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_end_req));
        tracep->fullCData(oldp+1743,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8),8);
        tracep->fullBit(oldp+1744,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8_valid));
        tracep->fullBit(oldp+1745,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8_ready));
        tracep->fullBit(oldp+1746,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__tdm_match));
        tracep->fullBit(oldp+1747,(((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__tdm_match) 
                                    & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
                                        & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master)))));
        tracep->fullBit(oldp+1748,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_end));
        tracep->fullBit(oldp+1749,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state))));
        tracep->fullBit(oldp+1750,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_state));
        tracep->fullBit(oldp+1751,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_state_next));
        tracep->fullBit(oldp+1752,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_ena));
        tracep->fullQData(oldp+1753,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_data),64);
        tracep->fullCData(oldp+1755,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_r_state),2);
        tracep->fullCData(oldp+1756,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_r_state_next),2);
        tracep->fullSData(oldp+1757,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_256),9);
        tracep->fullBit(oldp+1758,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_256_inc_ena));
        tracep->fullSData(oldp+1759,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_256),9);
        tracep->fullBit(oldp+1760,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_256_inc_ena));
        tracep->fullBit(oldp+1761,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_full_256));
        tracep->fullCData(oldp+1762,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_128),8);
        tracep->fullCData(oldp+1763,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_128),8);
        tracep->fullCData(oldp+1764,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state),4);
        tracep->fullCData(oldp+1765,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state_next),4);
        tracep->fullCData(oldp+1766,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state),4);
        tracep->fullCData(oldp+1767,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state_next),4);
        tracep->fullCData(oldp+1768,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state),4);
        tracep->fullCData(oldp+1769,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state_next),4);
        tracep->fullQData(oldp+1770,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_64),64);
        tracep->fullBit(oldp+1772,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_64_w_ena));
        tracep->fullCData(oldp+1773,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1774,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter_inc_ena));
        tracep->fullBit(oldp+1775,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter_reset));
        tracep->fullQData(oldp+1776,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_64),64);
        tracep->fullCData(oldp+1778,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter),3);
        tracep->fullBit(oldp+1779,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
        tracep->fullCData(oldp+1780,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_wstrb),8);
        tracep->fullBit(oldp+1781,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter_reset));
        tracep->fullCData(oldp+1782,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8),8);
        tracep->fullBit(oldp+1783,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_valid));
        tracep->fullCData(oldp+1784,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_reg),8);
        tracep->fullBit(oldp+1785,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_reg_w_ena));
        tracep->fullCData(oldp+1786,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter),7);
        tracep->fullBit(oldp+1787,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter_w_ena));
        tracep->fullBit(oldp+1788,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter_dec_ena));
        tracep->fullCData(oldp+1789,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter),7);
        tracep->fullBit(oldp+1790,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter_w_ena));
        tracep->fullBit(oldp+1791,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter_dec_ena));
        tracep->fullCData(oldp+1792,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__pixel_reg),8);
        tracep->fullBit(oldp+1793,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__pixel_reg_w_ena));
        tracep->fullBit(oldp+1794,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_r_req));
        tracep->fullBit(oldp+1795,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_end_req));
        tracep->fullCData(oldp+1796,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8),8);
        tracep->fullBit(oldp+1797,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8_valid));
        tracep->fullBit(oldp+1798,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8_ready));
        tracep->fullBit(oldp+1799,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_end_req));
        tracep->fullBit(oldp+1800,(((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut)) 
                                     & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
                                    & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        tracep->fullBit(oldp+1801,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4)) 
                                    & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        tracep->fullBit(oldp+1802,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5)) 
                                    & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        tracep->fullBit(oldp+1803,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6)) 
                                    & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        tracep->fullBit(oldp+1804,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13)) 
                                    & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        tracep->fullBit(oldp+1805,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map)) 
                                    & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        tracep->fullIData(oldp+1806,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr),32);
        tracep->fullIData(oldp+1807,((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch) 
                                       | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst))
                                       ? (0xfffffffcU 
                                          & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_pc)
                                       : (0xfffffffcU 
                                          & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1))),32);
        tracep->fullIData(oldp+1808,(vlTOPp->Game_Console_TOP__DOT__cpu_la_wdata),32);
        tracep->fullCData(oldp+1809,(vlTOPp->Game_Console_TOP__DOT__cpu_la_wstrb),4);
        tracep->fullBit(oldp+1810,(vlTOPp->Game_Console_TOP__DOT__cpu_trap));
        tracep->fullBit(oldp+1811,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid));
        tracep->fullIData(oldp+1812,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn),32);
        tracep->fullIData(oldp+1813,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1),32);
        tracep->fullIData(oldp+1814,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2),32);
        tracep->fullIData(oldp+1815,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__eoi),32);
        tracep->fullQData(oldp+1816,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__count_cycle),64);
        tracep->fullQData(oldp+1818,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__count_instr),64);
        tracep->fullIData(oldp+1820,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_pc),32);
        tracep->fullIData(oldp+1821,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_next_pc),32);
        tracep->fullIData(oldp+1822,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_out),32);
        tracep->fullCData(oldp+1823,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_sh),5);
        tracep->fullIData(oldp+1824,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_pc),32);
        tracep->fullBit(oldp+1825,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_delay));
        tracep->fullBit(oldp+1826,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_active));
        tracep->fullIData(oldp+1827,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_mask),32);
        tracep->fullIData(oldp+1828,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_pending),32);
        tracep->fullIData(oldp+1829,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__timer),32);
        tracep->fullBit(oldp+1830,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait));
        tracep->fullBit(oldp+1831,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wait));
        tracep->fullBit(oldp+1832,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_wr));
        tracep->fullIData(oldp+1833,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_rd),32);
        tracep->fullBit(oldp+1834,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait) 
                                    | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wait))));
        tracep->fullBit(oldp+1835,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_ready));
        tracep->fullCData(oldp+1836,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize),2);
        tracep->fullIData(oldp+1837,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_q),32);
        tracep->fullBit(oldp+1838,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch));
        tracep->fullBit(oldp+1839,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst));
        tracep->fullBit(oldp+1840,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata));
        tracep->fullBit(oldp+1841,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata));
        tracep->fullBit(oldp+1842,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata) 
                                          | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata))))));
        tracep->fullBit(oldp+1843,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lui));
        tracep->fullBit(oldp+1844,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_auipc));
        tracep->fullBit(oldp+1845,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jal));
        tracep->fullBit(oldp+1846,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jalr));
        tracep->fullBit(oldp+1847,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_beq));
        tracep->fullBit(oldp+1848,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bne));
        tracep->fullBit(oldp+1849,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_blt));
        tracep->fullBit(oldp+1850,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bge));
        tracep->fullBit(oldp+1851,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bltu));
        tracep->fullBit(oldp+1852,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bgeu));
        tracep->fullBit(oldp+1853,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lb));
        tracep->fullBit(oldp+1854,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lh));
        tracep->fullBit(oldp+1855,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lw));
        tracep->fullBit(oldp+1856,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lbu));
        tracep->fullBit(oldp+1857,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lhu));
        tracep->fullBit(oldp+1858,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sb));
        tracep->fullBit(oldp+1859,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sh));
        tracep->fullBit(oldp+1860,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sw));
        tracep->fullBit(oldp+1861,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_addi));
        tracep->fullBit(oldp+1862,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slti));
        tracep->fullBit(oldp+1863,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltiu));
        tracep->fullBit(oldp+1864,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xori));
        tracep->fullBit(oldp+1865,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ori));
        tracep->fullBit(oldp+1866,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_andi));
        tracep->fullBit(oldp+1867,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slli));
        tracep->fullBit(oldp+1868,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srli));
        tracep->fullBit(oldp+1869,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srai));
        tracep->fullBit(oldp+1870,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_add));
        tracep->fullBit(oldp+1871,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub));
        tracep->fullBit(oldp+1872,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sll));
        tracep->fullBit(oldp+1873,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slt));
        tracep->fullBit(oldp+1874,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltu));
        tracep->fullBit(oldp+1875,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xor));
        tracep->fullBit(oldp+1876,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srl));
        tracep->fullBit(oldp+1877,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sra));
        tracep->fullBit(oldp+1878,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_or));
        tracep->fullBit(oldp+1879,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_and));
        tracep->fullBit(oldp+1880,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycle));
        tracep->fullBit(oldp+1881,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycleh));
        tracep->fullBit(oldp+1882,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstr));
        tracep->fullBit(oldp+1883,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstrh));
        tracep->fullBit(oldp+1884,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ecall_ebreak));
        tracep->fullBit(oldp+1885,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_getq));
        tracep->fullBit(oldp+1886,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_setq));
        tracep->fullBit(oldp+1887,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_retirq));
        tracep->fullBit(oldp+1888,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_maskirq));
        tracep->fullBit(oldp+1889,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_waitirq));
        tracep->fullBit(oldp+1890,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_timer));
        tracep->fullBit(oldp+1891,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_trap));
        tracep->fullCData(oldp+1892,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rd),6);
        tracep->fullCData(oldp+1893,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs2),5);
        tracep->fullIData(oldp+1894,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_imm),32);
        tracep->fullIData(oldp+1895,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_imm_j),32);
        tracep->fullBit(oldp+1896,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger));
        tracep->fullBit(oldp+1897,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q));
        tracep->fullBit(oldp+1898,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger));
        tracep->fullBit(oldp+1899,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__compressed_instr));
        tracep->fullBit(oldp+1900,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lui_auipc_jal));
        tracep->fullBit(oldp+1901,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lb_lh_lw_lbu_lhu));
        tracep->fullBit(oldp+1902,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_slli_srli_srai));
        tracep->fullBit(oldp+1903,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        tracep->fullBit(oldp+1904,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sb_sh_sw));
        tracep->fullBit(oldp+1905,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sll_srl_sra));
        tracep->fullBit(oldp+1906,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        tracep->fullBit(oldp+1907,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_slti_blt_slt));
        tracep->fullBit(oldp+1908,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sltiu_bltu_sltu));
        tracep->fullBit(oldp+1909,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        tracep->fullBit(oldp+1910,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lbu_lhu_lw));
        tracep->fullBit(oldp+1911,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_alu_reg_imm));
        tracep->fullBit(oldp+1912,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_alu_reg_reg));
        tracep->fullBit(oldp+1913,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_compare));
        tracep->fullBit(oldp+1914,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        tracep->fullQData(oldp+1915,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr),64);
        tracep->fullQData(oldp+1917,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_instr),64);
        tracep->fullIData(oldp+1919,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_imm),32);
        tracep->fullCData(oldp+1920,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs2),5);
        tracep->fullCData(oldp+1921,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rd),5);
        tracep->fullIData(oldp+1922,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs1val),32);
        tracep->fullIData(oldp+1923,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs2val),32);
        tracep->fullBit(oldp+1924,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs1val_valid));
        tracep->fullBit(oldp+1925,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs2val_valid));
        tracep->fullBit(oldp+1926,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__launch_next_insn));
        tracep->fullCData(oldp+1927,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state),8);
        tracep->fullCData(oldp+1928,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state),2);
        tracep->fullWData(oldp+1929,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state),128);
        tracep->fullBit(oldp+1933,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__set_mem_do_rinst));
        tracep->fullBit(oldp+1934,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__set_mem_do_rdata));
        tracep->fullBit(oldp+1935,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__set_mem_do_wdata));
        tracep->fullBit(oldp+1936,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_store));
        tracep->fullBit(oldp+1937,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_stalu));
        tracep->fullBit(oldp+1938,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch));
        tracep->fullBit(oldp+1939,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_compr));
        tracep->fullBit(oldp+1940,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lu));
        tracep->fullBit(oldp+1941,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lh));
        tracep->fullBit(oldp+1942,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lb));
        tracep->fullCData(oldp+1943,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_rd),6);
        tracep->fullIData(oldp+1944,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__current_pc),32);
        tracep->fullCData(oldp+1945,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_timeout_counter),4);
        tracep->fullBit(oldp+1946,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_timeout));
        tracep->fullIData(oldp+1947,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_irq_pending),32);
        tracep->fullBit(oldp+1948,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__do_waitirq));
        tracep->fullIData(oldp+1949,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out),32);
        tracep->fullIData(oldp+1950,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_q),32);
        tracep->fullBit(oldp+1951,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0));
        tracep->fullIData(oldp+1952,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub)
                                       ? (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                          - vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)
                                       : (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                          + vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))),32);
        tracep->fullIData(oldp+1953,((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                      << (0x1fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))),32);
        tracep->fullIData(oldp+1954,((IData)((0x1ffffffffULL 
                                              & VL_SHIFTRS_QQI(33,33,5, 
                                                               (((QData)((IData)(
                                                                                (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sra) 
                                                                                | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srai)) 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1))), 
                                                               (0x1fU 
                                                                & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))))),32);
        tracep->fullBit(oldp+1955,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_eq));
        tracep->fullBit(oldp+1956,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_ltu));
        tracep->fullBit(oldp+1957,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_lts));
        tracep->fullBit(oldp+1958,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write));
        tracep->fullIData(oldp+1959,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata),32);
        tracep->fullIData(oldp+1960,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_rs1),32);
        tracep->fullIData(oldp+1961,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_rs2),32);
        tracep->fullBit(oldp+1962,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul));
        tracep->fullBit(oldp+1963,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh));
        tracep->fullBit(oldp+1964,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu));
        tracep->fullBit(oldp+1965,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu));
        tracep->fullBit(oldp+1966,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                          | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))))));
        tracep->fullBit(oldp+1967,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh));
        tracep->fullBit(oldp+1968,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                    | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))));
        tracep->fullBit(oldp+1969,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div));
        tracep->fullBit(oldp+1970,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu));
        tracep->fullBit(oldp+1971,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem));
        tracep->fullBit(oldp+1972,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu));
        tracep->fullBit(oldp+1973,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem) 
                                          | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu))))));
        tracep->fullBit(oldp+1974,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__start));
        tracep->fullBit(oldp+1975,(vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready));
        tracep->fullIData(oldp+1976,(vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata),32);
        tracep->fullBit(oldp+1977,(vlTOPp->Game_Console_TOP__DOT__cpu_la_read));
        tracep->fullBit(oldp+1978,(vlTOPp->Game_Console_TOP__DOT__cpu_la_write));
        tracep->fullBit(oldp+1979,(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid));
        tracep->fullBit(oldp+1980,(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready));
        tracep->fullIData(oldp+1981,(vlTOPp->Game_Console_TOP__DOT__cache_emem_addr),32);
        tracep->fullIData(oldp+1982,(vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata),32);
        tracep->fullIData(oldp+1983,(vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata),32);
        tracep->fullCData(oldp+1984,(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb),4);
        tracep->fullCData(oldp+1985,(vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len),8);
        tracep->fullBit(oldp+1986,(vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en));
        tracep->fullBit(oldp+1987,(vlTOPp->Game_Console_TOP__DOT__cache_hit));
        tracep->fullCData(oldp+1988,((0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                               >> 2U))),8);
        tracep->fullIData(oldp+1989,((0x3ffffU & vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata)),18);
        tracep->fullCData(oldp+1990,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4)
                                       ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                       : 0U)),4);
        tracep->fullCData(oldp+1991,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5)
                                       ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                       : 0U)),4);
        tracep->fullCData(oldp+1992,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6)
                                       ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                       : 0U)),4);
        tracep->fullCData(oldp+1993,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13)
                                       ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                       : 0U)),4);
        tracep->fullCData(oldp+1994,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map)
                                       ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                       : 0U)),4);
        tracep->fullSData(oldp+1995,((0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                >> 2U))),10);
        tracep->fullBit(oldp+1996,(((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3))));
        tracep->fullCData(oldp+1997,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3)
                                       ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                       : 0U)),4);
        tracep->fullCData(oldp+1998,(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1),8);
        tracep->fullCData(oldp+1999,(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2),8);
        tracep->fullIData(oldp+2000,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_word),32);
        tracep->fullBit(oldp+2001,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer));
        tracep->fullBit(oldp+2002,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word));
        tracep->fullIData(oldp+2003,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle),32);
        tracep->fullBit(oldp+2004,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_done));
        tracep->fullCData(oldp+2005,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next),4);
        tracep->fullBit(oldp+2006,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_reset));
        tracep->fullBit(oldp+2007,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus));
        tracep->fullIData(oldp+2008,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[0]),32);
        tracep->fullIData(oldp+2009,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[1]),32);
        tracep->fullIData(oldp+2010,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[2]),32);
        tracep->fullIData(oldp+2011,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[3]),32);
        tracep->fullBit(oldp+2012,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_0));
        tracep->fullBit(oldp+2013,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_1));
        tracep->fullBit(oldp+2014,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_2));
        tracep->fullBit(oldp+2015,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_3));
        tracep->fullBit(oldp+2016,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3));
        tracep->fullBit(oldp+2017,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg));
        tracep->fullBit(oldp+2018,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut));
        tracep->fullBit(oldp+2019,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map));
        tracep->fullBit(oldp+2020,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4));
        tracep->fullBit(oldp+2021,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5));
        tracep->fullBit(oldp+2022,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6));
        tracep->fullBit(oldp+2023,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13));
        tracep->fullCData(oldp+2024,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state_next),4);
        tracep->fullQData(oldp+2025,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2027,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2029,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2031,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2033,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2035,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2037,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2039,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2041,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_data),64);
        tracep->fullQData(oldp+2043,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_data),64);
        tracep->fullIData(oldp+2045,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[0]),18);
        tracep->fullIData(oldp+2046,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[1]),18);
        tracep->fullIData(oldp+2047,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[2]),18);
        tracep->fullIData(oldp+2048,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[3]),18);
        tracep->fullIData(oldp+2049,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[4]),18);
        tracep->fullIData(oldp+2050,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[5]),18);
        tracep->fullIData(oldp+2051,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[6]),18);
        tracep->fullIData(oldp+2052,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[7]),18);
        tracep->fullIData(oldp+2053,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[8]),18);
        tracep->fullIData(oldp+2054,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[9]),18);
        tracep->fullIData(oldp+2055,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[10]),18);
        tracep->fullIData(oldp+2056,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[11]),18);
        tracep->fullBit(oldp+2057,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[0]));
        tracep->fullBit(oldp+2058,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[1]));
        tracep->fullBit(oldp+2059,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[2]));
        tracep->fullBit(oldp+2060,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[3]));
        tracep->fullBit(oldp+2061,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[4]));
        tracep->fullBit(oldp+2062,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[5]));
        tracep->fullBit(oldp+2063,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[6]));
        tracep->fullBit(oldp+2064,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[7]));
        tracep->fullBit(oldp+2065,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[8]));
        tracep->fullBit(oldp+2066,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[9]));
        tracep->fullBit(oldp+2067,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[10]));
        tracep->fullBit(oldp+2068,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[11]));
        tracep->fullBit(oldp+2069,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[0]));
        tracep->fullBit(oldp+2070,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[1]));
        tracep->fullBit(oldp+2071,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[2]));
        tracep->fullBit(oldp+2072,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[3]));
        tracep->fullBit(oldp+2073,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[4]));
        tracep->fullBit(oldp+2074,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[5]));
        tracep->fullBit(oldp+2075,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[6]));
        tracep->fullBit(oldp+2076,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[7]));
        tracep->fullBit(oldp+2077,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[8]));
        tracep->fullBit(oldp+2078,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[9]));
        tracep->fullBit(oldp+2079,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[10]));
        tracep->fullBit(oldp+2080,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[11]));
        tracep->fullBit(oldp+2081,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena));
        tracep->fullCData(oldp+2082,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel),8);
        tracep->fullBit(oldp+2083,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena));
        tracep->fullCData(oldp+2084,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel),8);
        tracep->fullBit(oldp+2085,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena));
        tracep->fullCData(oldp+2086,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel),8);
        tracep->fullBit(oldp+2087,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena));
        tracep->fullCData(oldp+2088,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel),8);
        tracep->fullBit(oldp+2089,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena));
        tracep->fullCData(oldp+2090,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel),8);
        tracep->fullBit(oldp+2091,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena));
        tracep->fullCData(oldp+2092,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel),8);
        tracep->fullBit(oldp+2093,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena));
        tracep->fullCData(oldp+2094,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel),8);
        tracep->fullBit(oldp+2095,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena));
        tracep->fullCData(oldp+2096,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel),8);
        tracep->fullBit(oldp+2097,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena));
        tracep->fullCData(oldp+2098,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel),8);
        tracep->fullBit(oldp+2099,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena));
        tracep->fullCData(oldp+2100,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel),8);
        tracep->fullBit(oldp+2101,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_valid));
        tracep->fullBit(oldp+2102,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [1U]));
        tracep->fullBit(oldp+2103,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_valid));
        tracep->fullBit(oldp+2104,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [2U]));
        tracep->fullBit(oldp+2105,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_valid));
        tracep->fullBit(oldp+2106,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [3U]));
        tracep->fullBit(oldp+2107,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_valid));
        tracep->fullBit(oldp+2108,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [4U]));
        tracep->fullBit(oldp+2109,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_valid));
        tracep->fullBit(oldp+2110,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [5U]));
        tracep->fullBit(oldp+2111,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_valid));
        tracep->fullBit(oldp+2112,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [6U]));
        tracep->fullBit(oldp+2113,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_valid));
        tracep->fullBit(oldp+2114,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [7U]));
        tracep->fullBit(oldp+2115,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_valid));
        tracep->fullBit(oldp+2116,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [8U]));
        tracep->fullBit(oldp+2117,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_valid));
        tracep->fullBit(oldp+2118,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [9U]));
        tracep->fullBit(oldp+2119,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_valid));
        tracep->fullBit(oldp+2120,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                   [0xaU]));
        tracep->fullQData(oldp+2121,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg1_comp_data),64);
        tracep->fullQData(oldp+2123,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg2_comp_data),64);
        tracep->fullQData(oldp+2125,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch1_comp_data),64);
        tracep->fullQData(oldp+2127,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch2_comp_data),64);
        tracep->fullQData(oldp+2129,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch3_comp_data),64);
        tracep->fullQData(oldp+2131,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch4_comp_data),64);
        tracep->fullQData(oldp+2133,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni1_comp_data),64);
        tracep->fullQData(oldp+2135,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni2_comp_data),64);
        tracep->fullQData(oldp+2137,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__sc_comp_data),64);
        tracep->fullQData(oldp+2139,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__st_comp_data),64);
        tracep->fullBit(oldp+2141,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want));
        tracep->fullBit(oldp+2142,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want));
        tracep->fullBit(oldp+2143,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want));
        tracep->fullBit(oldp+2144,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want));
        tracep->fullBit(oldp+2145,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want));
        tracep->fullBit(oldp+2146,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want));
        tracep->fullBit(oldp+2147,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want));
        tracep->fullBit(oldp+2148,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want));
        tracep->fullBit(oldp+2149,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want));
        tracep->fullBit(oldp+2150,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want));
        tracep->fullIData(oldp+2151,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB),18);
        tracep->fullBit(oldp+2152,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_trans));
        tracep->fullBit(oldp+2153,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end));
        tracep->fullIData(oldp+2154,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB),18);
        tracep->fullBit(oldp+2155,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_trans));
        tracep->fullBit(oldp+2156,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end));
        tracep->fullIData(oldp+2157,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB),18);
        tracep->fullBit(oldp+2158,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_trans));
        tracep->fullBit(oldp+2159,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end));
        tracep->fullIData(oldp+2160,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB),18);
        tracep->fullBit(oldp+2161,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_trans));
        tracep->fullBit(oldp+2162,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end));
        tracep->fullIData(oldp+2163,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB),18);
        tracep->fullBit(oldp+2164,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_trans));
        tracep->fullBit(oldp+2165,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end));
        tracep->fullIData(oldp+2166,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB),18);
        tracep->fullBit(oldp+2167,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_trans));
        tracep->fullBit(oldp+2168,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end));
        tracep->fullIData(oldp+2169,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB),18);
        tracep->fullBit(oldp+2170,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_trans));
        tracep->fullBit(oldp+2171,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end));
        tracep->fullIData(oldp+2172,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB),18);
        tracep->fullBit(oldp+2173,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_trans));
        tracep->fullBit(oldp+2174,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end));
        tracep->fullIData(oldp+2175,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB),18);
        tracep->fullBit(oldp+2176,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_trans));
        tracep->fullBit(oldp+2177,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end));
        tracep->fullIData(oldp+2178,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB),18);
        tracep->fullBit(oldp+2179,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_trans));
        tracep->fullBit(oldp+2180,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end));
        tracep->fullIData(oldp+2181,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB),18);
        tracep->fullBit(oldp+2182,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end));
        tracep->fullIData(oldp+2183,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB),18);
        tracep->fullBit(oldp+2184,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end));
        tracep->fullBit(oldp+2185,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_hit));
        tracep->fullBit(oldp+2186,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_hit));
        tracep->fullBit(oldp+2187,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_hit));
        tracep->fullBit(oldp+2188,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_hit));
        tracep->fullBit(oldp+2189,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_hit));
        tracep->fullBit(oldp+2190,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_hit));
        tracep->fullBit(oldp+2191,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_hit));
        tracep->fullBit(oldp+2192,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_hit));
        tracep->fullBit(oldp+2193,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_hit));
        tracep->fullBit(oldp+2194,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_hit));
        tracep->fullBit(oldp+2195,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit1));
        tracep->fullBit(oldp+2196,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit2));
        tracep->fullBit(oldp+2197,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit3));
        tracep->fullBit(oldp+2198,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit4));
        tracep->fullBit(oldp+2199,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit1));
        tracep->fullBit(oldp+2200,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit2));
        tracep->fullBit(oldp+2201,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit3));
        tracep->fullBit(oldp+2202,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit4));
        tracep->fullBit(oldp+2203,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit1));
        tracep->fullBit(oldp+2204,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit2));
        tracep->fullBit(oldp+2205,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit3));
        tracep->fullBit(oldp+2206,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit4));
        tracep->fullBit(oldp+2207,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit1));
        tracep->fullBit(oldp+2208,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit2));
        tracep->fullBit(oldp+2209,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit3));
        tracep->fullBit(oldp+2210,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit4));
        tracep->fullBit(oldp+2211,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit1));
        tracep->fullBit(oldp+2212,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit2));
        tracep->fullBit(oldp+2213,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit3));
        tracep->fullBit(oldp+2214,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit4));
        tracep->fullBit(oldp+2215,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit1));
        tracep->fullBit(oldp+2216,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit2));
        tracep->fullBit(oldp+2217,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit3));
        tracep->fullBit(oldp+2218,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit4));
        tracep->fullBit(oldp+2219,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit1));
        tracep->fullBit(oldp+2220,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit2));
        tracep->fullBit(oldp+2221,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit3));
        tracep->fullBit(oldp+2222,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit4));
        tracep->fullBit(oldp+2223,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit1));
        tracep->fullBit(oldp+2224,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit2));
        tracep->fullBit(oldp+2225,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit3));
        tracep->fullBit(oldp+2226,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit4));
        tracep->fullBit(oldp+2227,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit1));
        tracep->fullBit(oldp+2228,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit2));
        tracep->fullBit(oldp+2229,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit3));
        tracep->fullBit(oldp+2230,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit4));
        tracep->fullBit(oldp+2231,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit1));
        tracep->fullBit(oldp+2232,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit2));
        tracep->fullBit(oldp+2233,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit3));
        tracep->fullBit(oldp+2234,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit4));
        tracep->fullBit(oldp+2235,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_is_zero));
        tracep->fullBit(oldp+2236,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_is_zero));
        tracep->fullBit(oldp+2237,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_is_zero));
        tracep->fullBit(oldp+2238,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_is_zero));
        tracep->fullBit(oldp+2239,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_is_zero));
        tracep->fullBit(oldp+2240,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_is_zero));
        tracep->fullBit(oldp+2241,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_is_zero));
        tracep->fullBit(oldp+2242,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_is_zero));
        tracep->fullBit(oldp+2243,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_is_zero));
        tracep->fullBit(oldp+2244,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_is_zero));
        tracep->fullSData(oldp+2245,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req),12);
        tracep->fullBit(oldp+2246,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena));
        tracep->fullBit(oldp+2247,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena));
        tracep->fullBit(oldp+2248,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena));
        tracep->fullBit(oldp+2249,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena));
        tracep->fullBit(oldp+2250,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena));
        tracep->fullBit(oldp+2251,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena));
        tracep->fullBit(oldp+2252,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena));
        tracep->fullBit(oldp+2253,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena));
        tracep->fullBit(oldp+2254,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena));
        tracep->fullBit(oldp+2255,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena));
        tracep->fullBit(oldp+2256,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena));
        tracep->fullBit(oldp+2257,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena));
        tracep->fullBit(oldp+2258,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[0]));
        tracep->fullBit(oldp+2259,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[1]));
        tracep->fullBit(oldp+2260,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[2]));
        tracep->fullBit(oldp+2261,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[3]));
        tracep->fullBit(oldp+2262,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[4]));
        tracep->fullBit(oldp+2263,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[5]));
        tracep->fullBit(oldp+2264,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[6]));
        tracep->fullBit(oldp+2265,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[7]));
        tracep->fullBit(oldp+2266,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[8]));
        tracep->fullBit(oldp+2267,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[9]));
        tracep->fullBit(oldp+2268,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[10]));
        tracep->fullBit(oldp+2269,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[0]));
        tracep->fullBit(oldp+2270,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[1]));
        tracep->fullBit(oldp+2271,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[2]));
        tracep->fullBit(oldp+2272,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[3]));
        tracep->fullBit(oldp+2273,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[4]));
        tracep->fullBit(oldp+2274,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[5]));
        tracep->fullBit(oldp+2275,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[6]));
        tracep->fullBit(oldp+2276,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[7]));
        tracep->fullBit(oldp+2277,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[8]));
        tracep->fullBit(oldp+2278,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[9]));
        tracep->fullBit(oldp+2279,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[10]));
        tracep->fullBit(oldp+2280,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[0]));
        tracep->fullBit(oldp+2281,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[1]));
        tracep->fullBit(oldp+2282,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[2]));
        tracep->fullBit(oldp+2283,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[3]));
        tracep->fullBit(oldp+2284,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[4]));
        tracep->fullBit(oldp+2285,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[5]));
        tracep->fullBit(oldp+2286,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[6]));
        tracep->fullBit(oldp+2287,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[7]));
        tracep->fullBit(oldp+2288,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[8]));
        tracep->fullBit(oldp+2289,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[9]));
        tracep->fullBit(oldp+2290,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[0]));
        tracep->fullBit(oldp+2291,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[1]));
        tracep->fullBit(oldp+2292,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[2]));
        tracep->fullBit(oldp+2293,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[3]));
        tracep->fullBit(oldp+2294,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[4]));
        tracep->fullBit(oldp+2295,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[5]));
        tracep->fullBit(oldp+2296,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[6]));
        tracep->fullBit(oldp+2297,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[7]));
        tracep->fullBit(oldp+2298,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[8]));
        tracep->fullBit(oldp+2299,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[9]));
        tracep->fullCData(oldp+2300,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next),2);
        tracep->fullCData(oldp+2301,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next),2);
        tracep->fullCData(oldp+2302,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next),2);
        tracep->fullCData(oldp+2303,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next),2);
        tracep->fullCData(oldp+2304,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next),2);
        tracep->fullCData(oldp+2305,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next),2);
        tracep->fullCData(oldp+2306,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next),2);
        tracep->fullCData(oldp+2307,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next),2);
        tracep->fullCData(oldp+2308,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next),2);
        tracep->fullCData(oldp+2309,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next),2);
        tracep->fullBit(oldp+2310,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [0U]));
        tracep->fullIData(oldp+2311,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [0U]),18);
        tracep->fullBit(oldp+2312,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [0U]));
        tracep->fullBit(oldp+2313,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2314,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2315,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2316,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2317,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2318,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2319,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2320,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2321,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2322,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2323,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [1U]));
        tracep->fullIData(oldp+2324,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [1U]),18);
        tracep->fullBit(oldp+2325,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [1U]));
        tracep->fullBit(oldp+2326,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2327,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2328,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2329,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2330,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2331,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2332,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2333,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2334,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2335,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2336,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [2U]));
        tracep->fullIData(oldp+2337,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [2U]),18);
        tracep->fullBit(oldp+2338,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [2U]));
        tracep->fullBit(oldp+2339,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2340,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2341,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2342,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2343,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2344,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2345,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2346,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2347,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2348,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2349,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [3U]));
        tracep->fullIData(oldp+2350,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [3U]),18);
        tracep->fullBit(oldp+2351,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [3U]));
        tracep->fullBit(oldp+2352,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2353,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2354,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2355,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2356,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2357,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2358,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2359,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2360,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2361,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2362,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [4U]));
        tracep->fullIData(oldp+2363,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [4U]),18);
        tracep->fullBit(oldp+2364,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [4U]));
        tracep->fullBit(oldp+2365,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2366,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2367,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2368,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2369,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2370,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2371,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2372,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2373,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2374,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2375,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [5U]));
        tracep->fullIData(oldp+2376,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [5U]),18);
        tracep->fullBit(oldp+2377,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [5U]));
        tracep->fullBit(oldp+2378,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2379,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2380,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2381,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2382,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2383,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2384,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2385,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2386,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2387,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2388,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [6U]));
        tracep->fullIData(oldp+2389,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [6U]),18);
        tracep->fullBit(oldp+2390,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [6U]));
        tracep->fullBit(oldp+2391,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2392,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2393,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2394,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2395,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2396,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2397,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2398,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2399,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2400,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2401,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [7U]));
        tracep->fullIData(oldp+2402,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [7U]),18);
        tracep->fullBit(oldp+2403,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [7U]));
        tracep->fullBit(oldp+2404,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2405,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2406,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2407,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2408,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2409,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2410,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2411,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2412,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2413,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2414,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [8U]));
        tracep->fullIData(oldp+2415,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [8U]),18);
        tracep->fullBit(oldp+2416,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [8U]));
        tracep->fullBit(oldp+2417,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2418,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2419,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2420,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2421,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2422,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2423,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2424,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2425,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2426,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_convert_end));
        tracep->fullBit(oldp+2427,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                   [9U]));
        tracep->fullIData(oldp+2428,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                     [9U]),18);
        tracep->fullBit(oldp+2429,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                   [9U]));
        tracep->fullBit(oldp+2430,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_w_ena));
        tracep->fullBit(oldp+2431,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_ready));
        tracep->fullCData(oldp+2432,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state_next),4);
        tracep->fullCData(oldp+2433,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state_next),4);
        tracep->fullCData(oldp+2434,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state_counter_next),4);
        tracep->fullCData(oldp+2435,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__valid_pixel_check),8);
        tracep->fullCData(oldp+2436,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state_next),4);
        tracep->fullCData(oldp+2437,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state_counter_next),4);
        tracep->fullBit(oldp+2438,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_convert_req));
        tracep->fullBit(oldp+2439,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_convert_end));
        tracep->fullQData(oldp+2440,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2442,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2444,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2446,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2448,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2450,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2452,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2454,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2456,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_data),64);
        tracep->fullQData(oldp+2458,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_data),64);
        tracep->fullBit(oldp+2460,(vlTOPp->clk));
        tracep->fullBit(oldp+2461,(vlTOPp->resetn));
        tracep->fullCData(oldp+2462,(vlTOPp->joypad_state_in),8);
        tracep->fullBit(oldp+2463,(vlTOPp->joypad_irq));
        tracep->fullBit(oldp+2464,(vlTOPp->DDR3_CPU_valid));
        tracep->fullBit(oldp+2465,(vlTOPp->DDR3_CPU_ready));
        tracep->fullIData(oldp+2466,(vlTOPp->DDR3_CPU_addr),32);
        tracep->fullIData(oldp+2467,(vlTOPp->DDR3_CPU_wdata),32);
        tracep->fullCData(oldp+2468,(vlTOPp->DDR3_CPU_wstrb),4);
        tracep->fullIData(oldp+2469,(vlTOPp->DDR3_CPU_rdata),32);
        tracep->fullCData(oldp+2470,(vlTOPp->DDR3_CPU_burst_len),8);
        tracep->fullBit(oldp+2471,(vlTOPp->DDR3_CPU_burst_en));
        tracep->fullBit(oldp+2472,(vlTOPp->DDR3_PPU_valid));
        tracep->fullBit(oldp+2473,(vlTOPp->DDR3_PPU_ready));
        tracep->fullIData(oldp+2474,(vlTOPp->DDR3_PPU_addr),32);
        tracep->fullIData(oldp+2475,(vlTOPp->DDR3_PPU_wdata),32);
        tracep->fullCData(oldp+2476,(vlTOPp->DDR3_PPU_wstrb),4);
        tracep->fullIData(oldp+2477,(vlTOPp->DDR3_PPU_rdata),32);
        tracep->fullCData(oldp+2478,(vlTOPp->DDR3_PPU_burst_len),8);
        tracep->fullBit(oldp+2479,(vlTOPp->DDR3_PPU_burst_en));
        tracep->fullBit(oldp+2480,(vlTOPp->BRAM0_wen));
        tracep->fullCData(oldp+2481,(vlTOPp->BRAM0_wstrb),8);
        tracep->fullSData(oldp+2482,(vlTOPp->BRAM0_waddr),9);
        tracep->fullWData(oldp+2483,(vlTOPp->BRAM0_din),72);
        tracep->fullWData(oldp+2486,(vlTOPp->BRAM0_dout),72);
        tracep->fullBit(oldp+2489,(vlTOPp->BRAM0_ren));
        tracep->fullSData(oldp+2490,(vlTOPp->BRAM0_raddr),9);
        tracep->fullBit(oldp+2491,(vlTOPp->BRAM1_wen));
        tracep->fullCData(oldp+2492,(vlTOPp->BRAM1_wstrb),8);
        tracep->fullSData(oldp+2493,(vlTOPp->BRAM1_waddr),9);
        tracep->fullWData(oldp+2494,(vlTOPp->BRAM1_din),72);
        tracep->fullWData(oldp+2497,(vlTOPp->BRAM1_dout),72);
        tracep->fullBit(oldp+2500,(vlTOPp->BRAM1_ren));
        tracep->fullSData(oldp+2501,(vlTOPp->BRAM1_raddr),9);
        tracep->fullBit(oldp+2502,(vlTOPp->BRAM2_wen));
        tracep->fullCData(oldp+2503,(vlTOPp->BRAM2_wstrb),8);
        tracep->fullSData(oldp+2504,(vlTOPp->BRAM2_waddr),9);
        tracep->fullWData(oldp+2505,(vlTOPp->BRAM2_din),72);
        tracep->fullWData(oldp+2508,(vlTOPp->BRAM2_dout),72);
        tracep->fullBit(oldp+2511,(vlTOPp->BRAM2_ren));
        tracep->fullSData(oldp+2512,(vlTOPp->BRAM2_raddr),9);
        tracep->fullBit(oldp+2513,(vlTOPp->BRAM3_wen));
        tracep->fullCData(oldp+2514,(vlTOPp->BRAM3_wstrb),8);
        tracep->fullSData(oldp+2515,(vlTOPp->BRAM3_waddr),9);
        tracep->fullWData(oldp+2516,(vlTOPp->BRAM3_din),72);
        tracep->fullWData(oldp+2519,(vlTOPp->BRAM3_dout),72);
        tracep->fullBit(oldp+2522,(vlTOPp->BRAM3_ren));
        tracep->fullSData(oldp+2523,(vlTOPp->BRAM3_raddr),9);
        tracep->fullBit(oldp+2524,(vlTOPp->BRAM4_en_a));
        tracep->fullCData(oldp+2525,(vlTOPp->BRAM4_wstrb_a),4);
        tracep->fullSData(oldp+2526,(vlTOPp->BRAM4_addr_a),10);
        tracep->fullIData(oldp+2527,(vlTOPp->BRAM4_din_a),32);
        tracep->fullIData(oldp+2528,(vlTOPp->BRAM4_dout_a),32);
        tracep->fullBit(oldp+2529,(vlTOPp->BRAM4_en_b));
        tracep->fullCData(oldp+2530,(vlTOPp->BRAM4_wstrb_b),4);
        tracep->fullSData(oldp+2531,(vlTOPp->BRAM4_addr_b),10);
        tracep->fullIData(oldp+2532,(vlTOPp->BRAM4_din_b),32);
        tracep->fullIData(oldp+2533,(vlTOPp->BRAM4_dout_b),32);
        tracep->fullBit(oldp+2534,(vlTOPp->BRAM5_en_a));
        tracep->fullCData(oldp+2535,(vlTOPp->BRAM5_wstrb_a),4);
        tracep->fullSData(oldp+2536,(vlTOPp->BRAM5_addr_a),10);
        tracep->fullIData(oldp+2537,(vlTOPp->BRAM5_din_a),32);
        tracep->fullIData(oldp+2538,(vlTOPp->BRAM5_dout_a),32);
        tracep->fullBit(oldp+2539,(vlTOPp->BRAM5_en_b));
        tracep->fullCData(oldp+2540,(vlTOPp->BRAM5_wstrb_b),4);
        tracep->fullSData(oldp+2541,(vlTOPp->BRAM5_addr_b),10);
        tracep->fullIData(oldp+2542,(vlTOPp->BRAM5_din_b),32);
        tracep->fullIData(oldp+2543,(vlTOPp->BRAM5_dout_b),32);
        tracep->fullBit(oldp+2544,(vlTOPp->BRAM6_en_a));
        tracep->fullCData(oldp+2545,(vlTOPp->BRAM6_wstrb_a),4);
        tracep->fullSData(oldp+2546,(vlTOPp->BRAM6_addr_a),10);
        tracep->fullIData(oldp+2547,(vlTOPp->BRAM6_din_a),32);
        tracep->fullIData(oldp+2548,(vlTOPp->BRAM6_dout_a),32);
        tracep->fullBit(oldp+2549,(vlTOPp->BRAM6_en_b));
        tracep->fullCData(oldp+2550,(vlTOPp->BRAM6_wstrb_b),4);
        tracep->fullSData(oldp+2551,(vlTOPp->BRAM6_addr_b),10);
        tracep->fullIData(oldp+2552,(vlTOPp->BRAM6_din_b),32);
        tracep->fullIData(oldp+2553,(vlTOPp->BRAM6_dout_b),32);
        tracep->fullBit(oldp+2554,(vlTOPp->BRAM13_en_a));
        tracep->fullCData(oldp+2555,(vlTOPp->BRAM13_wstrb_a),4);
        tracep->fullSData(oldp+2556,(vlTOPp->BRAM13_addr_a),10);
        tracep->fullIData(oldp+2557,(vlTOPp->BRAM13_din_a),32);
        tracep->fullIData(oldp+2558,(vlTOPp->BRAM13_dout_a),32);
        tracep->fullBit(oldp+2559,(vlTOPp->BRAM13_en_b));
        tracep->fullCData(oldp+2560,(vlTOPp->BRAM13_wstrb_b),4);
        tracep->fullSData(oldp+2561,(vlTOPp->BRAM13_addr_b),10);
        tracep->fullIData(oldp+2562,(vlTOPp->BRAM13_din_b),32);
        tracep->fullIData(oldp+2563,(vlTOPp->BRAM13_dout_b),32);
        tracep->fullBit(oldp+2564,(vlTOPp->BRAM14_en_a));
        tracep->fullCData(oldp+2565,(vlTOPp->BRAM14_wstrb_a),4);
        tracep->fullSData(oldp+2566,(vlTOPp->BRAM14_addr_a),10);
        tracep->fullIData(oldp+2567,(vlTOPp->BRAM14_din_a),32);
        tracep->fullIData(oldp+2568,(vlTOPp->BRAM14_dout_a),32);
        tracep->fullBit(oldp+2569,(vlTOPp->BRAM14_en_b));
        tracep->fullCData(oldp+2570,(vlTOPp->BRAM14_wstrb_b),4);
        tracep->fullSData(oldp+2571,(vlTOPp->BRAM14_addr_b),10);
        tracep->fullIData(oldp+2572,(vlTOPp->BRAM14_din_b),32);
        tracep->fullIData(oldp+2573,(vlTOPp->BRAM14_dout_b),32);
        tracep->fullBit(oldp+2574,(vlTOPp->BRAM7_en_a));
        tracep->fullBit(oldp+2575,(vlTOPp->BRAM7_we_a));
        tracep->fullSData(oldp+2576,(vlTOPp->BRAM7_addr_a),9);
        tracep->fullQData(oldp+2577,(vlTOPp->BRAM7_din_a),64);
        tracep->fullBit(oldp+2579,(vlTOPp->BRAM7_en_b));
        tracep->fullSData(oldp+2580,(vlTOPp->BRAM7_addr_b),9);
        tracep->fullQData(oldp+2581,(vlTOPp->BRAM7_dout_b),64);
        tracep->fullBit(oldp+2583,(vlTOPp->BRAM8_en_a));
        tracep->fullBit(oldp+2584,(vlTOPp->BRAM8_we_a));
        tracep->fullSData(oldp+2585,(vlTOPp->BRAM8_addr_a),9);
        tracep->fullQData(oldp+2586,(vlTOPp->BRAM8_din_a),64);
        tracep->fullBit(oldp+2588,(vlTOPp->BRAM8_en_b));
        tracep->fullSData(oldp+2589,(vlTOPp->BRAM8_addr_b),9);
        tracep->fullQData(oldp+2590,(vlTOPp->BRAM8_dout_b),64);
        tracep->fullBit(oldp+2592,(vlTOPp->BRAM9_en_a));
        tracep->fullBit(oldp+2593,(vlTOPp->BRAM9_we_a));
        tracep->fullSData(oldp+2594,(vlTOPp->BRAM9_addr_a),9);
        tracep->fullQData(oldp+2595,(vlTOPp->BRAM9_din_a),64);
        tracep->fullBit(oldp+2597,(vlTOPp->BRAM9_en_b));
        tracep->fullSData(oldp+2598,(vlTOPp->BRAM9_addr_b),9);
        tracep->fullQData(oldp+2599,(vlTOPp->BRAM9_dout_b),64);
        tracep->fullBit(oldp+2601,(vlTOPp->BRAM10_en_a));
        tracep->fullBit(oldp+2602,(vlTOPp->BRAM10_we_a));
        tracep->fullSData(oldp+2603,(vlTOPp->BRAM10_addr_a),9);
        tracep->fullQData(oldp+2604,(vlTOPp->BRAM10_din_a),64);
        tracep->fullBit(oldp+2606,(vlTOPp->BRAM10_en_b));
        tracep->fullSData(oldp+2607,(vlTOPp->BRAM10_addr_b),9);
        tracep->fullQData(oldp+2608,(vlTOPp->BRAM10_dout_b),64);
        tracep->fullBit(oldp+2610,(vlTOPp->BRAM11_en_a));
        tracep->fullBit(oldp+2611,(vlTOPp->BRAM11_we_a));
        tracep->fullSData(oldp+2612,(vlTOPp->BRAM11_addr_a),9);
        tracep->fullQData(oldp+2613,(vlTOPp->BRAM11_din_a),64);
        tracep->fullBit(oldp+2615,(vlTOPp->BRAM11_en_b));
        tracep->fullSData(oldp+2616,(vlTOPp->BRAM11_addr_b),9);
        tracep->fullQData(oldp+2617,(vlTOPp->BRAM11_dout_b),64);
        tracep->fullBit(oldp+2619,(vlTOPp->BRAM12_en_a));
        tracep->fullBit(oldp+2620,(vlTOPp->BRAM12_we_a));
        tracep->fullSData(oldp+2621,(vlTOPp->BRAM12_addr_a),9);
        tracep->fullQData(oldp+2622,(vlTOPp->BRAM12_din_a),64);
        tracep->fullBit(oldp+2624,(vlTOPp->BRAM12_en_b));
        tracep->fullSData(oldp+2625,(vlTOPp->BRAM12_addr_b),9);
        tracep->fullQData(oldp+2626,(vlTOPp->BRAM12_dout_b),64);
        tracep->fullBit(oldp+2628,(vlTOPp->LUT_we));
        tracep->fullCData(oldp+2629,(vlTOPp->LUT_addr_w),8);
        tracep->fullIData(oldp+2630,(vlTOPp->LUT_data_in),18);
        tracep->fullCData(oldp+2631,(vlTOPp->LUT_addr_r1),8);
        tracep->fullIData(oldp+2632,(vlTOPp->LUT_data_out1),18);
        tracep->fullCData(oldp+2633,(vlTOPp->LUT_addr_r2),8);
        tracep->fullIData(oldp+2634,(vlTOPp->LUT_data_out2),18);
        tracep->fullBit(oldp+2635,(vlTOPp->Final_pixel_valid));
        tracep->fullIData(oldp+2636,(vlTOPp->Final_pixel_RGB),18);
        tracep->fullBit(oldp+2637,(vlTOPp->Font_Line_End));
        tracep->fullBit(oldp+2638,(vlTOPp->Font_Frame_End));
        tracep->fullIData(oldp+2639,(vlTOPp->joypad_irq),32);
        tracep->fullBit(oldp+2640,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait) 
                                    & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        tracep->fullIData(oldp+2641,(0xff00000U),32);
        tracep->fullIData(oldp+2642,(0xff01000U),32);
        tracep->fullIData(oldp+2643,(0xff02000U),32);
        tracep->fullIData(oldp+2644,(0xff00400U),32);
        tracep->fullIData(oldp+2645,(0xfeffffcU),32);
        tracep->fullBit(oldp+2646,(0U));
        tracep->fullIData(oldp+2647,(0U),32);
        tracep->fullIData(oldp+2648,(vlTOPp->Game_Console_TOP__DOT__dec_ddr3_rdata),32);
        tracep->fullBit(oldp+2649,(1U));
        tracep->fullBit(oldp+2650,(0U));
        tracep->fullIData(oldp+2651,(0xffffffffU),32);
        tracep->fullIData(oldp+2652,(0x10U),32);
        tracep->fullIData(oldp+2653,(0U),32);
        tracep->fullIData(oldp+2654,(1U),32);
        tracep->fullIData(oldp+2655,(2U),32);
        tracep->fullIData(oldp+2656,(0x20U),32);
        tracep->fullIData(oldp+2657,(0x24U),32);
        tracep->fullIData(oldp+2658,(6U),32);
        tracep->fullQData(oldp+2659,(0x100000000ULL),36);
        tracep->fullQData(oldp+2661,(0x200000000ULL),36);
        tracep->fullQData(oldp+2663,(0x800000000ULL),36);
        tracep->fullIData(oldp+2665,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__i),32);
        tracep->fullSData(oldp+2666,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_16bit_buffer),16);
        tracep->fullCData(oldp+2667,(0x80U),8);
        tracep->fullCData(oldp+2668,(0x40U),8);
        tracep->fullCData(oldp+2669,(0x20U),8);
        tracep->fullCData(oldp+2670,(0x10U),8);
        tracep->fullCData(oldp+2671,(8U),8);
        tracep->fullCData(oldp+2672,(4U),8);
        tracep->fullCData(oldp+2673,(2U),8);
        tracep->fullCData(oldp+2674,(1U),8);
        tracep->fullCData(oldp+2675,(0U),6);
        tracep->fullIData(oldp+2676,(1U),32);
        tracep->fullIData(oldp+2677,(4U),32);
        tracep->fullIData(oldp+2678,(0x40U),32);
        tracep->fullIData(oldp+2679,(0U),32);
        tracep->fullIData(oldp+2680,(2U),32);
        tracep->fullIData(oldp+2681,(3U),32);
        tracep->fullIData(oldp+2682,(5U),32);
        tracep->fullIData(oldp+2683,(6U),32);
        tracep->fullBit(oldp+2684,(1U));
        tracep->fullCData(oldp+2685,(0U),8);
        tracep->fullIData(oldp+2686,(0xbU),32);
        tracep->fullIData(oldp+2687,(7U),32);
        tracep->fullIData(oldp+2688,(8U),32);
        tracep->fullIData(oldp+2689,(9U),32);
        tracep->fullIData(oldp+2690,(0xaU),32);
        tracep->fullCData(oldp+2691,(0xaU),4);
        tracep->fullSData(oldp+2692,(0U),9);
        tracep->fullCData(oldp+2693,(1U),4);
        tracep->fullQData(oldp+2694,(0ULL),64);
        tracep->fullIData(oldp+2696,(0xbU),32);
        tracep->fullSData(oldp+2697,(0x80U),9);
        tracep->fullCData(oldp+2698,(2U),4);
        tracep->fullSData(oldp+2699,(0x100U),9);
        tracep->fullCData(oldp+2700,(4U),4);
        tracep->fullSData(oldp+2701,(0x180U),9);
        tracep->fullCData(oldp+2702,(8U),4);
        tracep->fullCData(oldp+2703,(0xbU),4);
        tracep->fullCData(oldp+2704,(0xcU),4);
        tracep->fullCData(oldp+2705,(3U),4);
    }
}
