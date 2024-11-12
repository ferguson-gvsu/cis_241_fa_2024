#include <stdio.h>
#include <stdlib.h>

// NOTE: This code currently segfaults! 
// This is where we left off when class ended on 11/11/2024
// We will fix it next class, but likely as a separate file :^)

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

  IntVector v;
  Print(&v);
  Append(&v, 7);
  Print(&v);
  Append(&v, 8);
  Print(&v);
  Append(&v, 9);
  Print(&v);
  return 0;
}
