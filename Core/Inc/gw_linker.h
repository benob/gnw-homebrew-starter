#pragma once

#include <stdint.h>

extern uint8_t __SAVEFLASH_START__;
extern uint8_t __SAVEFLASH_END__;
extern uint8_t __EXTFLASH_START__;

extern uint8_t __NULLPTR_LENGTH__;

extern uint8_t _Stack_Redzone_Size;
extern uint8_t _stack_redzone;

extern uint8_t _heap_start;
extern uint8_t _heap_end;


extern uint32_t _siramdata;
extern uint32_t __ram_exec_start__;
extern uint32_t __ram_exec_end__;

extern uint32_t _sitcram_hot;
extern uint32_t __itcram_hot_start__;
extern uint32_t __itcram_hot_end__;
extern uint8_t __configflash_start__;
extern uint8_t __configflash_end__;

