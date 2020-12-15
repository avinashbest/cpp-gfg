#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int* ptr = &x;
  cout << (*ptr) <<" "; // 10
  x += 30;
  cout << (*ptr) <<" "; // 40
  cout << ptr <<" "; // 0x61febc => something like this
  *ptr = *ptr + 40;
  cout << x <<" "; // 80
  return 0;
}
