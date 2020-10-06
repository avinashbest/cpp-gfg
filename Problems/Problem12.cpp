#include <bits/stdc++.h>
using namespace std;
//Count the number of digits of a number
int main()
{
    unsigned long long int x = 255657434267;
    int num_digit = 0;
    do
    {
        num_digit++;
        x = x/10;
    }while(x);
    cout<<num_digit<<endl;
    return 0;
}
