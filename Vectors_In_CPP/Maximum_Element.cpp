#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v1 { 10, 20, 100, 40, 50, 500, 8 };
    int result = *max_element(v1.begin(), v1.end());
    cout << result;
    return 0;
}