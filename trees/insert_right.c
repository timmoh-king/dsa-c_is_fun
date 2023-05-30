#include "trees.h"

tree* insertRight(tree* root, int value)
{
    root->right = createNode(value);
    return root->right;
}