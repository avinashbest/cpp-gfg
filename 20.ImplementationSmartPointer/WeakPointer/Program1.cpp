#include <iostream>
#include <memory>
using namespace std;
//Weak_pointer (used with shared: No Ownership)
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
    weak_ptr<test> ptr1;
    {
        shared_ptr<test> ptr2 = make_shared<test>(10);
        ptr1 = ptr2;
        // cout << ptr1.use_count() << endl;
        // cout << ptr2.use_count() << endl;
        // shared_ptr<test> ptr3 = lock(ptr1); //Convert weak ptr to shared ptr
        // cout << ptr1.use_count() << endl;
        // cout << ptr2.use_count() << endl;
    }
    cout << ptr1.expired() << endl;
    cout << "Main Ends" << endl;
    return 0;
}