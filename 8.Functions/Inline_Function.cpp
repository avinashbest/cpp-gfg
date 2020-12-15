#include <iostream>
using namespace std;

inline int square(int a) //Inline Function ==> Modern compiler automatically do this.
{
    return (a * a);
}
int main(void)
{
    cout << square(10);
    return 0;
}