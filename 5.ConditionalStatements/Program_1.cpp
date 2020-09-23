/*Write a program to find sum of first n natural number. Your program should generate error if entered*/
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid";
    }
    else
    {
        cout << (n * (n + 1) / 2);
    }

    return 0;
}
