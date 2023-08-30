#include <iostream>
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

int min_lenght(TreeNode *node) {
  if (node == nullptr) {
    return 0;
  }

  if (node->left == nullptr && node->right == nullptr) {
    return 1;
  }

  int left = min_lenght(node->left);
  int right = min_lenght(node->right);

  if (left == 0 && right != 0) {
    return right + 1;
  }

  if (left != 0 && right == 0) {
    return left + 1;
  }

  return 1 + min(left, right);
}

int main() {
  auto tree = CreateTree();

  int result = min_lenght(tree);

  cout << result << endl;

  return 0;
}
