#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v; //Automatically manage the size dynamically
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //Traversing through vectors
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; //10 20 30
    }
    cout << endl;
    //Traversing through vectors -> Another Method
    for (auto x : v)
    {
        cout << x << " "; //10 20 30
    }

    return 0;
}