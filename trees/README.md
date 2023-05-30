### Inorder travesal
1. First, visit all the nodes in the left subtree
2. Then the root node
3. Visit all the nodes in the right subtree
```
inorder(root->left)
display(root->data)
inorder(root->right)
```

### Preorder travesal
1. Visit root node
2. Visit all the nodes in the left subtree
3. Visit all the nodes in the right subtree
```
display(root->data)
preorder(root->left)
preorder(root->right)
```

### Postorder travesal
1. Visit all the nodes in the left subtree
2. Visit all the nodes in the right subtree
3. Visit the root node
```
postorder(root->left)
postorder(root->right)
display(root->data)
```
