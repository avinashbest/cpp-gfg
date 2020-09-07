#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}

int main(void)
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = add(a, b);
    cout << result;
    return 0;
}