#include <iostream>
using namespace std;

int main()
{
  char arr[] = {1,2,3};
  char* ptr = arr;
  cout<<sizeof(arr)<<" "; // 3
  cout<<sizeof(ptr)<<" "; // 4
  return 0;
}
