#include "Node.cpp"
#include "Tree.cpp"
#include <iostream>

using namespace std;

bool Search_tree(Tree T, double val);

int main()
{
    Tree T1;

    for (size_t i = 0; i < 5; i++)
        T1.Insert_node(i - 1);

    cout << Search_tree(T1, 3);
    return 0;
}

// In binary trees every node has three part: value, right node and left node
bool Search_tree(Tree T, double val)
{
    Node *nav = T.root;

    if (nav == nullptr)
    {
        cout << "\nTree is empty\n";
        return 0;
    }

    while (nav != nullptr)
    {
        if (nav->value == val)
        {
            cout << "\nfounded!\n";
            return 1;
        }
        else if (val > nav->value)
            nav = nav->right;
        else
            nav = nav->left;
    }
    cout << "\nnot found!\n";
    return 0;

    delete nav;
}