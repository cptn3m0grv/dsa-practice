#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};
struct Node * deleteData(struct Node * head, int data){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data != data && q->next !=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == data){
        p->next = q->next;
        free(q);
    }
    return head;
}
void traverseList(struct Node * head){
    while(head != NULL){
        printf("%d\t", head->data);
        head = head->next;
    }
}
struct Node * removeDups(struct Node * head){
    int buffer[] = {0, 0, 0, 0, 0, 0};
    int i = 0;
    struct Node * ptr = head;
    while(ptr != NULL){
        buffer[i]++;
        ptr = ptr->next;
    }
    for(i=0; i<(sizeof(buffer)/sizeof(buffer[0])); i++){
        if(buffer[i] > 1){
            head = deleteData(head, i);
        }
    }
    return head;
}
int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 2;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = fifth;
    fifth->data = 3;
    fifth->next = NULL;

    traverseList(head);
    printf("\n");
    head = removeDups(head);
    traverseList(head);

    return 0;
}