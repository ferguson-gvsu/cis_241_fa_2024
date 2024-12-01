#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char s1[32] = "hello";
  char s2[] = " world";
  strcat(s1, s2);
  printf("%s\n", s1);

  int x = 5;
  sprintf(s1, "The var x = %d", x);
  printf("%s\n", s1);
  printf("String is length: %d\n", strlen(s1));
}
