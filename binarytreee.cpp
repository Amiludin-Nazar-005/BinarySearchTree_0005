#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *leftchild;
    node *rightchild;

    node()
    {
        leftchild = nullptr;
        rightchild = nullptr;
    }
};

class BinaryTree {
    public:
    node *ROOT;

    BinaryTree (){
        ROOT = nullptr;
    }


}