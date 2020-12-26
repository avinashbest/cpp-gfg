#include <iostream>
using namespace std;

int main(void)
{
    cout << "\n\n";

    cout << "Size of char = " << sizeof(char) << endl;
    cout << "Size of int = " << sizeof(int) << endl; // Usually 4 bytes in 64-bits
    cout << "Size of long int = " << sizeof(long int) << endl;
    cout << "Size of long long int = " << sizeof(long long int) << endl;
    cout << "Size of Unsigned int = " << sizeof(unsigned int) << endl;
    cout << "Size of Unsigned char = " << sizeof(unsigned char) << endl;
    cout << "Size of float = " << sizeof(float) << endl;
    cout << "Size of double = " << sizeof(double) << endl;
    cout << "Size of bool = " << sizeof(bool) << endl;

    cout << "\n\n";
    return 0;
}
