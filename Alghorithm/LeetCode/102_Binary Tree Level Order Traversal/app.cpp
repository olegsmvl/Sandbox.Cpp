#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> answer;
        queue<TreeNode *> q;

        if (root == nullptr)
            return {};

        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            vector<int> v;
            while (size > 0)
            {
                TreeNode *temp = q.front();
                q.pop();
                v.push_back(temp->val);
                
                if (temp->left)
                    q.push(temp->left);
                
                if (temp->right)
                    q.push(temp->right);
                
                size--;
            }
            answer.push_back(v);
        }

        return answer;
    }
};

TreeNode *CreateTree()
{
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
    auto result = sl.levelOrder(root);

    for (auto x : result)
    {
        for (auto val : x)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
