#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cout << "Enter Side: "; //Insertion Operator
    cin >> x;               //Extraction Operator
    cout << "Area of Square " << (x * x);
    return 0;
}