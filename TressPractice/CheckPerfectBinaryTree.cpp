#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

bool isPerfectBinaryTree(struct Node* root) {
    if(root == NULL)
        return true;
    if(root->left == NULL && root->right == NULL)
        return true;
    if(root->left && root->right)
        return isPerfectBinaryTree(root->left) && isPerfectBinaryTree(root->right);
    else
    {
        return false;
    }
    
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);
    if(isPerfectBinaryTree(root)){
        cout << "The tree is perfect binary tree" << endl;
    }
    else
    {
        cout << "The tree is not perfect binary tree" << endl;
    }
    return 0;
}