#pragma once

#include <vector>
#define null -100

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

TreeNode *CreateTree() {
  auto root = new TreeNode(3);
  root->right = new TreeNode(9);

  auto node20 = new TreeNode(20);
  auto node7 = new TreeNode(7);
  root->right = node20;
  node20->right = node7;

  auto node28 = new TreeNode(20);
  node7->right = node28;

  return root;
}

TreeNode *CreateTree(vector<int> nodes) {
  vector<vector<int>> tree;

  int start = 0;

  int len = nodes.size();
  cout << "len: " << len << " ";
  int layer_len = 1;
  cout << "layer_len: " << layer_len << " " << endl;
  vector<int> layer;

  /* to vector vector layers*/
  while (start + layer_len <= len) {

    cout << "start: " << start << " " << endl;
    cout << "layer_len: " << layer_len << " " << endl;

    for (int i = 0; i < layer_len; i++) {
      layer.push_back(nodes[start + i]);
    }
    start += layer_len;
    layer_len *= 2;
    tree.push_back(layer);
  }

  for (auto layer : tree) {
    for (int x : layer) {
      cout << x << " ";
    }
  }
  cout << endl;

  /* to tree*/
  TreeNode *root = nullptr;

  int layers_num = tree.size();

  /* by each layer*/
  for (int i = 0; i < layers_num - 1; i++) {
    vector<int> parents = tree[i];
    vector<int> children = tree[i + 1];

    int i_child = 0;

    for (int p : parents) {
      TreeNode *node = new TreeNode(p);
      int l_child = children[i_child];
      int r_child = children[i_child + 1];

      if (l_child != null) {
        node->left = new TreeNode(children[l_child]);
      } else {
        node->left = nullptr;
      }

      if (r_child != null) {
        node->right = new TreeNode(children[r_child]);
      } else {
        node->right = nullptr;
      }

      if (i == 0) {
        root = node;
      }

      i_child += 2;
    }
  }

  return root;
}
