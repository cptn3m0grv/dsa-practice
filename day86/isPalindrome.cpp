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

Node *reverseList(Node *head){
    Node *pre = NULL;
    Node *next = NULL;
    
    while(head){
        next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    
    return pre;
}

bool isPalindrome(Node *head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    
    Node *slow = head;
    Node *fast = head;
    
    while(fast->next&&fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    slow->next = reverseList(slow->next);
    slow = slow->next;
    
    while(slow){
        if(head->data!=slow->data){
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    
    return true;
    
}

int main(){
    Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(2);
    head->next->next->next->next = newNode(1);
    
    if(isPalindrome(head)){
        cout << "It is !!!\n";
    }else{
        cout << "It is not !!!\n";
    }
    
    return 0;
}

