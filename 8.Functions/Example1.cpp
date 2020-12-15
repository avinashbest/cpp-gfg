#include <iostream>
using namespace std;

void printDetail(string f_name, string l_name = "")
{
    cout << f_name << " ";
    if (l_name != "")
    {
        cout << l_name << " ";
    }
}

int main(void)
{
    printDetail("Sandeep", "Jain");
    printDetail("Shivam", "Kumar");
    return 0;
}