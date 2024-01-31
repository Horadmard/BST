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