#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int *ptr;
  cout << ptr << " "; //garbage value
  cout << (*ptr) << " ";//Segmentation fault
  return 0;
}
