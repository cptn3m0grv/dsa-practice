#include<bits/stdc++.h>
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

void printBottomView(Node *root){
    if(!root){
        return;
    }
    map<int, int> M;
    queue<pair<Node*, int>> Q;
    Q.push({root, 0});
    while(!Q.empty()){
        Node *temp = Q.front().first;
        int h = Q.front().second;
        Q.pop();
        //the next line is the only difference between top and bottom view
        //for the top view we only update this no other node is traversed of that vertical level
        // whereas for the bottom view we keep updating for the last value of that vertical level
        M[h] = temp->data;
        if(temp->left){
            Q.push({temp->left, h-1});
        }
        if(temp->right){
            Q.push({temp->right, h+1});
        }
    }
    for(auto x: M){
        cout << x.second << " ";
    }
}

int main(){
    fastio;
    
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    
    printBottomView(root);
    
    return 0;
}
