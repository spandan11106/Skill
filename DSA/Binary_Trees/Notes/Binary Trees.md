### What are trees ??
- Non Linear Data Structure. One node can be connected to multiple nodes.
- Basic terms:
    - A element of a tree is called a node
    - The node where the tree starts is the root node
    - In binary trees, each node can have up-to 2 children
    - Nodes having the same parent are siblings 
    - All nodes above a particular node are its ancestors. Same logic but in the opposite direction applies for decedents.
    - A node which has no children is called a leaf node.

```cpp 
class binary_tree_node {
   int data;
   node* left;
   node* right;
}
```


- Build code recursive implementation
```cpp
node *buildTree(node *root) {
  cout << "Enter the data: " << endl;
  int data;
  cin >> data;
  root = new node(data);

  if (data == -1) {
    return NULL;
  }

  cout << "Enter data for insertiing in left of " << data << endl;
  root->left = buildTree(root->left);

  cout << "Enter data for insertiing in right of " << data << endl;
  root->right = buildTree(root->right);

  return root;
}

int main() {
  node *root = NULL;
  root = buildTree(root);
  return 0;
}
```





















































[[Level Order Traversal]][[Inorder Traversal]][[Preorder Traversal]][[Postorder Traversal]]
