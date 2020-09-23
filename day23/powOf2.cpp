#include <bits/stdc++.h>
using namespace std;

bool checkPowerOfTwo(long num){
    if(num == 0) return false;

    return (ceil(log2(num)) == floor(log2(num)));
}

int main(){

    int test;
    scanf("%d", &test);
    while(test--){
        long num;
        scanf("%ld", &num);
        if(checkPowerOfTwo(num)){
            printf("YES");
        }else{
            printf("NO");
        }
        printf("\n");
    }

    return 0;
}