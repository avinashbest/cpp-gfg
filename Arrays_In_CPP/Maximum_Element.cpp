#include <iostream>
using namespace std;

int main(void)
{
    int arr[] = {10,
                 20,
                 100,
                 40,
                 50,
                 500,
                 8};
    int n = sizeof(arr) / sizeof(arr[0]); //No of elements
    int result = arr[0];
    //Maximum Element
    for (int i = 1; i < n; i++)
    {
        result = max(result, arr[i]);
    }
    cout << result;
    // Maximum Element -> Another method
    // int maximum = *max_element(arr, arr + n);
    // cout << maximum;
    return 0;
}