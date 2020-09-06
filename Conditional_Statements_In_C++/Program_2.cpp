/*Write a program to take age of a user as input and prints "Adult" if the age is 18 or greater. Otherwise prints "Not Adult" */
#include <iostream>
using namespace std;

int main(void)
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Not Adult" << endl;
    }

    return 0;
}