/*
Application 2:
Avoiding copy of large objects during function calls.
*/
#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &v1)
{
    for (auto x : v1)
    {
        cout << x << " ";
    }
}

int main(void)
{
    vector<int> v1;
    for (int i = 0; i < 1000; i++)
    {
        v1.push_back(i);
    }

    print(v1);

    return 0;
}
