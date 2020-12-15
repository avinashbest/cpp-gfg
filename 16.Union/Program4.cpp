/*
Application of union: Type Punning
*/
#include <iostream>
using namespace std;
union test
{
    int x;
    char bin[4];
};

int main(void)
{
    test t;
    t.x = 512;
    cout << (int)t.bin[0] << " " << (int)t.bin[1] << " " << (int)t.bin[2] << " " << (int)t.bin[3] << endl;
    return 0;
}