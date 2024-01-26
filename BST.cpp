#include <iostream>
using namespace std;

// In binary trees every node has three part: value, right node and left node
class Node
{

private:
    double value;
    Node *right;
    Node *left;

public:
    Node()
    {
        value = 0;
        right = nullptr;
        left = nullptr;
    }
    Node(double &val)
    {
        value = val;
        right = nullptr;
        left = nullptr;
    }

    friend class Tree;
};

// Every tree defines by it's root if we have a root we can navigate all nodes
class Tree
{
private:
    Node *root;

public:
    Tree()
    {
        root = nullptr;
    }
    ~Tree()
    {
        delete root->right;
        delete root->left;
    }
    void create_tree()
    {
        root = new Node;
        root->right = nullptr;
        root->left = nullptr;
    }
};

int main()
{
    Tree a1;
    return 0;
}