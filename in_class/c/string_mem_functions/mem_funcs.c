#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int* data = (int*)malloc(sizeof(int) * 32);
  memset(data, 1, 32 * sizeof(int));
  for(int i = 0; i < 32; i++){
    printf("%d ", data[i]);
  }
  printf("\n");
  printf("int is %d bytes", sizeof(int));

}
