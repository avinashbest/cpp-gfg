#include <iostream>
using namespace std;

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << " "; //0 1 2 3 4
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << " "; //0 1 2 3 4 6 7 8 9 ==> Just skips 5
    }

    return 0;
}