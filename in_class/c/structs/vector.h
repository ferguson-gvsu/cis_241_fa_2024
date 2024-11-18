#include <stdio.h>
#include <stdlib.h>

#ifndef VECTOR_H
#define VECTOR_H

typedef struct IntVector{
  int size;
  int num_items;
  int* data_ptr;
} IntVector;

void Append(IntVector* vec_ptr, int x);

void Print(IntVector* vec_ptr);

#endif
