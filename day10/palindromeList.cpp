#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node * next;
};

struct Node * reverseAndClone(struct Node * node){
    struct Node * head = NULL;
    while(node != NULL){
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->next = head;
        head = n;
        node = node->next;
    }
    return head;
}

bool isEqual(struct Node * one, struct Node * two){
    while(one != NULL && two != NULL){
        if(one->data != two->data){
            return false;
        }
        one = one->next;
        two = two->next;
    }

    return one == NULL && two == NULL;
}

bool isPalindrome(struct Node * head){
    struct Node * reversed = reverseAndClone(head);
    return isEqual(head, reversed);
}

void traverseList(struct Node * head){
    while(head != NULL){
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "null";
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 2;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;

    traverseList(head);
    cout << endl;
    cout << isPalindrome(head);

    return 0;   
}