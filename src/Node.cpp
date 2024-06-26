

// In binary trees every node has three part: value, right node and left node

class Node
{

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

