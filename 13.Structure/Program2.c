#include <stdio.h>

typedef struct point{
  int x;
  int y;
}P;

int main() {
  P p;
  p.x = 10;
  p.y = 20;
  printf("%d, %d",p.x ,p.y);
  return 0;
}
