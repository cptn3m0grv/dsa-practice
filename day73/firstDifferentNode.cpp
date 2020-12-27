#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    Node *right, *left;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->right = temp->left = NULL;
    return temp;
}

void inOrderLeaves(Node *node, vector<int>& V){
    if(!node){
        return;
    }
    if(!node->left && !node->right){
        V.push_back(node->data);
    }
    inOrderLeaves(node->left, V);
    inOrderLeaves(node->right, V);
}

int main(){
    fastio;
    
    Node *root1 = newNode(5);
    root1->left = newNode(2);
    root1->right = newNode(7);
    root1->left->left = newNode(10);
    root1->left->right = newNode(11);
    
    
    Node *root2 = newNode(6);
    root2->left = newNode(10);
    root2->right = newNode(15);
    
    vector<int> V1, V2;
    
    inOrderLeaves(root1, V1);
    inOrderLeaves(root2, V2);

    for(int i = 0; i < V2.size(); ++i){
        if(V1[i]!=V2[i]){
            cout << V1[i] << " " << V2[i];
            break;
        }
    }
    
    cout << "\n";
    
    return 0;
}