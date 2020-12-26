//Iterating through a String
#include <iostream>
using namespace std;

int main(void)
{
    string str = "geeksforgeeks";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
    for (char x : str) //for-each loop
    {
        cout << x;
    }
    return 0;
}