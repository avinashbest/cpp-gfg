#include <iostream>
using namespace std;

struct s1
{
    char c1;   // 1 + 7(Alignment)
    double d1; //8
    char c2;   //1 + 7(Alignment)
};

struct s2
{
    char c3;   //1
    char c4;   //1 + 6(Alignment)
    double d2; //8
};

int main(void)
{
    cout << sizeof(s1) << " " << sizeof(s2) << endl; //24 16 ==> On Intel Archeitecture 64 bits running linux ==> Machine Dependent
    return 0;
}