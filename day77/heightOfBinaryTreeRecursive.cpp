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

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    
    return 1+max(height(root->left), height(root->right));
}

int main(){
    fastio;
    Node *root = newNode(15);
    root->left = newNode(3);
    root->right = newNode(2);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    
    cout << "Height of the given tree is : " << height(root) << "\n";
    return 0;
}