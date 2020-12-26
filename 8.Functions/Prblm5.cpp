#include <iostream>
using namespace std;

int main(void)
{
    cout << "Geeks" << endl;
    main(); //infinite condition no base case to terminate the recursive call leads to STACKOVERFLOW
    return 0;
}