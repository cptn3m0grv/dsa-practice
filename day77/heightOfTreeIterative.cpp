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

int height(Node *root){
    if(root==nullptr){
        return 0;
    }
    
    list<Node *> Q;
    Q.push_back(root);
    
    Node *front = nullptr;
    
    int h = 0;
    
    while(!Q.empty()){
        int size = Q.size();
        
        while(size--){
            front = Q.front();
            Q.pop_front();
            
            if(front->left){
                Q.push_back(front->left);
            }
            
            if(front->right){
                Q.push_back(front->right);
            }
            
        }
        
        ++h;
    }
    
    return h;
    
}

int main(){
    fastio;
    
    Node *root = newNode(15);
    root->left = newNode(10);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->left->left = newNode(6);
    root->right->right = newNode(5);
    
    int h = height(root);
    
    cout << "The height of given tree is: " << h << "\n";
    return 0;
}