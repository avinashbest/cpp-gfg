#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        goto label1;
    }
    else
    {
        goto label2;
    }
label1:
    cout << "Even";
    return 0;
label2:
    cout << "Odd";
    return 0;
}