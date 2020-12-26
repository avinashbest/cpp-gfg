#include <iostream>
using namespace std;
void fun(int x, int y = 0, int z) //Code Fix fun(int x, int y, int z = 0)
{
    return (x + y + z); //Compiler error
}
int main(void)
{
    cout << fun(10, 20, 30);
    return 0;
}