#include <iostream>
using namespace std;
void fun(int x, int y, int z)
{
    cout << x << " " << y << " " << z << endl; //Compiler Depended --> CPP Standard does say anything bout parameter evaluation.
}

int main(void)
{
    int i = 2;
    fun(++i, ++i, ++i);
    return 0;
}