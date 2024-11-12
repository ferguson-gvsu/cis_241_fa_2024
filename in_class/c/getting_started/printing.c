#include <stdio.h>

int main(){
  // Printing integers
  printf("I am %d years old!\n", 5);
  printf("I am %3d years old!\n", 5);
  printf("I am %03d years old!\n", 5);
  printf("I am %-3d years old!\n", 5);
  // Printing floats
  float pi = 3.14;
  printf("pi = %f\n", pi);
  printf("pi = %e\n", pi);
  printf("pi = %g\n", pi);
  printf("pi = %010.3fx\n", pi);
  printf("pi = %-10.3fx\n", pi);

  printf("This is a string: %s. Huh!\n", "this is a test");

  // The difference between %d and %c
  for(unsigned char c = 0; c <= 254; c++){
    printf("%d %c\n", c, c);
  }
  return 0;
}
