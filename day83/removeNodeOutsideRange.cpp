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

Node *insert(Node *root, int key){
    if(root==nullptr){
        return newNode(key);
    }
    
    if(key > root->data){
        root->right = insert(root->right, key);
    }else if(key < root->data){
        root->left = insert(root->left, key);
    }
    
    return root;
}

void inorder(Node *root){
    if(root==nullptr){
        return;
    }
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *truncate(Node *root, int min, int max){
    if(root==nullptr){
        return root;
    }
    
    
    root->left = truncate(root->left, min, max);
    root->right = truncate(root->right, min, max);
    
    Node *curr = root;
    
    if(root->data < min){
        root = root->right; 
        delete curr;
    }else if(root->data > max){
        root = root->left;
        delete curr;
    }
    
    return root;
}

int main(){
    fastio;
    
    int keys[] = {15, 10, 20, 8, 12, 18, 25};
    Node *root = nullptr;
    int mNm = 9, mXm = 12;
    
    for(int key: keys){
        root = insert(root, key);
    }
    
    cout << "Before Truncation: ";
    inorder(root);
    cout << "\n";
    
    root = truncate(root, mNm, mXm);
    cout << "After Truncation: ";
    inorder(root);
    cout << "\n";
    
    return 0;
}