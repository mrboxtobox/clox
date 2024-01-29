#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

// Each instruction has a 1-byte opcode e.g. add, subtract etc.
typedef enum {
  OP_CONSTANT,
  OP_RETURN,
} OpCode;

// Dynamic array containing the opcodes.
typedef struct {
  // Number of elements in the array.
  int count;
  // Size of the array.
  int capacity;
  // Bytecode.
  uint8_t *code;
  // Parallel array of integers containing line numbers for the associated byte
  // in `code`. Simple but inefficient. Stored in a separate array to prevent
  // taking up space in the CPU cache.
  int *lines;
  // Constants specified in the program.
  ValueArray constants;
} Chunk;

// Initializes a new |Chunk|.
void initChunk(Chunk *chunk);

// Free allocated memory in a chunk.
void freeChunk(Chunk *chunk);

// Appends a byte to the end of the chunk.
void writeChunk(Chunk *chunk, uint8_t byte, int line);

// Convenience method to write a constant to a chunk.
// Returns the index where the constant was appended.
int addConstant(Chunk *chunk, Value value);

#endif
