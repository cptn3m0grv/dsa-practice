#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *newNode(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int middleNode(Node *head){
    Node *slow = head;
    Node *fast = head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow->data;
}

int main(){
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(3);
    head->next->next->next->next->next = newNode(2);
    head->next->next->next->next->next->next = newNode(1);
    
    cout << middleNode(head) << "\n";
    
    return 0;
    
}