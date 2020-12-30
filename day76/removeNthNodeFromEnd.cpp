#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

struct Node{
    int data;
    struct Node *next;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node *deleteNode(struct Node *head, int n){
    Node *p = head;
    Node *q = p;
    for(int i = 0; i < n; ++i){
        q = q->next;
    }
    
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    
    p->next = q;
    p = head;
    return p;
}

int main(){
 
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    Node *newHead = deleteNode(head, 2);
    
    while(newHead != NULL){
        cout << newHead->data << " ";
        newHead=newHead->next;
    }
 
}