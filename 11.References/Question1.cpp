#include <iostream>
using namespace std;

int main(void)
{
    int x = 10, z = 20;
    int &y = x;
    y = z; //x = y = z = 20
    y = y + 5;
    cout << x << " " << y << " " << z; //25 25 20
    return 0;
}