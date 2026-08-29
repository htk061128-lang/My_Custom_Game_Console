# ==============================================================================
# File: firmware.s
# Description: PicoRV32 Bootloader, ISR & PPU Initialization
# ==============================================================================

.section .text
.globl _start

# ------------------------------------------------------------------------------
# 0x0000_0000: Boot Vector
# ------------------------------------------------------------------------------
_start:
    lui  sp, 0x0FF00
    addi sp, sp, -4             # sp = 0x0FEF_FFFC (STACKADDR)
    
    # PicoRV32 커스텀 인터럽트 활성화 (maskirq x0, x0)
    .word 0x0600000b
    
    jal  zero, init_system      # 시스템 초기화 루틴으로 점프

# ------------------------------------------------------------------------------
# 0x0000_0010: PicoRV32 Hardware Interrupt Vector
# ------------------------------------------------------------------------------
.org 0x00000010
irq_handler:
    lui  t0, 0x0FF00            # t0 = 0x0FF0_0000 (PPU Base)
    lw   t1, 0x0A8(t0)          # t1 = JOYPAD 레지스터 읽기 (Read-to-Clear)
    lw   t2, 0x03C(t0)          # t2 = CHR1_POS 읽기 ([31:16] Y, [15:0] X)
    
    slli t3, t2, 16
    srai t3, t3, 16             # t3 = X좌표 (16-bit 부호 확장)
    srai t4, t2, 16             # t4 = Y좌표 (16-bit 부호 확장)

    # 1. 조이패드 방향키 검사 (Bit 0: Up, 1: Down, 2: Left, 3: Right)
    andi t5, t1, 1
    beq  t5, zero, chk_down
    addi t4, t4, -4             # Up: Y -= 4

chk_down:
    andi t5, t1, 2
    beq  t5, zero, chk_left
    addi t4, t4, 4              # Down: Y += 4

chk_left:
    andi t5, t1, 4
    beq  t5, zero, chk_right
    addi t3, t3, -4             # Left: X -= 4

chk_right:
    andi t5, t1, 8
    beq  t5, zero, update_pos
    addi t3, t3, 4              # Right: X += 4

update_pos:
    # 2. 좌표 재패킹: (Y << 16) | (X & 0xFFFF)
    slli t4, t4, 16
    slli t3, t3, 16
    srli t3, t3, 16
    or   t2, t4, t3
    sw   t2, 0x03C(t0)          # CHR1_POS 레지스터 갱신

    # 3. 새 프레임 렌더링 시작 요청 (PPU_START 스트로브)
    addi t5, zero, 1
    sw   t5, 0x0A4(t0)          # PPU_START = 1
    sw   zero, 0x0A4(t0)        # PPU_START = 0

    # 4. 인터럽트 핸들러 복귀 (retirq)
    .word 0x0400000b

# ------------------------------------------------------------------------------
# System & PPU Initialization Routine
# ------------------------------------------------------------------------------
init_system:
    lui  t0, 0x0FF00            # t0 = 0x0FF0_0000

    # 1. PPU 제어 레지스터 (0x000 ~ 0x0A4, 총 42개) 모두 0으로 초기화
    add  t1, zero, zero         # 루프 인덱스 = 0
    addi t2, zero, 42           # 총 레지스터 개수

clear_regs_loop:
    slli t3, t1, 2              # 오프셋 = 인덱스 * 4
    add  t4, t0, t3
    sw   zero, 0(t4)
    addi t1, t1, 1
    bne  t1, t2, clear_regs_loop

    # 2. RGB Lookup Table 기본 색상 초기화 (0x0FF0_0400 대역)
    lui  t1, 0x0FF00
    addi t1, t1, 0x400          # t1 = 0x0FF0_0400 (LUT Base)

    sw   zero, 0(t1)            # LUT[0]  = 0x00000 (투명)
    
    lui  t2, 0x3F
    sw   t2, 4(t1)              # LUT[1]  = 0x3F000 (Red)
    
    lui  t2, 0x15
    addi t2, t2, 0x555
    sw   t2, 32(t1)             # LUT[8]  = 0x15555 (Gray)
    
    lui  t2, 0x3E
    addi t2, t2, 0xDCE
    sw   t2, 44(t1)             # LUT[11] = 0x3EDCE (Skin Peach)

    # 3. Font Map BRAM 14 전체를 공백(0x00200020)으로 채우기 (1024 워드)
    lui  t1, 0x0FF01            # t1 = 0x0FF0_1000 (Font Map Base)
    lui  t2, 0x00200
    addi t2, t2, 0x020          # t2 = 0x00200020
    add  t3, zero, zero         # 카운터 = 0
    lui  t4, 0x1
    srli t4, t4, 2              # t4 = 1024 (0x400)

clear_fontmap_loop:
    sw   t2, 0(t1)
    addi t1, t1, 4
    addi t3, t3, 1
    bne  t3, t4, clear_fontmap_loop

    # 4. 필수 레이어 기본 주소 및 속성 설정
    # (펌웨어 코드 영역 0x00000을 피해 0x01000부터 배치)
    lui  t1, 0x0FF00
    lui  t2, 0x01
    sw   t2, 0x000(t1)          # BG1_ADDR = 0x01000
    lui  t2, 0x04
    sw   t2, 0x008(t1)          # CHR1_ADDR = 0x04000

    # Character 1 속성 (Alpha = 16, Z-order = 3)
    lui  t2, 0x1
    addi t2, t2, 3              # 0x00001003
    sw   t2, 0x040(t1)          # CHR1_ATTR

    # Character 1 시작 위치 (X=100, Y=10 -> 0x000A0064)
    lui  t2, 0xA0
    addi t2, t2, 100
    sw   t2, 0x03C(t1)          # CHR1_POS

    # 5. 최초 1프레임 렌더링 트리거
    addi t5, zero, 1
    sw   t5, 0x0A4(t1)          # PPU_START = 1
    sw   zero, 0x0A4(t1)        # PPU_START = 0

# ------------------------------------------------------------------------------
# Main Idle Loop (인터럽트 대기)
# ------------------------------------------------------------------------------
main_loop:
    nop
    jal  zero, main_loop