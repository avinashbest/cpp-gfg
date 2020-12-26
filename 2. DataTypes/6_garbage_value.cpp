#include <iostream>
using namespace std;

int x; // Global Variable has default value of 0

int main(void)
{
    cout << x << endl;
    int y; // Local Variable has default Garbage value
    cout << y << endl;
    static int z; //The variable remains static through out the program. Initalized with 0 same as global variable
    cout << z << endl;
    const int i; //Variable can't be modified --> We use const variable in place of macro in C++ Mostly!
    i = i + 1;   // Compiler Error
    cout << i << endl;
    return 0;
}
