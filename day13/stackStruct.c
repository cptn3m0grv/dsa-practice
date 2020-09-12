#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct Stack * ptr){
    return (ptr->top == -1 ? 1 : 0);
}

int isFull(struct Stack * ptr){
    return (ptr->top == ptr->size-1 ? 1 : 0);
}

void push(struct Stack * ptr, int val){
    if(isFull(ptr)){printf("Stack Overflow");}
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }

}

int pop(struct Stack * ptr){
    if(isEmpty(ptr)) {printf("Stack underflow."); return -1;}
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct Stack * ptr, int pos){
    if(ptr->top - pos + 1  < 0){
        printf("Not a valid position.");
        return -1;
    }else{
        return (ptr->arr[ptr->top - pos + 1]);
    }
}

int stackTop(struct Stack * ptr){
    if(isEmpty(ptr)) return -1;
    return ptr->arr[ptr->top];
}

int stackBottom(struct Stack * ptr){
    if(isEmpty(ptr)) return -1;
    return ptr->arr[0];
}

int main(){

    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack creation success.\n");

    push(sp, 53);
    push(sp, 43);
    push(sp, 51);

    pop(sp);

    // if(isEmpty(sp)) {printf("The Stack is empty.");}
    // else {printf("The stack is not empty");}

    printf("Peek: %d", peek(sp, 1));

    return 0;
}