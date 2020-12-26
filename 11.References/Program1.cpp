#include <iostream>
using namespace std;

int main(void)
{
    int x = 10;
    int &y = x;
    cout << y << " "; //10
    x = x + 5;
    cout << y << " "; //15
    y = y + 5;
    cout << x << " "; //20
    return 0;
}