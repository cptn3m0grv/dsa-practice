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

int length(Node *head){
    int l = 0;
    while(head){
        ++l;
        head=head->next;
    }
    return l;
}

int intersectionPoint(Node *head1, Node *head2){
    if(head1==NULL || head2==NULL){
        return 0;
    }
    
    int l1 = length(head1);
    int l2 = length(head2);
    
    int dif = abs(l1-l2);
    
    if(l1<l2){
        for(int i = 0; i < dif; ++i){
            head2 = head2->next;
        }
    }else if(l1>l2){
        for(int i = 0; i < dif; ++i){
            head1 = head1->next;
        }
    }
    
    while(head1&&head2){
        if(head1==head2){
            return head1->data;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return 0;
    
}

int main(){
    Node *head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    head1->next->next->next = newNode(4);
    head1->next->next->next->next = newNode(5);
    head1->next->next->next->next->next = newNode(6);
    
    
    Node *head2 = newNode(8);
    head2->next = newNode(7);
    head2->next->next = head1->next->next->next;
    
    cout << intersectionPoint(head1, head2) << "\n";
    
    return 0;
    
}