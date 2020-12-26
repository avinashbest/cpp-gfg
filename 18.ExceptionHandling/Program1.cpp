#include <iostream>
using namespace std;
//try, throw & catch
int main(void)
{
    int x, y;
    cin >> x >> y;
    try
    {
        if (y == 0)
        {
            throw 0;
        }
        cout << "Result is " << (static_cast<double>(x) / y);
    }
    catch (int x)
    {
        cout << "Divisor is Zero!" << endl;
    }

    return 0;
}

/*
Exception Handling:
-> Divide by zero.
-> No Heap memory available.
-> Accessing array elements outside the allowed index range.
-> Pop from an empty stack.
*/