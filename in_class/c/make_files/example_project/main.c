#include <stdio.h>

#include "vector.h"
#include "cool_math.h"

int main(){
  IntVector vec = {0,0,0};
  for(int i = 0; i < 10; i++){
    Append(&vec, Factorial(i));
  }
  Print(&vec);
  return 0;
}
