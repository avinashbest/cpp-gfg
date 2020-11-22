#include <iostream>
using namespace std;

int main(void)
{
    int x = 10, y = 20;
    if (x = y) //Code Fix: if(x==y)--> Otherwise x will be assigned the value of y which is a non-zero digit value which becomes always true and if condition will execute only.
    {
        cout << "Same!";
    }
    else
    {
        cout << "Not Same!";
    }

    return 0;
}