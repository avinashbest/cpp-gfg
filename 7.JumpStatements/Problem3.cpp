#include <iostream>
using namespace std;

int main(void)
{
    cout << "Begin" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            return 0; //Return statement is more powerful than break statement ==> it comes out of the function.
        }
        cout << i << " ";
    }
    cout << "End";
    return 0;
}