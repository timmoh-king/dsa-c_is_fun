#include "trees.h"

void preorderTraversal(tree* root)
{
    if (root == NULL)
        return;

    printf("%d ->", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}