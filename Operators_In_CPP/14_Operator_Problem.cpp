#include <iostream>
using namespace std;

int main(void)
{
    int a = 10, b = 20, c = 30;
    if (c > b > a) //((c>b)>a)  ==> (1>a)  ==> else condition will run...
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }
    //OUTPUT: N
    return 0;
}