#include "trees.h"

void postorderTraversal(tree* root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->data);
}