#include<stdio.h>

int reverse(int num){
    int rev = 0;
    int rem;
    while(num != 0){
        rem = num % 10; //last digit
        rev = rev*10 + rem; // generate a number
        num = num / 10;
    }
    return rev;
}

int main(){

    int num = 137868;
    int rev = reverse(num);

    printf("%d", rev);

    return 0;
}