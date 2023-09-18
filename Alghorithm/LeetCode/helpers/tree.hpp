#pragma once

#include <iostream>
#include <queue>
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
  vector<vector<TreeNode *>> tree;

  int start = 0;

  int len = nodes.size();
  int layer_len = 1;

  /* to vector (vector nodes pointers) layers */
  while (start + 1 <= len) {
    vector<TreeNode *> layer;

    for (int i = 0; i < layer_len; i++) {
      TreeNode *node = nullptr;

      int val = null;

      if ((start + i) < len) {
        val = nodes[start + i];
      }

      if (val != null) {
        node = new TreeNode(val);
      }
      layer.push_back(node);
    }
    start += layer_len;
    layer_len *= 2;
    tree.push_back(layer);
  }

  /* to tree*/
  TreeNode *root = nullptr;

  int layers_num = tree.size();

  /* by each layer*/
  for (int i = 0; i < layers_num - 1; i++) {
    vector<TreeNode *> parents = tree[i];
    vector<TreeNode *> children = tree[i + 1];

    int i_child = 0;

    for (TreeNode *p : parents) {

      TreeNode *l_child = children[i_child];
      TreeNode *r_child = children[i_child + 1];

      if (p != nullptr) {
        p->left = l_child;
        p->right = r_child;
      }

      if (i == 0) {
        root = p;
      }

      i_child += 2;
    }
  }

  return root;
}

void print_tree(TreeNode *root) {
  queue<TreeNode *> q;
  q.push(root);

  while (!q.empty()) {
    int len = q.size();
    for (int i = 0; i < len; i++) {
      auto node = q.front();
      q.pop();

      if (node->left) {
        q.push(node->left);
      }

      if (node->right) {
        q.push(node->right);
      }

      cout << node->val << " ";
    }
    cout << endl;
  }
}

void print_traversal_in(TreeNode *root) {
  if (!root) {
    return;
  }
  print_traversal_in(root->left);
  cout << root->val << " ";
  print_traversal_in(root->right);
  return;
}
