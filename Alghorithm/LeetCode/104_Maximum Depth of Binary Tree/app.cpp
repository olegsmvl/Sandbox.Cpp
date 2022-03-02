#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution
{
public:
    int maxDepth(TreeNode* root)
    {
        if (root == nullptr)
            return 0;

        int leftDepth = maxDepth(root -> left);
        int rightDepth = maxDepth(root -> right);
        return max(leftDepth, rightDepth) + 1;
    }
};

TreeNode* CreateTree(){
    auto root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    return root;
}

int main()
{
    auto root = CreateTree();
    Solution sl;
    auto result = sl.maxDepth(root);

    cout << result;
    cout << endl;
    return 0;
}
