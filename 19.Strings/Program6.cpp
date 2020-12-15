#include <iostream>
using namespace std;

int main(void)
{
    string s1 = "abc";
    string s2 = "bcd";
    if (s1 == s2)
    {
        cout << "Same";
    }
    else if (s1 < s2)
    {
        cout << "Smaller";
    }

    else
    {
        cout << "Greater";
    }

    return 0;
}