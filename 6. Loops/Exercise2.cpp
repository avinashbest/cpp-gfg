#include <iostream>
using namespace std;

int main(void)
{
    while (20)
    {
        cout << "GFG" << endl; //Infinite times GFG will be printed => Compiler treat non-zero value as true and 0 as false
    }

    return 0;
}