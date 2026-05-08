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

node *buildTree(node *root) {
  cout << "Enter the data: " << endl;
  int data;
  cin >> data;
  root = new node(data);

  if (data == -1) {
    return NULL;
  }

  cout << "Enter data for inserting in left of " << data << endl;
  root->left = buildTree(root->left);

  cout << "Enter data for insertiing in right of " << data << endl;
  root->right = buildTree(root->right);

  return root;
}

int main() {
  node *root = NULL;
  return 0;
}
