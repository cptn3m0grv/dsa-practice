#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    char data;
    struct Node * next;
};

struct Node * findBeggining(struct Node * head){
    struct Node * slow = head;
    struct Node * fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }

    if(fast == NULL || fast->next == NULL){
        return NULL;
    }

    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return fast;
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * sixth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 'a';
    head->next = second;

    second->data = 'b';
    second->next = third;

    third->data = 'c';
    third->next = fourth;

    fourth->data = 'd';
    fourth->next = fifth;
    
    fifth->data = 'e';
    fifth->next = sixth;

    sixth->data = 'f';
    sixth->next = third;

    struct Node * loop = findBeggining(head);
    cout << loop->data << "\t" << loop->next << endl;
    
    return 0;
}