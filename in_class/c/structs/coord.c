#include <stdio.h>
#include <stdlib.h>

typedef struct Coord{
  double x; 
  double y;
} Coord;

void PrintCoord(Coord* c_ptr){
  printf("(%.2f,%.2f)\n", c_ptr->x, c_ptr->y);
}

int main(){
  Coord c;
  Coord* p = &c;
  PrintCoord(p);
  c.x = 100; 
  PrintCoord(p);
  (*p).x = 200;
  PrintCoord(p);
  p->x = 300;
  PrintCoord(p);

  Coord* p2 = (Coord*)malloc(sizeof(Coord));
  PrintCoord(p2);
  free(p2);
  

  return 0;
}
