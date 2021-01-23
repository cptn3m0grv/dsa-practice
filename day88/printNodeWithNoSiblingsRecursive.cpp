#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printSingles(Node *root){
    if(root == NULL){
        return;
    }
    
    if(root->right != NULL && root->left!=NULL){
        printSingles(root->left);
        printSingles(root->right);
    }else if(root->right != NULL){
        cout << root->right->data << " ";
        printSingles(root->right);
    }else if(root->left != NULL){
        cout << root->left->data << " ";
        printSingles(root->left);
    }
    
}

int main(){
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->left->left = newNode(6);
    
    printSingles(root);
    
    return 0;
}
