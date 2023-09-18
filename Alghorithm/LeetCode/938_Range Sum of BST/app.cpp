#include "../helpers/tree.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int rangeSumBST(TreeNode *node, int low, int high) {

    if (!node) {
      return 0;
    }

    int ans = 0;

    if (low <= node->val && node->val <= high) {
      ans += node->val;
    }

    if (low <= node->val) {
      ans += rangeSumBST(node->left, low, high);
    }

    if (node->val <= high) {
      ans += rangeSumBST(node->right, low, high);
    }

    return ans;
  }

  int sum = 0;
};

int main() {

  auto tree = CreateTree({10, 5, 15, 3, 7, null, 18});

  Solution sol;

  print_tree(tree);

  int result = sol.rangeSumBST(tree, 7, 15);

  cout << result << endl;

  return 0;
}
