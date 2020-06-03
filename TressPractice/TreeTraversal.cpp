// Inorder, preorder and postorder
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

void preorder(struct Node* root) {
    if(root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root) {
    if(root == NULL) 
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(struct Node* root) {
    if(root == NULL) 
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder Traversal : ";
    inorder(root);

    cout << "\nPreorder Traversal : ";
    preorder(root);

    cout << "\nPostorder Traversal : ";
    postorder(root);
    cout << endl;
    
    return 0;
}