// 15 Commit

#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node*leftchild;
    Node*rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class binarytree
{
    public:
    Node*root;

    binarytree()

    {
        root = nullptr; // Initializing root to null
    }

void insert()
{
    int x;
    cout << "Masukan nilai: ";
    cin >> x;

    // Step 1: Allocate memory for the new node
    Node*newnode = new Node();

    
}
};