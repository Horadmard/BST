// In binary trees every node has three part: value, right node and left node
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
    void Insert_node(double val);
};