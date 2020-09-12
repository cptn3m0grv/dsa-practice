#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * top){
    while(top != NULL){
        printf("Element: %d\n", top->data);
        top = top->next;
    }
}

int isEmpty(struct Node * top){
    return (top==NULL ? 1 : 0);
}

int isFull(struct Node * top){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    return (p==NULL ? 1 : 0);
}

struct Node * push(struct Node * top, int data){
    if(isFull(top)) printf("Stack Overflow");
    else{
        struct Node * nu = (struct Node *)malloc(sizeof(struct Node));
        nu->data = data;
        nu->next = top;
        top = nu;
        return top;
    }
}

int pop(struct Node ** top){
    if(isEmpty(*top)) {printf("Stack underflow"); return -1;}
    else{
        struct Node * nu = (*top);
        (*top) = (*top)->next;
        int data = nu->data;
        free(nu);
        return data;
    }
}

int peek(int pos, struct Node * top){
    struct Node * ptr = top;
    for(int i = 0; i < pos - 1 && ptr != NULL; i++){
        ptr = ptr->next;
    }
    if(ptr != NULL){
        return ptr->data;
    }else{
        return -1;
    }
}

int stackTop(struct Node * top){
    return top->data;
}

int stackBottom(struct Node * top){
    struct Node * p = top;
    struct Node * q = top->next;
    while(q != NULL){
        p = p->next;
        q = q->next;
    }
    return p->data;
}

int main(){

    struct Node * top = NULL;
    push(top, 78);
    push(top, 21);
    int poppedElement = pop(&top);
    
    return 0;
}