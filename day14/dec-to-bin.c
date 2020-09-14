#include<stdio.h>
int main(){
    
    int dec = 101;
    int rem;
    int a[10];
    int i = 0;
    while(dec){
        rem = dec % 2;
        dec = dec / 2;
        a[i] = rem;
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
        printf("%d\t", a[j]);
    }
    
    return 0;
}