#include <stdio.h>

// You either need to define a function above where you call it, or you can declare a function prototype and define the function later. 
// Here we demonstrate the latter

// This is a function prototype
int GetSmaller(int a, int b);

void main(){
  int x = GetSmaller(0, 5);
  printf("result: %d\n", x);
}

// This is the function definition
int GetSmaller(int a, int b){
  if(a < b) return a;
  return b;
}
