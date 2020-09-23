#include <iostream>
using namespace std;

union test
{
    int x;
    char y;
    double z;
};

int main(void)
{
    cout << sizeof(test); //8 => largest member size
    return 0;
}