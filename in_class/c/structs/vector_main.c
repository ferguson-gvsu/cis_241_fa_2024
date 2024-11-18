#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

// This file demonstrates using local header files
   
int main(){
  IntVector v = {0, 0, NULL};
  Print(&v);
  for(int i = 0; i < 30; i++){
    Append(&v, i);
    Print(&v);
  }
  //Append(&v, 7);
  //Print(&v);
  //Append(&v, 8);
  //Print(&v);
  //Append(&v, 9);
  //Print(&v);
  free(v.data_ptr);
  return 0;
}
