#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    char data;
    struct Node * next;
};

void traverseList(struct Node * head){
    while(head != NULL){
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "null";
}

int lengthOfList(struct Node * head){
    int length = 0;
    while(head != NULL){
        length += 1;
        head = head->next;
    }
    return length;
}

bool areIntersecting(struct Node * head, struct Node * head2){
    int i;
    if(lengthOfList(head) > lengthOfList(head2)){
        for(i=0 ; i <= lengthOfList(head)-lengthOfList(head2); i++){
            head = head->next;
        }
    }else if(lengthOfList(head2) > lengthOfList(head)){
        for(i=0 ; i <= lengthOfList(head2)-lengthOfList(head); i++){
            head2 = head2->next;
        }
    }
    while(head != NULL && head2 !=NULL){
        if(head->next == head2->next){
            return true;
        }
        head = head->next;
        head2 = head2->next;
    } 
    return false;
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * b = (struct Node *)malloc(sizeof(struct Node));
    struct Node * c = (struct Node *)malloc(sizeof(struct Node));
    struct Node * d = (struct Node *)malloc(sizeof(struct Node));
    struct Node * e = (struct Node *)malloc(sizeof(struct Node));
    struct Node * f = (struct Node *)malloc(sizeof(struct Node));
    struct Node * g = (struct Node *)malloc(sizeof(struct Node));
    struct Node * head2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node * i = (struct Node *)malloc(sizeof(struct Node));

    head->data = 'a';
    head->next = b;
    b->data = 'b';
    b->next = c;
    c->data = 'c';
    c->next = d;
    d->data = 'd';
    d->next = e;
    e->data = 'e';
    e->next = f;
    f->data = 'f';
    f->next = g;
    g->data = 'g';
    g->next = NULL;

    head2->data = 'h';
    head2->next = i;
    i->data = 'i';
    i->next = e;

    traverseList(head);
    cout << "\n";
    traverseList(head2);
    cout << "\n";
    bool intersect = areIntersecting(head, head2);
    if(intersect){
        cout << "The linked lists are intersecting";
    }else{
        cout << "The linked lists do not intersect";
    }

    return 0;
}