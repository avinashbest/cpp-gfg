//struct and class differ in inheritance also. default for struct is public and class private.
#include <iostream>
using namespace std;

class base{
private:
  int x;
};

class derived: base {

};

/*
CODE FIX:
class derived: public base {

};
*/
int main() { //Compiler error => Provate member accessing
  derived d;
  d.x = 20;
  return 0;
}

//Program 5 contd.
