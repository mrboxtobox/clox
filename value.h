#ifndef clox_value_h
#define clox_value_h

#include "common.h"

typedef double Value;

typedef struct {
  int capacity;
  int count;
  Value *values;
} ValueArray;

// Initializes a value array by zeroing out its values.
void initValueArray(ValueArray *array);

// Writes `value` to `array`. Increases capacity if needed.
void writeValueArray(ValueArray *array, Value value);

// Frees and resets memory used by `array`.
void freeValueArray(ValueArray *array);

// Prints a value.
void printValue(Value value);

#endif
