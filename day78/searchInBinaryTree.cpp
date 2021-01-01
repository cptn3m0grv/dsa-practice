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

Node *insertNode(Node *root, int data){
    if(root==nullptr){
        return newNode(data);
    }
    
    if(root->data > data){
        root->left = insertNode(root->left, data);
    }else if(root->data < data){
        root->right = insertNode(root->right, data);
    }
    
    return root;
}

void searchNode(Node *root, int key, Node *parent){
    if(root==nullptr){
        cout << "Key not found!!!\n";
        return;
    }
    
    if(root->data == key){
        
        if(parent==nullptr){
            cout << key << " is the root node\n";
        }else if(parent->data > key){
            cout << key << " is the left child of node with data " << parent->data << "\n";
        }else if(parent->data < key){
            cout << key << " is the right child of node with data " << parent->data << "\n";
        }
        
        return;
    }
    
    if(key>root->data){
        return searchNode(root->right, key, root);
    }else{
        return searchNode(root->left, key, root);
    }
    
}

int main(){
    fastio;
    
    Node *root = nullptr;
    int keys[] = {15, 10, 20, 8, 12, 18, 25, 16, 17, 30};
    
    for(int key: keys){
        root = insertNode(root, key);
    }
    
    searchNode(root, 25, nullptr);
    
    return 0;
}