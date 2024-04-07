

#include "Node.cpp"
#include "Binary_Tree.cpp"
#include "func.cpp"

using namespace std;


int main()
{
    Tree T1;

    for (size_t i = 0; i < 1000; i++)
        T1.Insert_node(i);

    Binary_Search(T1, 500);
    Binary_Search(T1, 1500);

    return 0;
}


