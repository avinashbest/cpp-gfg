#include <iostream>
using namespace std;

int main(void)
{
    int x = 5;
    bool result = (x == 4) || (x++); //Here 1st expression is going to be false that's why 2nd Expression is evaluated
    cout << result << " " << x;      // 1 and 6
    return 0;
}
