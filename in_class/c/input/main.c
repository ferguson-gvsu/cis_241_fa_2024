#include <stdio.h>

int main(){
  int sum = 0;
  while(1){
    int x;
    int res = scanf("%d", &x);
    if(res == EOF){
      break;
    }
    else if(res != 1){
      printf("Invalid input!\n");
      while(getchar() != '\n'){
        ;
      }
      continue;
    }
    sum += x;
    printf("Current sum: %d\n", sum);
  }
  printf("Final sum: %d\n", sum);
  return 0;
}
