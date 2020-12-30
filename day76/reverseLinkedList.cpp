#include <bits/stdc++.h>
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

Node *reverse(struct Node *head){
    Node *newHead = NULL;
    
    while(head!=NULL){
        Node *temp = head->next;
        head->next = newHead;
        newHead = head;
        head = temp;
    }
    
    return newHead;
}

int main(){
    fastio;
    
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    Node *reversedHead = reverse(head);
    
    while(reversedHead != NULL){
        cout << reversedHead->data << "->";
        reversedHead = reversedHead->next;
    }
    
    return 0;
}