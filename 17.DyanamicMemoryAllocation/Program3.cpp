/*MEMORY LEAK*/
#include <iostream>
using namespace std;

int *createConnection()
{
    int *ptr = new int;
    //-----------
    //-----------
    //-----------
    //-----------
    return ptr;
}

//To Avoid Memory Leak calling releaseConnection() is good.
/*
void releaseConnection(int *ptr)
{
    delete ptr;
}
*/
int main(void)
{
    while (1)
    {
        int *ptr = createConnection();
        //Do some Work!
        // -----------
        // -----------

        //releaseConnection(ptr);
    }

    return 0;
}