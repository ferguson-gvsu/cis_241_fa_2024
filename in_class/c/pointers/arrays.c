#include <stdio.h>

int main(){
  long arr[3] = {0,0,0};
  long* p = arr;
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  p[0] = 10;
  printf("p[0] = 10;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  *p += 10;
  printf("*p += 10;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  *(p + 1) = 9;
  printf("*(p + 1) = 9;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  p += 2;
  printf("p += 2;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  *p = 1;
  printf("*p = 1;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  p--;
  printf("p--;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  *p -= 2;
  printf("*p -= 2;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);
  p[0]--;
  printf("p[0]--;\n");
  printf("<%ld, %ld, %ld>\n", arr[0], arr[1], arr[2]);

  return 0;
}
