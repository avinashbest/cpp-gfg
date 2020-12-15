#include <iostream>
using namespace std;
// Error Fix Code

/*
void fun(); // Function Declaration
*/

int main(void)
{
    fun(); //error: 'fun' was not declared in this scope
    return 0;
}

void fun() // Function Defination
{
    cout << "Hello";
}