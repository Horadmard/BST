

// A BTree is a pointer to the root

class Tree
{

public:

    Node *root;
    
    Tree(){root = nullptr;}

    Tree(double val){root = new Node(val);}

    void Insert_node(double val);
};

