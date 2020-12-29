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

bool isSibling(struct Node *root, struct Node *a, struct Node *b){
    if(root==NULL)
        return false;
        
    return((root->left==a && root->right==b)||(root->right==a && root->left==b)||isSibling(root->left, a, b)||isSibling(root->right, a, b));
}

int level(struct Node *root, struct Node *node, int levl){
    if(root==NULL) return 0;
    if(root==node) return levl;
    
    int lvl = level(root->left, node, levl+1);
    if(lvl!=0) return lvl;
    
    return level(root->right, node, levl+1);
}

bool isCousin(struct Node *root, struct Node *a, struct Node *b){
    return ((level(root, a, 1)==level(root, b, 1)) && !isSibling(root, a, b));
}

int main(){
    fastio;
    
    Node *root = newNode(6);
    root->left = newNode(3);
    root->right = newNode(5);
    root->left->left = newNode(7);
    root->left->right = newNode(8);
    root->right->left = newNode(1);
    root->right->right = newNode(3);
    
    if(isCousin(root, root->left->left, root->right)){
        cout << root->left->left->data << " and " << root->right->data << " are cousins.";
    }else{
        cout << root->left->left->data << " and " << root->right->data << " are not cousins.";
    }
    
    return 0;
}