#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n = 10;
    vector<int> v1(n, 5); //Creates an array of size 10 with all elements 5.
    for (auto x : v1)
    {
        cout << x << " "; //5 5 5 5 5 5 5 5 5 5
    }

    cout << endl;

    vector<int> v2{5, 10, 15, 20, 25, 30, 35};
    for (auto x : v2)
    {
        cout << x << " "; //5 10 15 20 25 30 35
    }

    return 0;
}