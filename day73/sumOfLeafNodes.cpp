#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    struct Node *right, *left;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void sumOfLeafNodes(Node *node,int &sum){
    if(!node){
        return;
    }
    
    if(!node->left && !node->right){
        sum+=node->data;
    }
    
    sumOfLeafNodes(node->left, sum);
    sumOfLeafNodes(node->right, sum);
}

int main(){
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    
    int sum = 0;
    
    cout << "The sum of all leaf nodes: ";
    sumOfLeafNodes(root, sum);
    cout << sum << "\n";
    
    return 0;
    
}