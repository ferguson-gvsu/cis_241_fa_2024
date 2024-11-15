#include <stdio.h>
#include <stdlib.h>

// This is vector_basic_broken.c after we've fixed the bugs. 
// Namely, we: 
//  1) Initialized the member variables in the vector
//  2) Freed the vector when we're done
//
//  This vector works fine, but we'll improve it's efficiency in another file...

typedef struct IntVector{
  int size;
  int* data_ptr;
} IntVector;

void Append(IntVector* vec_ptr, int x){
  vec_ptr->size += 1;
  // If vector is empty, allocate new array
  if(vec_ptr->size == 1){
    vec_ptr->data_ptr = malloc(sizeof(int));
  }
  else{ // If we have an array, make it bigger
    vec_ptr->data_ptr = 
      realloc(vec_ptr->data_ptr, sizeof(int) * vec_ptr->size);
  }
  int* p = vec_ptr->data_ptr + (vec_ptr->size - 1);
  *p = x;
}

void Print(IntVector* vec_ptr){
  printf("vector: ");
  for(int i = 0; i < vec_ptr->size; i++){
    printf("%d ", *(vec_ptr->data_ptr + i));
  }
  printf("\n");
}
   
int main(){

  IntVector v = {0, NULL}; // Initialize vector's members
  Print(&v);
  Append(&v, 7);
  Print(&v);
  Append(&v, 8);
  Print(&v);
  Append(&v, 9);
  Print(&v);
  free(v.data_ptr);
  return 0;
}
