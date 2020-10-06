#include <iostream>
using namespace std;

int main(void)
{
    char str[] = {'G', 'F', 'G'}; //Multiple possible output => Compiler Dependent => Segmentation Fault
    cout << str;
    return 0;
}