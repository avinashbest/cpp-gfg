#include <iostream>
using namespace std;

int main() 
{
  int *ptr;
  cout << ptr << " "; //garbage value
  cout << (*ptr) << " ";//Segmentation fault
  return 0;
}
