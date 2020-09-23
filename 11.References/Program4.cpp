/*
Application 3:
Modifications in for each loop.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v1{10, 20, 30, 40};
    for (auto &x : v1)
    {
        x = x + 5;
    }

    for (auto x : v1)
    {
        cout << x << " ";
    }

    return 0;
}