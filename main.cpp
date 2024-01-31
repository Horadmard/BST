#include "Node.cpp"
#include "Binary_Tree.cpp"
#include "func.cpp"
#include <iostream>
using namespace std;

int main()
{
    Tree T1;

    for (size_t i = 0; i < 5; i++)
        T1.Insert_node(i - 1);

    cout << Search_tree(T1, 3);
    return 0;
}