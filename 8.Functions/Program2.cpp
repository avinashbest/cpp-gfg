#include <iostream>
using namespace std;

void find_greater(int x, int y)
{
    if (x > y)
    {
        cout << x << " is greater." << endl;
        return; //control back to the function call
    }
    cout << y << " is greater." << endl;
    return; //Does not do anything
}

int main(void)
{
    find_greater(10, 20);
    find_greater(20, 10);
    return 0;
}