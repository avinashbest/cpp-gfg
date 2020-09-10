#include <iostream>
using namespace std;

int &fun()
{
    static int x = 10;//We should not return reference varible to a function containing local varible-> but return to a static local varible is fine=> because they remains after the function calls
    return x;
}

int main(void)
{
    int &z = fun();
    cout << fun() << " "; //10
    z = 30;
    cout << fun(); //30
    return 0;
}
/*
->  Review: Reference Variable
->  create an alias
->  must be assigned when declared
->  cannot refer to another location
->  cannot be NULL
->  safer
->  easier to use
*/