#include <stdio.h>

int main(){
  int x = 5;
  long y = 32;
  long long z = 0;
  double pi = 3.14;
  float test = 1200000;
  printf("This is a test!\n");
  int age = 5;

  printf("I am %d years old\n", age);
  printf("Pi is approximately: %f\n", pi);
  printf("I have %e dollars\n", test);
  printf("This is my string:\n%s\n", "Hello world!");

  printf("This is my unsigned value: %u\n", (unsigned int) -1);
  return 0;
}
