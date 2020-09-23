/*
There are 3 types of Memory Allocation:
Automatic => STACK
Static => DATA Segment => created as global or static varible which remains throught life-time of that program.
Dyanamic => HEAP
*/
#include <iostream>
using namespace std;

int *func()
{
    int a = 10;    //int *ptr = new int;
    int *ptr = &a; //*ptr = 10;
    return ptr;
}

int main(void)
{
    int x, y;
    cout << *func();
    // int *ptr = func();
    // delete ptr;
    return 0;
}