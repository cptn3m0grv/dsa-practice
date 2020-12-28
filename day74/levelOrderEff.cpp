#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int height(Node *root){
    if(root==NULL){
        return 0;
    }
        
    int lheight = height(root->left);
    int rheight = height(root->right);
    
    return ((lheight<=rheight) ? (rheight+1) : (lheight+1));
}

void printGivenLevel(Node *root, int level){
    if(root==NULL){
        return;
    }
    
    if(level==1){
        cout << root->data << " ";
    }else if(level > 1){
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

void printLevelOrder(Node *root){
    int h = height(root);
    
    for(int i = 1; i<=h; ++i){
        printGivenLevel(root, i);
    }
}

int main(){
    
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    printLevelOrder(root);
    
    return 0;
}