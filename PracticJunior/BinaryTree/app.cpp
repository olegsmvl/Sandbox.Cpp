#include <iostream>
#include <string>
using namespace std;

class TNode
{
public:
    int key;
    TNode *left = nullptr;
    TNode *right = nullptr;

    TNode(int _key) : key(_key){};
};

class Tree
{
public:
    Tree(){};
    ~Tree()
    {
        DestroyNode(root);
    };

    TNode *root = nullptr;

    void Insert(TNode *newNode)
    {
        TNode *y = nullptr;
        TNode *x = root;

        while (x != nullptr)
        {
            y = x;
            if (newNode->key < x->key)
                x = x->left;
            else
                x = x->right;
        }

        if (root == nullptr)
            root = newNode;
        else if (newNode->key < y->key)
        {
            y->left = newNode;
        }
        else
            y->right = newNode;
    }

    void PrintTree()
    {
        Print(root);
    }

    TNode *SearchRecursively(TNode *node, int _key)
    {
        if (node == nullptr || _key == node->key)
            return node;
        if (_key < node->key)
            return SearchRecursively(node->left, _key);
        else
            return SearchRecursively(node->right, _key);
    }

private:
    static void DestroyNode(TNode *node)
    {
        if (node)
        {
            DestroyNode(node->left);
            DestroyNode(node->right);
            delete node;
        }
    }

    void Print(TNode *node)
    {
        if (node)
        {
            Print(node->left);
            Print(node->right);
            cout << node->key << " ";
        }
    }
};

int main(int argc, char const *argv[])
{
    cout << "start" << endl;
    auto tree = new Tree();

    tree->Insert(new TNode(5));
    tree->Insert(new TNode(3));
    tree->Insert(new TNode(7));

    tree->PrintTree();

    auto result = tree->SearchRecursively(tree->root, 3);

    cout << endl;
    if (result)
        cout << result->key << endl;
    else
        cout << "not found" << endl;

    return 0;
}
