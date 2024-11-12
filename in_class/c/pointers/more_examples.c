#include <stdio.h>

int main(){
  printf("The size (in bytes) of various types:");
  printf("int: %lu\n", sizeof(int));
  printf("char: %lu\n", sizeof(char));
  printf("int*: %lu\n", sizeof(int*));
  printf("char*: %lu\n", sizeof(char*));
  
  printf("\n");
  printf("What happens when pointers and their types don't match?\n");
  int x = 5000;
  int* p_i = &x;
  char* p_c = &x;

  printf("%d, %d\n", *p_i, *p_c);

  char c = 5;
  int* p2_i = &c;
  char* p2_c = &c;
  printf("%d, %d\n", *p2_i, *p2_c);

  // Pointer arithmetic
  printf("\n");
  printf("Pointer arithmetic with an array:\n");
  int arr[3] = {5,6,7};
  printf("<%d, %d, %d>\n", arr[0], arr[1], arr[2]);
  *arr = 20;
  printf("<%d, %d, %d>\n", arr[0], arr[1], arr[2]);
  *(arr + 2) = 100;
  printf("<%d, %d, %d>\n", arr[0], arr[1], arr[2]);
  //arr++;
  int* p = arr;
  p++;
  *p = 1000;
  printf("<%d, %d, %d>\n", arr[0], arr[1], arr[2]);


  return 0;
}
