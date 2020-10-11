#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int* ptr = &x;
  cout<< (*ptr) <<" "; // 10
  cout<< ptr <<" "; //0x61febc => something address
  return 0;
}
