#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->right = temp->left = nullptr;
    return temp;
}

Node *insert(Node *root, int data){
    if(root==nullptr){
        return newNode(data);
    }
    
    if(root->data < data){
        root->right = insert(root->right, data);
    }else if(root->data > data){
        root->left = insert(root->left, data);
    }
    
    return root;
}

bool search(Node *root, int data){
    while(root){
        if(data > root->data){
            root = root->right;
        }else if(data < root->data){
            root = root->left;
        }else{
            return true;
        }
    }
    return false;
}

Node *LCA(Node *root, int x, int y){
    if(root==nullptr || !search(root, x) || !search(root, y)){
        return nullptr;
    }
    
    Node *curr = root;
    
    while(curr){
        if(curr->data > max(x, y)){
            curr = curr->left;
        }else if(curr->data < min(x, y)){
            curr = curr->right;
        }else{
            return curr;
        }
    }
    
}

int main(){
    int keys[] = {15, 10, 25, 8, 12, 20, 30, 6, 9, 18, 22};
    Node *root = nullptr;
    
    for(int key: keys){
        root = insert(root, key);
    }
    
    Node *lca = LCA(root, 6, 9);
    
    if(lca != nullptr){
        cout << "LCA is: " << lca->data << "\n";
    }else{
        cout << "LCA doesn't exist.\n";
    }
    
    return 0;
}