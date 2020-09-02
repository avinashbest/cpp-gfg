#include <iostream>
using namespace std;

void function();

int main(void)
{
    function(); //undefined reference to `function()'
    // error: ld returned 1 exit status
    return 0;
}