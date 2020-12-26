/*
Application of Pointer:
2. Passing large objects (Avoiding copying -> Saving CPU time and resources making program faster.)
3. Dyanamic Memory Allocation
4. Implementation of data structure like linked list, Tree, BST etc.
5. To do system level programming.
6. To return multiple values.
*/
#include <iostream>
#include <vector>
using namespace std;

void processVector(vector<int> *v){

}

int main()
{
  vector<int> v;
  for (int i = 0; i < 100; i++) {
    v.push_back(i);
  }
  processVector(&v);
  return 0;
}
