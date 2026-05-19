Follows `LRN`
We first move towards the left, then towards right and then we print the node.

- Recursive Implementation
```cpp
void Postorder(node *root) {
  if (root == NULL)
    return;

  Postorder(root->left);
  Postorder(root->right);
  cout << root->data << " ";
}
```
Time Complexity - `O(n)`
Space Complexity :
       - Average Case - `O(h)`, where h is the binary tree height
       - Best Case - `O(log(n))`, if binary tree is complete
       - Worst Case - `O(n)`, if binary tree is skewed.
