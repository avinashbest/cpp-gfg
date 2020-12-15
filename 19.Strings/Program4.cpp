#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char s1[] = "abc";
    char s2[] = "bcd";

    int result = strcmp(s1, s2);
    if (result > 0)
    {
        cout << "Greater" << endl;
    }
    else if (result == 0)
    {
        cout << "Same" << endl;
    }

    else
    {
        cout << "Smaller" << endl;
    }

    return 0;
}