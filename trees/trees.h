#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node tree;

void inorderTraversal(tree* root);
void preorderTraversal(tree* root);
void postorderTraversal(tree* root);
tree* createNode(int value);
tree* insertLeft(tree* root, int value);
tree* insertRight(tree* root, int value);

#endif