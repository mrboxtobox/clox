#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

// Each instruction has a 1-byte opcode e.g. add, subtract etc.
typedef enum {
  OP_RETURN,
} OpCode;

// Dynamic array containing the opcodes.
typedef struct {
  int count;
  int capacity;
  uint8_t* code;
} Chunk;

// Initializes a new |Chunk|.
void initChunk(Chunk* chunk);

// Free allocated memory in a chunk.
void freeChunk(Chunk* chunk);

// Appends a byte to the end of the chunk.
void writeChunk(Chunk* chunk, uint8_t byte);

#endif
