#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

// Disassemble all of the instructions in the entire chunk.
// Prints out the machine instructions into human-readable instructions.
void disassembleChunk(Chunk* chunk, const char* name);

// Disassembles a single instruction. Returns the offset of the next chunk.
int disassembleInstruction(Chunk* chunk, int offset);

#endif