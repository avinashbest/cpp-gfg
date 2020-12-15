#include <iostream>
#include <numeric>
using namespace std;

int main(void)
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    long int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // cout << sum;
    sum = accumulate(arr, arr + n, sum); //accumulate(arr[0],arr + n, initial sum)
    cout << sum;
    return 0;
}