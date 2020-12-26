#include <iostream>
#include <memory>
using namespace std;

class test
{
private:
    int x;

public:
    test(int);
    ~test();
    void fun();
};

test::test(int a = 0)
{
    x = a;
    cout << "Constructor" << endl;
}

test::~test()
{
    cout << "Destructor" << endl;
}

void test::fun()
{
    cout << x << endl;
}

int main(void)
{
    shared_ptr<test> ptr1;
    {
        shared_ptr<test> ptr2 = make_shared<test>(10);
        ptr1 = ptr2;
    }
    cout << "Main Ends" << endl;
    return 0;
}