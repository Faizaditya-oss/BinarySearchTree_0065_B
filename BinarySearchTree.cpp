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

    // Step 2 : Asign value to the data field of the new node
    newnode->info = x;

    // Step 3: Make the left and right child of the new node point to NULL
    newnode->leftchild = nullptr;
    newnode->rightchild = nullptr;

   // Step 4: Locate the node which will be the parent of the new node to be inserted
   Node *parent = nullptr;
   Node* currentnode = nullptr;
   Search(x, parent, currentnode);
}
};