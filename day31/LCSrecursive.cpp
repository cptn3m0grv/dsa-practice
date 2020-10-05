#include <bits/stdc++.h>
using namespace std;

int LCS(char str1[], char str2[], int size_1, int size_2){
    if(size_1 == 0 || size_2 == 0){
        return 0;
    }

    if(str1[size_1 - 1] == str2[size_2 - 1]){
        return 1 + LCS(str1, str2, size_1-1, size_2-1);
    }else{
        return max(LCS(str1, str2, size_1-1, size_2), LCS(str1, str2, size_1, size_2-1));
    }
}

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int size_1, size_2;
        scanf("%d%d", &size_1, &size_2);

        char str1[size_1+1];
        char str2[size_2+1];

        scanf("%s%s", str1, str2);

        printf("%d\n", LCS(str1, str2, size_1, size_2));
    }

    return 0;
}