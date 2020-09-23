#include <iostream>
using namespace std;
int main() {
  int* ptr;
  double* ptr_d;
  string* ptr_str;
  cout<<(sizeof(ptr))<<" "; // 4
  cout<<(sizeof(ptr_d))<<" "; // 4
  cout<<(sizeof(ptr_str))<<" "; // 4
  return 0;
}
