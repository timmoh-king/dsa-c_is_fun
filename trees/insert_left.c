#include "trees.h"

tree* insertLeft(tree* root, int value)
{
    root->left = createNode(value);
    return root->left;
}