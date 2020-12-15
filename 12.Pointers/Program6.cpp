/*
Application of Pointer:
1. Changing passed parameter
*/
#include <iostream>
using namespace std;

void swap(int* p1, int* p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main()
{
  int x = 10, y = 20;
  swap(&x, &y);
  cout<<x<<" "<<y<<" ";
  return 0;
}
