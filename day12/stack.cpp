#include<iostream>
#define SIZE 10

using namespace std;
int count = 0;

struct Stack{
    int item[SIZE];
    int top;
};

typedef struct Stack st;

void createEmptyStack(st *s){
    s->top = -1;
}

bool isFull(st *s){
    if(s->top == SIZE-1){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(st *s){
    if(s->top == -1){
        return true;
    }else{
        return false;
    }
}

void push(st *s, int data){
    if(isFull(s)){
        cout << "The stack is already full, please pop an element." << endl;
    }else{
        s->top ++;
        s->item[s->top] = data;
        count ++;
    }
}

void pop(st *s){
    if(isEmpty(s)){
        cout << "The stack is already empty." << endl;
    }else{
        s->top--;
        count --;
    }
}

void printStack(st *s){
    int i;
    cout << "Stack: \n";
    for(i=0; i<count; i++){
        cout<< s->item[i] << endl;
    }
}

int main(){

    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 2);
    push(s, 343);
    push(s, 3234);
    push(s, 434);
    push(s, 43545);
    push(s, 4654);
    push(s, 43546);
    push(s, 54654);
    push(s, 4);

    printStack(s);

    pop(s);
    pop(s);
    pop(s);
    pop(s);

    printStack(s);

    return 0;
}
