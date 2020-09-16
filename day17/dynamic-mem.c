#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int *)malloc(3*sizeof(int));
    int i;
    ptr[0] = 3;
    ptr[1] = 4;
    ptr[2] = 5;
    for(i=0; i<3; i++){
        printf("%d\t", ptr[i]);
    }

    int *p = (int *)calloc(3, sizeof(int));
    for(i=0; i<3; i++){
        printf("%d\t", p[i]);
    }

    ptr = (int *)realloc(ptr, 4*sizeof(int));
    ptr[3] = 6;
    for(i = 0; i<4; i++){
        printf("%d\t", ptr[i]);
    }

    free(ptr);
    free(p);
    return 0;
}