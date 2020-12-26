#include <iostream>
using namespace std;

struct s4
{
    double d1;
    char c1;
    char c2;
} __attribute__((packed));

int main(void)
{
    cout << sizeof(s4); //10 if not packed then 16 bytes
    return 0;
}