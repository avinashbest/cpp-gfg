/*
Application of Pointer:
7. Used for accessing array elements
*/
#include <bits/stdc++.h>
using namespace std;
//int* ptr = arr; or int ptr[] = arr; ==> both are same in  taking array as an argument
void fun(int *ptr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << ptr[i] << " "; //ptr[i] read by compiler by *(ptr+i)
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  fun(arr, 5);
  return 0;
}
