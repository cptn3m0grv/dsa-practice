#include <bits/stdc++.h>
using namespace std;

struct Stack{
    int size;
    int top;
    char *arr;
};

bool isEmpty(struct Stack * ptr){
    return (ptr->top == -1 ? true : false);
}

bool isFull(struct Stack * ptr){
    return (ptr->top == ptr->size-1 ? true : false);
}

void push(struct Stack * ptr, char val){
    if(isFull(ptr)){return;}
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct Stack * ptr){
    if(isEmpty(ptr)) {return 'a';}
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){

    int test;
    scanf("%d", &test);
    while(test--){
        int balanced;

        char str[100];
        scanf("%s", str);

        struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
        sp->size = 51;
        sp->top = -1;
        sp->arr = (char *)malloc(sp->size * sizeof(char));

        for(int i = 0; i < 100; i++){
            if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
                push(sp, str[i]);
            }else if(str[i] == ')'){
                if(pop(sp) == '(') balanced == 1;
                else{balanced = 0;}
            }else if(str[i] == '}'){
                if(pop(sp) == '{') balanced == 1;
                else{balanced = 0;}
            }else if(str[i] == ']'){
                if(pop(sp) == '[') balanced == 1;
                else{balanced = 0;}
            }
        }
        if(balanced == 0){
            printf("Balanced.\n");
        }else{
            printf("Not Balanced.\n");
        }
    }


    return 0;
}