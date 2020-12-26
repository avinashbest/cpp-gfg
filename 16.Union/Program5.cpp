/*
Application of union: Using Annonymous Union to use one type for multiple purposes.
*/
#include <iostream>
using namespace std;
//A Node structure that can be used for both doubly linked list and Bianry tree.
struct Node
{
    int data;
    union
    {
        struct
        {
            Node *left, *right; //Binary Tree Node
        };
        struct
        {
            Node *prev, *next; //Doubly Linked list Node
        };
    };
};

int main(void)
{

    return 0;
}