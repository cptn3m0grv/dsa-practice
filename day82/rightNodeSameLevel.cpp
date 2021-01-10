#include<bits/stdc++.h>
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

Node *findRightNode(Node *root, int key){
    if(root==nullptr){
        return nullptr;
    }
    
    list<Node*> Q;
    Q.push_back(root);
    
    Node *curr = nullptr;
    
    while(!Q.empty()){
        int size = Q.size();
        while(size--){
            curr = Q.front();
            Q.pop_front();
            
            if(curr->data == key){
                if(size==0){
                    return nullptr;
                }
                
                return Q.front();
            }
            
            if(curr->left){
                Q.push_back(curr->left);
            }
            if(curr->right){
                Q.push_back(curr->right);
            }
        }
    }
    
    return nullptr;
}

int main(){
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(8);
    
    Node *right = findRightNode(root, 3);
    if (right)
        cout << "Right Node is " << right->data;
    else
        cout << "Right Node doesn't exist";
    
    return 0;
}