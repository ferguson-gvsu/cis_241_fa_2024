#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  printf("Command line args are:\n");
  for(int i = 0; i < argc; i++){
    printf("Arg %d: %s\n", i, argv[i]);
  }

  int loop_count = atoi(argv[1]);
  for(int i = 0; i < loop_count; i++){
    printf("Hello!\n");
  }

}
