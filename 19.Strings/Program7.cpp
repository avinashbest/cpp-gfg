#include <iostream>
using namespace std;

int main(void)
{
    string str;
    cout << "Enter Your Name: ";
    // cin >> str; // We don't use this because it stop reading when sees space
    getline(cin, str); //Take input unless we enter
    // getline(cin, str , 'a'); last paramter is optional => if it sees 'a' it stops reading
    cout << "\nYour Name is " << str;
    return 0;
}