#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    cout << "Enter Number: "; //Insertion Operator
    cin >> x;                 //Extraction Operator
    cout << "Enter Number: ";
    cin >> y;
    cout << "Multiplication is " << (x * y) << endl;
    return 0;
}

/*

OUTPUT:
Enter Number: 5 5 //If the user input the data even the  program is not come to that instruction then the data is buffered and store, when the excution comes to next cin the processor automatically assigns the value to it.
Enter Number: Multiplication is 25

*/