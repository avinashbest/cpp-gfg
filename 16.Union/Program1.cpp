#include <iostream>
using namespace std;

union test
{
    int x;
    int y;
};

int main(void)
{
    test t;
    t.x = 10;
    cout << t.x << " " << t.y << endl; //10 10
    t.y = 20;
    cout << t.x << " " << t.y << endl; //20 20
    cout << sizeof(t);                 //4
    return 0;
}