#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->right = temp->left = nullptr;
    return temp;
}

int getDiameter(Node *root, int &d){
    if(root == nullptr){
        return 0;
    }
    
    int l = getDiameter(root->left, d);
    int r = getDiameter(root->right, d);
    
    int mXD = l+r+1;
    
    d = max(d, mXD);
    
    return (max(l, r)+1);
}

int getDiameter(Node *root){
    int d = 0;
    getDiameter(root, d);
    return d;
}

int main(){
    Node *root = newNode(1);
    root->right = newNode(2);
    root->right->left = newNode(3);
    root->right->right = newNode(4);
    root->right->left->left = newNode(5);
    root->right->left->right = newNode(6);
    root->right->right->right = newNode(7);
    
    cout << "Diameter of the Give Tree: " << getDiameter(root) << "\n";
    return 0;
}