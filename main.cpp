#include "Tree.hpp"
#include "types.hpp"

int main()
{
    Tree<int> tree = Tree<int>();
    tree.insert(12);
    tree.insert(24);
    tree.insert(36);
    tree.insert(48);
    tree.insert(60);
    tree.inOrderTraversal();
    tree.remove(36);
    printf_s("\n");
    tree.inOrderTraversal();

    printf_s("\n");

    Tree<f32> floatTree = Tree<f32>();
    floatTree.insert(1.2);
    floatTree.insert(2.4);
    floatTree.insert(3.6);
    floatTree.insert(4.8);
    floatTree.insert(6.0);
    floatTree.inOrderTraversal();
    floatTree.remove(3.6);
    printf_s("\n");
    floatTree.inOrderTraversal();

    return 0;
}