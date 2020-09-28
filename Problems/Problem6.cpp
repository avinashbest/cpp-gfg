//Variable Argument:
//One might have seen functions such as printf, scanf which are capable of printing/scanning any number of input arguments provided.
//This is achieved by using variable arguments. The advantage of having a variable argument feature in C++ is to have functions which can operate on any number of arguments and produce the result.
//e.g. Suppose we want a function that can take the average of any number of integers passed:
#include <bits/stdc++.h>
using namespace std;

double average(int num, ...) //This spread operator is the indication of declaring the function as accepting variable arguments.
{
    va_list args; //va_list: Stores the list of variable arguments recieved.
    double sum = 0;

    va_start(args, num); //va_arg: Retrieves the next value in the va_list with the type passed as the parameter.
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(args, double);
    }
    va_end(args); //va_end: Clean up the argument list.

    return sum / num;
}

int main(void)
{
    cout << average(3, 1, 2, 3) << endl;
    cout << average(5, 1, 2, 3, 4, 5) << endl;
    return 0;
}