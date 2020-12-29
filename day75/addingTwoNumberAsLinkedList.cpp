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

Node *findSum(struct Node *h1, struct Node *h2){
    Node *dummy = new Node();
    Node *temp = dummy;
    int carry = 0;
    while(h1!=NULL || h2!=NULL || carry){
        int sum = 0;
        
        if(h1!=NULL){
            sum+=h1->data;
            h1=h1->next;
        }
        
        if(h2!=NULL){
            sum+=h2->data;
            h2=h2->next;
        }
        
        sum+=carry;
        
        carry = sum/10;
        temp->next = newNode(sum%10);
        temp=temp->next;
    }
    
    return dummy->next;
}

int main(){
    fastio;
    
    Node *head1 = newNode(0);
    head1->next = newNode(1);
    head1->next->next = newNode(7);
    head1->next->next->next = NULL;
    
    Node *head2 = newNode(4);
    head2->next = newNode(3);
    head2->next->next = newNode(4);
    head2->next->next->next = newNode(5);
    head2->next->next->next->next = NULL;
    
    Node *Summation = findSum(head1, head2);
    
    do{
        cout << Summation->data << "->";
        Summation=Summation->next;
    }while(Summation!=NULL);
    
    return 0;
}