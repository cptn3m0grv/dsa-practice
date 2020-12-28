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


bool isLeaf(Node *node){
    return ((node->right == NULL) && (node->left == NULL));
}

void differentLeaf(Node *root1, Node *root2){
    
    if(root1 == NULL || root2 == NULL)
        return;
        
    stack<Node*> st1, st2;
    st1.push(root1);
    st2.push(root2);
    
    while(!st1.empty() || !st2.empty()){
        
        if(st1.empty() || st2.empty())
            return;
        
        Node *temp1 = st1.top();
        st1.pop();
        
        while(temp1 && !isLeaf(temp1)){
            st1.push(temp1->right);
            st2.push(temp1->left);
            temp1 = st1.top();
            st1.pop();
        }
        
        Node * temp2 = st2.top(); 
        st2.pop(); 
        
        while (temp2 && !isLeaf(temp2)){ 
            st2.push(temp2->right); 
            st2.push(temp2->left); 
            temp2 = st2.top(); 
            st2.pop(); 
        } 
        
        if(temp1!=NULL && temp2!=NULL){
            if(temp1->data != temp2->data){
                cout << "First non matching leaf: " << temp1->data << " " << temp2->data << "\n";
                return;
            }
        }
        
    }
    
}

int main(){
    Node *root1 = newNode(5);
    root1->left = newNode(2);
    root1->right = newNode(7);
    root1->left->left = newNode(10);
    root1->left->right = newNode(11);
    
    Node *root2 = newNode(6);
    root2->left = newNode(10);
    root2->right = newNode(15);
    
    differentLeaf(root1, root2);
    
    return 0;
}