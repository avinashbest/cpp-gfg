#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
    virtual const char *what() const throw()
    {
        return "Exception Occured\n";
    }
};

int main(void)
{
    try
    {
        throw MyException();
    }
    catch (exception &e)
    {
        cerr << e.what();
    }

    return 0;
}