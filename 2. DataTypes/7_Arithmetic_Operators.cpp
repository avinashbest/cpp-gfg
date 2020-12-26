#include <iostream>
using namespace std;

int main(void)
{
    int x = 10, y = 20;
    cout << (x + y) << endl;       //Addition = 30         --> Binary Operator => Required 2 Operands
    cout << (x * y) << endl;       //Multiplication = 200  --> Binary Operator => Required 2 Operands
    cout << (x % y) << endl;       //Remainder = 10        --> Binary Operator => Required 2 Operands
    int z = x++;                   //Post-fix =>i.e, first ==> int z = x; Second ==>  x = x+1; --> Unary Operator => Required 1 Operand only
    cout << x << " " << z << endl; //x = 11(Incremented value) and z = 10 (Old value)
    z = ++x;                       //Pre-fix => i.e,  first ==> x = x+1; Second ==> z = x; --> Unary Operator => Required 1 Operand only
    cout << x << " " << z << endl; //x = 12(Incremented value) and z = 12 (Old value)

    /*
    Compiler Depended Behaviour/ Undefined Behaviour
    z = x++ ++x;
    z = x++/++x;
    z = x++ * ++x;
    */

    return 0;
}
