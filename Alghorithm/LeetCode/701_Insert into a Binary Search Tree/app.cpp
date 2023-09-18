#include "../helpers/tree.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  TreeNode *insertIntoBST(TreeNode *root, int val) {
    if (!root){
        return new TreeNode(val);
    }

    traversal(root, val);

    return root;
  }

  void traversal(TreeNode *root, int val) {
    if (!root) {
      return;
    }

    if (val > root->val) {
      if (root->right) {
        traversal(root->right, val);
      } else {
        root->right = new TreeNode(val);
      }
    }

    if (val < root->val) {
      if (root->left) {
        traversal(root->left, val);
      } else {
        root->left = new TreeNode(val);
      }
    }
    return;
  }
};

int main() {

  Solution sol;
  auto root = CreateTree({4, 2, 7, 1, 3});
  print_tree(root);
  auto new_tree = sol.insertIntoBST(root, 5);
  print_traversal_in(new_tree);
  return 0;
}
