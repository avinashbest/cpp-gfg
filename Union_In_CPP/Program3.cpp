/*
Application of union: Type Punning
*/
#include <iostream>
using namespace std;
union test
{
    int x;
    float y;
};

int main(void)
{
    test t;
    t.y = 1.1;
    cout << t.x;
    return 0;
}