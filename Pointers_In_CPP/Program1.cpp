#include <iostream>
using namespace std;
int main()
{
  int x = 10;
  cout << (&x) << endl;//0x61febc => Some random address like this
  cout << (*(&x));// 10
  return 0;
}
