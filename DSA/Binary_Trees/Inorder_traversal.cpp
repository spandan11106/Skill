#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

class node {
public:
  int data;
  node *right;
  node *left;

  node(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

void Inorder(node *root) {
  if (root == NULL)
    return;

  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

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
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  Inorder(root);
  return 0;
}
