/*
Write a Write a program that takes 10 pairs of numbers from user. For every pair(x,y), it prints x/y 
*/

#include <iostream>
using namespace std;

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        int x, y;
        cout << "Enter x and y: ";
        cin >> x >> y;
        if (y == 0)
        {
            cout << "Invalid" << endl;
            continue; //skip the below cout statement ==> control goes to for loop
        }
        cout << (x / y) << " " << endl;
    }

    return 0;
}