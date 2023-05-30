#include "trees.h"

int main()
{
    tree* root = createNode(1);
    insertLeft(root, 12);
    insertRight(root, 9);

    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    printf("Inorder traversal:\n");
    inorderTraversal(root);

    printf("\nPreorder traversal:\n");
    preorderTraversal(root);

    printf("\nPostorder traversal:\n");
    postorderTraversal(root);
}