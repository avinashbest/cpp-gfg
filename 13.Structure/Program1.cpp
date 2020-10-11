#include <iostream>
using namespace std;
//User-defined data-type
struct point
{
  int x;
  int y;
};

int main()
{
  struct point p; //writing struct is mandatory in C but not in CPP.
  p.x = 10;
  p.y = 20;
  cout << p.x << " " << p.y;
  return 0;
}
