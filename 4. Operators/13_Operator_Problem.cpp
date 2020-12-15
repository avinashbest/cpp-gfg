#include <iostream>
using namespace std;

int main(void)
{
    int x = 1, y = 2, z = 3, a;
    a = x, y, z; //comma operator is lowest precedence operator in precedence table. It is Binary Operator--> Evaluation 1st value then 2nd value --> Result => 1st value without parenthesis
    cout << a;   //1
    return 0;
}