//Designated Initialization of structure
#include <stdio.h>

struct point
{
  int x;
  int y;
};

int main()
{
  struct point p = {.y = 120, .x = 100}; // Order can change & some varible Initialization can be skipped also.
  printf("%d, %d\n", p.x, p.y);
  return 0;
}
