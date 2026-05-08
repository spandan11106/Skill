- Uses a queue of nodes. We use `NULL` for the break in line when we go to another level.
```cpp
void levelOrderTraversal(node *root) {
  queue<node *> q;
  q.push(root);
  q.push(NULL);  // For change in level 

  while (!q.empty()) {
    node *temp = q.front();
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty())
        q.push(NULL);
    } else {
      cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }

      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

