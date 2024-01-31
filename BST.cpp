using namespace std;

class Node
{

    // private:
public:
    double value;
    Node *right;
    Node *left;
    Node()
    {
        value = -9999;
        right = nullptr;
        left = nullptr;
    }
    Node(double val)
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
    // private:
public:
    Node *root;
    Tree()
    {
        root = nullptr;
    }
    Tree(double val)
    {
        root = new Node(val);
    }

    void Insert_node(double val)
    {
        Node *nav = root;
        Node *pre;

        if (root == nullptr)
        {
            root = new Node(val);
        }
        else
        {
            while (nav != nullptr)
            {
                pre = nav;
                if (val >= nav->value)
                    nav = nav->right;
                else
                    nav = nav->left;
            }

            Node *new_node = new Node(val);
            if (val >= pre->value)
                pre->right = new_node;
            else
                pre->left = new_node;
        }
        delete nav, pre;
        return;
    }
};

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