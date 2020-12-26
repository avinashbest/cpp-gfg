#include <iostream>
using namespace std;

int average(int arr[], int n) //throw(string)
{
    if (n == 0)
    {
        throw string("Array size is zero");
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (static_cast<double>(sum) / n);
}

int main(void)
{
    int arr[] = {4, 5, 2};
    int n = 0;
    try
    {
        int result = average(arr, n);
        cout << result;
    }
    catch (string &e)
    {
        cout << e;
    }
    cout << "\nBye...";
    return 0;
}