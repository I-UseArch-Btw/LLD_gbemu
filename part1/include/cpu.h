#pragma once

#include <common.h>

typedef struct cpu_registers
{
    u8 a;
    u8 f;
    u8 b;
    u8 c;
    u8 d;
    u8 e;
    u8 h;
    u8 l;
    u16 pc;
    u16 sp;
};

typedef struct cpu_context
{
    cpu_registers regs;

    //current fetch...
    u16 fetch_data;
    u16 mem_dest;
    u8 cur_opcode;

    bool halted;
    bool stepping;
    
};




void cpu_init();
bool cpu_step();
