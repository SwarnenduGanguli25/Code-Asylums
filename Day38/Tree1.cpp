#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
        Node* left;
        Node* right;
        int data;

        Node(int d) {
            data = d;
            left = right = NULL;
        }
};

Node* buildTree() {
    int d;
    cin >> d;
    if(d == -1)
        return NULL;
    Node* root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preOrder(Node* root) {
    if(root == NULL)
        return;
    cout << root->data << ",";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if(root == NULL)
        return;
    
    inOrder(root->left);
    cout << root->data << ",";
    inOrder(root->right);
}

int countNumberOfNodes(Node* root) {
    if(root == NULL) 
        return 0;
    return 1 + countNumberOfNodes(root->left) + countNumberOfNodes(root->right);
}

int height(Node* root) {
    if(root == NULL) 
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

void levelOrderTraversal(Node* root) {
    if(root == NULL) 
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* front = q.front();
        cout << front->data << ",";
        q.pop();
        if(front->left != NULL) {
            q.push(front->left);
        }
        if(front->right != NULL) {
            q.push(front->right);
        }
    }
}

int replaceNodeWithSum(Node* root) {
    if(root == NULL)
        return 0;
    int leftSum = replaceNodeWithSum(root->left);
    int rightSum = replaceNodeWithSum(root->right);
    return root->data += leftSum + rightSum;
}

void leftview(Node* root) {
    if(root == NULL)
        return;
    
}

void leftview(Node* root, int level, int &max_level) {
    if(root == NULL)
        return;
    if(level > max_level) {
        cout << root->data << " ";
        max_level = level;
    }
    leftview(root->left, level + 1, max_level);
    leftview(root->right, level + 1, max_level);
}

void rightview(Node* root, int level, int &max_level) {
    if(root == NULL)
        return;
    if(level > max_level) {
        cout << root->data << " ";
        max_level = level;
    }
    rightview(root->right, level + 1, max_level);
    rightview(root->left, level + 1, max_level);
}

void distinctLevel(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* front = q.front();
        q.pop();
        if(front != NULL) {
            //cout << front->data << " "; //[For Left View]
            while(front != NULL) {
                cout << front->data << " ";
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                front = q.front();
                q.pop();
            }
            cout << endl;
            q.push(NULL); // present level is completely traversed
        }
    } 
}


void zigzagtraversal(Node* root) {
    stack<Node*> currLevel, nextLevel;
    bool leftToRight = true;
    currLevel.push(root);
    while(!currLevel.empty() || !nextLevel.empty()) {
        Node* top = currLevel.top();
        cout << top->data << " ";
        if(leftToRight == true) {
            if(top->left) 
                nextLevel.push(top->left);
            if(top->right)
                nextLevel.push(top->right);
        }
        else {
            if(top->right)
                nextLevel.push(top->right);
            if(top->left)
                nextLevel.push(top->left);
        }
        if(currLevel.empty() == true) {
            leftToRight = !leftToRight;
        }
    }
}


int main() {
    Node* root = buildTree();
    int maxLevel = 0;
    leftview(root, 1, maxLevel);
    cout << endl;
    maxLevel = 0;
    rightview(root, 1, maxLevel);
    cout << endl;
    distinctLevel(root);
    cout << endl;
    zigzagtraversal(root);
    // preOrder(root);
    // cout << "\nCount : " << countNumberOfNodes(root) << endl;
    // cout << "Height : " << height(root) << endl;
    // replaceNodeWithSum(root);
    // levelOrderTraversal(root);
    return 0;
}