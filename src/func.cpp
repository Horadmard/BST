

#include <iostream>
using namespace std;


void Tree::Insert_node(double val)
{

    Node *nav = root;
    Node *pre;

    if (root == nullptr) root = new Node(val);
    else
    {
        while (nav != nullptr)
        {
            pre = nav;

            if (val >= nav->value) nav = nav->right;
            else nav = nav->left;
        }

        Node *new_node = new Node(val);

        if (val >= pre->value) pre->right = new_node;
        else pre->left = new_node;
    }

    delete nav, pre;

    return;
}



bool Binary_Search(Tree T, double val)
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
            cout << endl
                 << val << "\nFound!\n";
            cout << "----------\n";

            return 1;
        }

        else if (val > nav->value) nav = nav->right;

        else nav = nav->left;

    }
    cout << endl
         << val << "\nNot found!\n";
    cout << "----------\n";

    delete nav;

    return 0;

}

