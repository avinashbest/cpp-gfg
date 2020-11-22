/*
Write a program to take age and gender of a user and print one of the followings as output
Male kid
Female kid
Male Adult
Female Adult
*/
#include <iostream>
using namespace std;

int main(void)
{
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter gender as 'F' or 'M': ";
    cin >> gender;
    if (gender == 'M')
    {
        cout << "Male ";
        if (age >= 18)
        {
            cout << "Adult" << endl;
        }
        else
        {
            cout << "Kid";
        }
    }
    else if (gender == 'F')
    {
        cout << "Female ";
        if (age >= 18)
        {
            cout << "Adult" << endl;
        }
        else
        {
            cout << "Kid";
        }
    }
    else
    {
        cout << "Invalid Gender!";
    }

    return 0;
}
