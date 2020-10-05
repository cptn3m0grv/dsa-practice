#include <bits/stdc++.h>
using namespace std;

int LCS(char str1[], char str2[], int size_1, int size_2, int **dp){
    if(size_1 == 0 || size_2 == 0){
        return 0;
    }
    if(dp[size_1][size_2] != -1){
        return dp[size_1][size_2];
    }

     if(str1[size_1 - 1] == str2[size_2 - 1]){
        dp[size_1][size_2] =  1 + LCS(str1, str2, size_1-1, size_2-1, dp);
        return dp[size_1][size_2];
    }else{
        dp[size_1][size_2] = max(LCS(str1, str2, size_1-1, size_2, dp), LCS(str1, str2, size_1, size_2-1, dp));
        return dp[size_1][size_2];
    }
}

int LcsMem(char str1[], char str2[], int size_1, int size_2){
    int **dp;
    dp = new int*[size_1 + 1];
    for(int i = 0; i < size_1 + 1; i++){
        dp[i] = new int[size_2 + 1];
    }
    for(int i = 0; i < size_1 + 1; i++){
        for(int j  = 0; j < size_2 + 1; j++){
            dp[i][j] = -1;
        }
    }

    return LCS(str1, str2, size_1, size_2, dp);

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
        printf("%d\n",LcsMem(str1, str2, size_1, size_2));
    }
    return 0;
}