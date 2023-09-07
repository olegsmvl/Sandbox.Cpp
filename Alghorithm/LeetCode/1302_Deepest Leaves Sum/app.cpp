#include <iostream>
#include <queue>
#include <vector>

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
  auto root = new TreeNode(1);

  auto node2 = new TreeNode(2);
  auto node3 = new TreeNode(3);
  auto node4 = new TreeNode(4);
  auto node5 = new TreeNode(5);
  auto node6 = new TreeNode(6);
  auto node7 = new TreeNode(7);
  auto node8 = new TreeNode(8);

  root->left = node2;
  root->right = node3;

  node2->left = node4;
  node2->right = node5;

  node4->left = node7;

  node3->right = node6;
  node6->right = node8;

  return root;
}

class Solution {
public:
  int deepestLeavesSum(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);
    queue<TreeNode *> layer;

    if (!root->left && !root->right) {
      return root->val;
    }

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
      }

      if (!q.empty()) {
        layer = q;
      }
    }

    int sum = 0;

    while (!layer.empty()) {
      auto x = layer.front();
      sum += x->val;
      layer.pop();
    }

    return sum;
  }
};

int main() {
  auto root = CreateTree();

  Solution sol;

  int result = sol.deepestLeavesSum(root);

  cout << result << endl;

  return 0;
}
