#include <iostream>
using namespace std;
//Cpp String Class
int main(void)
{
    string str = "geeksforgeeks";
    cout << str.length() << endl; // 13
    str = str + " avinashbest";
    cout << str << endl;
    cout << str.substr(5, 3) << endl; //for
    cout << str.find("avi") << endl;  //return index: 14
    return 0;
}