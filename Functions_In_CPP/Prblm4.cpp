#include <iostream>
using namespace std;

void fun(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        cout << "Geeks"
             << " ";
        fun(n - 1); // Recursive call
    }
}

int main(void)
{
    fun(3);//Geeks Geeks Geeks
    return 0;
}