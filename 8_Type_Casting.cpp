#include <iostream>
using namespace std;

int main(void)
{
    int x = 10, y = 20;
    double z = x / y;
    double j = static_cast<double>(x) / y; //Modern C++ Style Type-Casting  -->1st Check whether you type-cast it previously or not.If not then it only type-cast
    double i = (double)x / y;              //Old C Style Type-Casting--> Blindly Type-cast whether already done or not
    cout << z << endl;                     //Answer = 0 but Expectation = 0.5
    cout << i << endl;                     //Answer = 0.5 and Expectation = 0.5
    cout << j << endl;                     //Answer = 0.5 and Expectation = 0.5
    return 0;
}