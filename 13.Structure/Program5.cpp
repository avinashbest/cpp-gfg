#include <iostream>
using namespace std;
//structure(Pointer)
struct point
{
  int x;
  int y;
};

int main()
{
  point p = {10, 20};
  point *ptr_p = &p;
  cout << (ptr_p->x) << " "; //When we access struct using pointers we use arrow operator.
  ptr_p->x = 30;
  cout << p.x;
  return 0;
}
