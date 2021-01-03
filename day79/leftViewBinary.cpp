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

void printLeftView(Node *root){
    if(root==nullptr){
        return;
    }
    
    list<Node*> Q;
    Q.push_back(root);
    
    Node *curr = nullptr;
    
    while(!Q.empty()){
        // number of nodes at current level
        int size = Q.size();
        int i = 0;
        //process each node and enque right and left child
        while(i++ < size){
            curr = Q.front();
            Q.pop_front();
            
            //only print first node at level to print left view
            if(i==1){
                cout << curr->data << " ";
            }
            
            if(curr->left){
                Q.push_back(curr->left);
            }
            
            if(curr->right){
                Q.push_back(curr->right);
            }
        }
    }
}

int main(){
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(8);
    
    printLeftView(root);
    
    return 0;
}