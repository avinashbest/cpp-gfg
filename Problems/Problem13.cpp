#include <iostream>
using namespace std;
// Write a program simulating a calculator (supporting +,-,*,/). It should continuously ask for 2 numbers and the particular operation to perform (as a character), and produce the output accordingly. The program should quit if the user enters the character 'Q'.
int main() {
  char opr;
  int op1, op2;

  while (true) {
    cin>>opr;
    if (opr == 'Q' || opr == 'q') {
      break;
    }
    else{
      cin>>op1>>op2;
      switch (opr) {
        case '+':
          cout<<op1+op2<<endl;
          break;
        case '-':
          cout<<op1-op2<<endl;
          break;
        case '*':
          cout<<op1*op2<<endl;
          break;
        case '/':
          cout<<op1/op2<<endl;
          break;
      }
    }
  }
  return 0;
}
