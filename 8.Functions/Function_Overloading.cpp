#include <iostream>
using namespace std;

void print(int i)
{
    cout << i << " ";
}
void print(string s)
{
    cout << s << " ";
}
//Same function name difference according to input data type
int main(void)
{
    print(10);
    print("GFG");
    return 0;
}
/*
Ambigous Function behaviour ==> Compiler Error
int fun();
double fun();
int main(){
    cout<<fun();
}
*/