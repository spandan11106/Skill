Follow the principal of `LNR`
- In this traversal, we move towards the left from the root till we hit null. Then we go to the node and print its data. Then we go to the right and follow the same procedure. 

- Recursive Implementation 
```cpp
void Inorder(node *root) {
  if (root == NULL)
    return;

  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}
```
Time Complexity - `O(n)`
Space Complexity :
       - Average Case - `O(h)`, where h is the binary tree height
       - Best Case - `O(log(n))`, if binary tree is complete
       - Worst Case - `O(n)`, if binary tree is skewed.


