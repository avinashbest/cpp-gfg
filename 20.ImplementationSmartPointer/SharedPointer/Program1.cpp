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
    //shared_ptr<test>ptr = make shared<test>(10);
    shared_ptr<test> ptr1(new test(10));
    shared_ptr<test> ptr2 = ptr1;
    cout << ptr1.use_count() << endl; //2 shared ptr sharing this
    cout << ptr2.use_count() << endl; //2 shared ptr sharing this
    return 0;
}
/*
O/P:
Constructor
2
2
Destructor
*/