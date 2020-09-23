#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    static int a;
    int b, c;
    int *ptr = new int[5];
    *(ptr + 2) = 10;
    cout << *(ptr + 2);
    delete[] ptr; //Free the Memory
    ptr = NULL;
    return 0;
}