#include "vector.h"

void Append(IntVector* vec_ptr, int x){
  vec_ptr->num_items += 1;
  // If vector has room, just add item
  if(vec_ptr->num_items <= vec_ptr->size){
    int* p = vec_ptr->data_ptr + (vec_ptr->num_items - 1);
    *p = x;
    return;
  }
  // If vector does not have room, ???
  vec_ptr->size += 10;
  vec_ptr->data_ptr = 
      realloc(vec_ptr->data_ptr, sizeof(int) * vec_ptr->size);
  int* p = vec_ptr->data_ptr + (vec_ptr->num_items - 1);
  *p = x;
}

void Print(IntVector* vec_ptr){
  printf("vector: ");
  for(int i = 0; i < vec_ptr->num_items; i++){
    printf("%d ", *(vec_ptr->data_ptr + i));
  }
  printf("\n");
}
