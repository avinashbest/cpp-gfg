#include <iostream>
using namespace std;

int main(void)
{
    double x, y;
    cin >> x >> y;
    try
    {
        if (x == 0.0)
        {
            throw 0;
        }
        if (y == 0.0)
        {
            throw string("Y is Zero");
        }
        if (x + y < 0.0)
        {
            throw(x + y);
        }
    }
    catch (int e1)
    {
        cout << e1;
    }
    catch (string &str)
    {
        cout << str;
    }
    catch (...) //catch all block ==> if no matching found or default condition
    {
        cout << "x+y is less than zero!";
    }
    cout << "\nBye...";
    return 0;
}

/*
Input:
       x          y
->    0.0        1.0
->    1.0        0.0
->   -1.0       -2.0
*/