#include <bits/stdc++.h>
using namespace std;

void check(char c[]){
    stack<char> s;
    int balanced = 1;
    for(int i = 0; c[i] != '\0'; i++){
        if(c[i]=='(' || c[i]=='{' || c[i]=='['){
            s.push(c[i]);
        }else if(c[i]==')' || c[i]=='}' || c[i]==']'){
            if(s.empty()==true){
                balanced = 0;
                break;
            }else if(c[i]==')' && s.top()=='('){
                s.pop();
            }else if(c[i]=='}' && s.top()=='{'){
                s.pop();
            }else if(c[i]==']' && s.top()=='['){
                s.pop();
            }else{
                balanced = 0;
            }
        }
    }
    if(balanced && s.empty()){
        printf("balanced\n");
    }else{
        printf("not balanced\n");
    }

}

int main(void){

    int test;
    scanf("%d", &test);

    while(test--){
        char str[10000];
        scanf("%s", str);
        check(str);
    }

    return 0;
}