#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traverseList(struct Node * head){
    while(head != NULL){
        printf("%d\t", head->data);
        head = head->next;
    }
}

struct Node * removeDups(struct Node * head){
    struct Node * ptr = head;
    while(ptr != NULL){
        struct Node * q = ptr;
        while(q->next != NULL){
            if(q->next->data == ptr->data){
                q->next = q->next->next;
            } else{
                q = q->next;
            }
        }
        ptr = ptr->next;
    }
    return head;
}

int main(){

    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node * thir = (struct Node *)malloc(sizeof(struct Node));
    struct Node * four = (struct Node *)malloc(sizeof(struct Node));
    struct Node * five = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = sec;

    sec->data = 1;
    sec->next = thir;

    thir->data = 3;
    thir->next = four;

    four->data = 1;
    four->next = five;

    five->data = 2;
    five->next = NULL;

    traverseList(head);
    printf("\n");
    head = removeDups(head);
    traverseList(head);
    
    return 0;
}