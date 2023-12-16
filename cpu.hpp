#include <iostream>

class chip_8 {
	load_rom(char const *filename);
	uint8_t REGISTERS[16];
	uint8_t MEMORY[4096];
	uint16_t PROGRAM_COUNTER;
	uint16_t STACK[16];
	uint8_t STACK_POINTER;
	uint8_t SOUND_TIMER;
	uint8_t DELAY_TIMER;
	uint16_t INPUT_KEYS[16];
	uint32_t VIDEO[64 * 32];
	uint16_t OPCODE;
}
