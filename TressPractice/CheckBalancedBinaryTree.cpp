#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int lengthOfTree(struct Node* root){
    if(root == NULL)
        return 0;
    return 1 + max(lengthOfTree(root->left), lengthOfTree(root->right));
}

bool isBalancedBinaryTree(struct Node* root) {
    if(root == NULL)
        return true;
    
    if(root->left == NULL && root->right == NULL)
        return true;

    int height1 = lengthOfTree(root->left);
    int height2 = lengthOfTree(root->right);
    int diff = abs(height1 - height2);
    if(diff > 1)
        return false;
    return isBalancedBinaryTree(root->left) && isBalancedBinaryTree(root->right);

}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);
    if(isBalancedBinaryTree(root)) 
        cout << "The tree is balanced binary tree" << endl;
    else
        cout << "The tree is not balanced binary tree" << endl;
    return 0;
}