#include <bits/stdc++.h>
using namespace std;

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

void levelOrderTraversal(Node *root){
    list<Node*> Q;
    Q.push_back(root);
    
    Node *curr = nullptr;
    
    while(Q.size()){
        curr = Q.front();
        Q.pop_front();
        
        cout << curr->data << " ";
        
        if(curr->left){
            Q.push_back(curr->left);
        }
        
        if(curr->right){
            Q.push_back(curr->right);
        }
    }
}

int main(){
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    
    levelOrderTraversal(root);
    
    return 0;
}