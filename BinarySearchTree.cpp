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
   search(x, parent, currentnode);

   // Step 5: If parent is NULL (tree is empty)
   if (parent == nullptr)
   {
    // 5a: Mark the new node as root
    root = newnode;

    // 5b: exit
    return;
   }

   // Step 6: If the value in the data fiel of new mode is less then that parent
   if (x < parent ->info)
   {
    // 6a: Make the left child or parent point to thr new node
    parent->leftchild = newnode;

    // 6b: Exit
    return;
   }

   // Step 7: If the value in the data field id greater than that of the parent
   else if (x > parent->info)
   {
     // 7a: Make the right child of parent point to the new node
        parent->rightchild = newnode;

    // 7b: exit
       return;
   }
}

void search(int element, Node *&parent, Node *&currentnode)
{
  // This function searches the currentnode of the specified node as well as the currentnode of its parent
  currentnode = root;
  parent = nullptr;
  while ((currentnode != nullptr) && (currentnode->info !=element))
  {
    parent = currentnode;
    if (element < currentnode->info)
       currentnode = currentnode->leftchild;
    else
    currentnode = currentnode->rightchild;
  }
}


bool isEmpty()
{
    // Checks if the tree is empty
     return root == nullptr;
}

void inorder (Node *ptr)
{
    if(isEmpty())
    {
        cout << " Tree is empty " << endl;
        return;
    }
    if(ptr == nullptr)
    return;

    inorder (ptr->leftchild);
    cout << ptr->info << " "; // Parent
    inorder (ptr->rightchild);
}

void preorder(Node *ptr)
{
    if(isEmpty())
    {
        cout << " Tree is empty " << endl;
        return;
    }
    if (ptr == nullptr)
    return;
    
    preorder (ptr->leftchild);
    cout << ptr->info << " "; // Parent
    preorder (ptr->rightchild);
}

void postorder (Node *ptr)
{
    if(isEmpty())
    {
        cout << " Tree is empty " << endl;
        return;
    }
    if (ptr == nullptr)
    return;
    
    postorder (ptr->leftchild);
    cout << ptr->info << " "; // Parent
    postorder (ptr->rightchild);
}


};

int main()
{
    binarytree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.root);
            break;
        }
        case '3':
        {

            x.preorder(x.root);
            break;
        }
        case '4':
        {

            x.postorder(x.root);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
      }
    }
}