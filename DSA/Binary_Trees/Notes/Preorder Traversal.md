Follows the principal `NLR`
It prints the data of the node as it move towards the left and then comes back to do the same for the right side.

- Recursive Implementation
```cpp
void PreOrder(node *root) {
  if (root == NULL)
    return;

  cout << root->data << " ";
  PreOrder(root->left);
  PreOrder(root->right);
}
```
Time Complexity - `O(n)`
Space Complexity :
       - Average Case - `O(h)`, where h is the binary tree height
       - Best Case - `O(log(n))`, if binary tree is complete
       - Worst Case - `O(n)`, if binary tree is skewed.

