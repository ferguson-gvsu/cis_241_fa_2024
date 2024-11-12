#include <stdio.h>

int PlusOne(){
  return x + 1; // We don't have access to x here. Error!
}

int main(){
  int x = 0;
  printf("x = %d\n", x);
  printf("res = %d\n", PlusOne());
  return 0;
}
