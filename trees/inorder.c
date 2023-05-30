#include "trees.h"

void inorderTraversal(tree* root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    printf("%d ->", root->data);
    inorderTraversal(root->right);
}