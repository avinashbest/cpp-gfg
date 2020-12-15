#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char str[5];
    // str = "GFG"; //Compiler Error
    strcpy(str, "GFG");
    cout << str << endl;

    return 0;
}