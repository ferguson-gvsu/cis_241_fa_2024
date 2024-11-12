#include <stdio.h>

// Add one to a by-value argument
void PlusOne(int i){
  i++;
}

// Add one to a by-pointer (by-reference) argument
void PlusOnePtr(int* p){
  (*p)++;
}

// Helper function to print an entire array
void PrintArray(int a[], int len){
  int i = 0;
  for(i = 0; i < len; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(){
  int x = 0;
  printf("x = %d\n", x);
  printf("Calling PlusOne(x)\n");
  PlusOne(x);
  printf("x = %d\n", x);
  printf("Calling PlusOnePtr(&x)\n");
  PlusOnePtr(&x);
  printf("x = %d\n", x);
  int arr[10];
  PrintArray(arr, 10);
  return 0;
}
