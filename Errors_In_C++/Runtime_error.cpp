#include <iostream>
using namespace std;
//Examples of runtime-error
// Memory Leak
// Uninitialized pointer and dereference it

int main(void)
{
    int x = 10, y = 0;
    int z;
    z = x / y; //Produces a runtime error which very very dangerous
    return 0;
}

/*
Error Fixing code:
if(y==0){
    cout<<"Invalid Y";
    exit(0);
}
*/