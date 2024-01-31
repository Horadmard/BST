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
        value = -9999;
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
    void Create_tree(double &val){
        root = new Node(val);
        return;
    }
    void Insert_node(double &val){
        Node* nav = root;

        if(nav == nullptr)
            Create_tree(val);
        else{
            while(nav != nullptr)
                if(val >= nav->value)
                    nav = nav->right
                else
                    nav = nav->left
        }
        new_node = new Node(val);
        delete nav;
    }
};

int main()
{
    Tree a1;
    return 0;
}