#include <iostream>
using namespace std;

void fun()
{
    int a = 1;
    static int x = 1;
    x++;
    a++;
    cout << x << " " << a << endl;
}
int main(void)
{
    fun(); //2 2
    fun(); //3 2
    fun(); //4 2
    return 0;
}