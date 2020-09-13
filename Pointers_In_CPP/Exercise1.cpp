#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3};
  int* ptr = arr;
  cout<<sizeof(arr)<<" "; // 12
  cout<<sizeof(ptr)<<" "; // 4
  return 0;
}
