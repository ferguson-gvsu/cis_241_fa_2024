#include <stdio.h>

int main(){

  int x = 5;
  int* p = &x;

  printf("x is %d; p is %p; *p is %d\n", x, p, *p);
  *p = 7;
  printf("x is %d; p is %p; *p is %d\n", x, p, *p);
  p = p + 1;
  printf("x is %d; p is %p; *p is %d\n", x, p, *p);

  printf("Int is this big: %lu\n", sizeof(int));

  char c = 'a';
  char* ptr_2 = &c;

  ptr_2 += 1;


  char char_array[] = "CIS241";
  printf("char_array = %p; *char_array = %c\n", char_array, *char_array);
  printf("char_array + 2 = %p; *(char_array + 2) = %c\n", char_array + 2, *(char_array + 2));

  return 0;
}
