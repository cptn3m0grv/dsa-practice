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
    temp->left = temp->right = NULL;
    return temp;
}

void countNode(Node *root, int low, int high, int &count){
    if(root==NULL){
        return;
    }

    if(root->data>=low && root->data<=high){
        ++count;
    }    
    countNode(root->left, low, high, count);
    countNode(root->right, low, high, count);
}

int countNodesInRange(Node *root, int low, int high){
    int count = 0;
    
    countNode(root, low, high, count);
    
    return count;
}

int main(){
    fastio;
    
    Node *root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->left = newNode(21);
    root->right->right = newNode(26);
    
    int low = 5, high = 25;
    cout << countNodesInRange(root, low, high) << "\n";
    
    return 0;
}
