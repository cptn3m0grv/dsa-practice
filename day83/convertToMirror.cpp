#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
}

void preOrder(Node *root){
    if(root==nullptr){
        return;
    }
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void convertToMirror(Node *root){
    if(root==nullptr){
        return;
    }
    
    convertToMirror(root->left);
    convertToMirror(root->right);
    
    swap(root->left, root->right);
}

int main(){
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    
    cout << "Before Conversion: ";
    preOrder(root);
    
    convertToMirror(root);
    
    cout << "\nAfter Conversion: ";
    preOrder(root);
}