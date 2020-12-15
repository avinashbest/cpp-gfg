#include <iostream>
using namespace std;

struct s3
{
    double d1;//8
    char c1;//1
    char c2;//1 + 6(Alignment)
};

int main(void)
{
    cout << sizeof(s3); //16
    return 0;
}