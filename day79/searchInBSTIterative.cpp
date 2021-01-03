#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *right, *left;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = nullptr;
    return temp;
}

Node *insertNode(Node *root, int data){
    if(root == nullptr){
        return newNode(data);
    }
    
    if(data < root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
 
    return root;
}

void searchNode(Node *root, int key){
    Node *curr = root;
    Node *parent = nullptr;
    
    while(curr!=nullptr && curr->data!=key){
        parent = curr;
        
        if(key<curr->data){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }
    
    if (curr == nullptr)
    {
        cout << "Key Not found";
        return;
    }
 
    if (parent == nullptr)
        cout << "The node with key " << key << " is root node";
 
    else if (key < parent->data)
        cout << "Given key is left node of node with key " << parent->data;
 
    else
        cout << "Given key is right node of node with key " << parent->data;
}

int main(){
    fastio;
    
    Node *root = nullptr;
    int keys[] = {15, 10, 20, 8, 12, 18, 25, 16, 17, 30};
    
    for(int key: keys){
        root = insertNode(root, key);
    }
    
    searchNode(root, 25);
    
    return 0;
}