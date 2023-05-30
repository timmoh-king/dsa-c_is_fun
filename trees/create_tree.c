#include "trees.h"

tree* createNode(int value)
{
    tree* newNode = malloc(sizeof(tree));

    if (newNode == NULL)
        return (NULL);

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}