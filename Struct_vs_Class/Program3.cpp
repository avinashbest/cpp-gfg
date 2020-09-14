#include <iostream>
using namespace std;
//like classes we canhave constructors, destructor, functions in a struct.
struct point{
  //data members
  int x;
  int y;
  //constructor
  point (int a, int b){
    x = a;
    y = b;
  }
  //function to print data on console screen
  void print(){
    cout<<x<<" "<<y<<endl;
  }
};

int main() {
  point p(10,20);//object of the structure by initializing the members by calling the constructor
  p.print();
  return 0;
};

//We can use structure only when we need to create a composite data type

//In OOPs, for data-hiding we generally use classes in general.
