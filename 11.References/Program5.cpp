/*
Application 4:
Avoiding copy of large objects in for each loops.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> v1{"geeksforgeeks practice", "geeksforgeeks IDE", "geeksforgeeks write"};

    for (const auto &x : v1) //Usign reference increases the efficiency of the program and reduces time complexity. ==> const is added so that there is no any accidental change happen in the loop and our data remains protected.
    {
        cout << x << " ";
    }

    return 0;
}
