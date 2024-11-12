#include <stdio.h>
#include <stdlib.h>

int main(){
  int len = 100;
  int* arr = (int*)malloc(sizeof(int) * len);

  for(int i = 0; i < len; i++){
    printf("[%02d] = %d\n", i, arr[i]);
  }

  int new_len = 10000;
  arr = (int*)realloc(arr, sizeof(int) * len);
  for(int i = 0; i < new_len; i++){
    printf("[%02d] = %d\n", i, arr[i]);
  }

  free(arr);
  return 0;
}
