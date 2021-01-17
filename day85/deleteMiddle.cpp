#include <bits/stdc++.h>
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

Node *deleteNode(Node *head){
    Node *slow = head;
    Node *fast = head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *p = head;
    while(head!=NULL){
        if(head->next == slow){
            head->next = slow->next;
            break;
        }else{
            head = head->next;
        }
    }
    
    head = p;
    
    return head;
}

int main(){
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    head = deleteNode(head);
    
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
    
    return 0;
}