/*Printing the table of the given number*/
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
    return 0;
}
