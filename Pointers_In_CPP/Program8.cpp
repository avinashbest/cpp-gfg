/*
Application of Pointer:
6. To return multiple values.
*/
#include <iostream>
using namespace std;

void getAddress(int x, int y, int* mptr, int* aptr){
  *mptr = x * y;
  *aptr = x + y;
}

int main() {
  int x = 10, y = 20, a, m;
  getAddress(x, y, &a, &m);
  cout<<a<<" "<<m;
  return 0;
}
