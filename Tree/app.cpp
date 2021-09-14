#include<iostream>
using namespace std;

//https://prog-cpp.ru/data-tree/
//https://acm.bsu.by/wiki/%D0%9F%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%BD%D0%B0%D1%8F_%D1%80%D0%B5%D0%B0%D0%BB%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F_%D0%B1%D0%B8%D0%BD%D0%B0%D1%80%D0%BD%D1%8B%D1%85_%D0%BF%D0%BE%D0%B8%D1%81%D0%BA%D0%BE%D0%B2%D1%8B%D1%85_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D1%8C%D0%B5%D0%B2 - insert node

struct tnode
{
    int field;
    tnode *left;
    tnode *right;
    tnode(int _field){
        field = _field;
        left = nullptr;
        right = nullptr;
    }
};

void tree_print_pre(tnode *tree){
    if (tree!=nullptr){
        cout <<" "<< tree->field;
        tree_print_pre(tree->left);
        tree_print_pre(tree->right);
    }
}

void tree_print_in(tnode *tree){
    if (tree!=nullptr){
        tree_print_in(tree->left);
        cout << tree->field << " ";
        tree_print_in(tree->right);
    }
}

void tree_print_post(tnode *tree){
    if (tree!=nullptr){
        tree_print_post(tree->left);
        tree_print_post(tree->right);
        cout << tree->field << " ";
    }
}

tnode create_tree(){
    auto root = tnode(1);
    root.left = new tnode(2);
    root.right = new tnode(3);
    root.left->left = new tnode(4);
    root.left->left->left = new tnode(8);
    root.left->left->right = new tnode(9);
    root.left->right = new tnode(5);
    root.left->right->left = new tnode(10);
    root.left->right->right = new tnode(11);
    root.right->left = new tnode(6);
    root.right->left->left = new tnode(12);
    root.right->left->right = new tnode(13);
    root.right->right = new tnode(7);
    root.right->right->left = new tnode(14);
    root.right->right->right = new tnode(15);

    return root;
}

void insert(tnode *node){
    if (node->left == nullptr)
        node->left = new tnode((node->field)+=1);
    if (node->right == nullptr)
        node->right = new tnode((node->field)+=2);
}

void tree_print_layer1(tnode *root){
    cout << root->field << " "<< endl;
}

void tree_print_layer2(tnode *root){
    cout << root->left->field << " "<< endl;
    cout << root->right->field << " "<< endl;
}

int main(int argc, char const *argv[])
{
    auto tree = create_tree();
    tree_print_pre(&tree);
    // tree_print_in(&tree);
    //tree_print_post(&tree);
    //tree_print_layer(&tree);
    return 0;
}
