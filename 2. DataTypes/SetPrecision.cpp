#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b)
{
    //perform a/b
    float res = a / b;

    cout << fixed << setprecision(3) << res << endl;

    cout << endl;
}

void precise(float, float); //prototype

//Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b;
        cin >> a >> b; //Taking input of a and b in floating types
        precise(a, b);
    }
    return 0;
}