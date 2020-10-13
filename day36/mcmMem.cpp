#include <bits/stdc++.h>
using namespace std;

int solveI(int arr[], int i, int j, int **dp){
    if(dp[i][j]  != -1){
        return dp[i][j];
    }

    int mn = INT_MAX;

    for(int k = i; k <= j-1; k++){
        int t = solveI(arr, i, k, dp) + solveI(arr, k+1, j, dp) + arr[i-1]*arr[k]*arr[j];
        if(t < mn){
            mn = t;
        }
    }

    return dp[i][j] = mn;

}

int solve(int arr[], int i, int j){

    int size = j + 1;
    int **dp;
    dp = new int*[size + 1];
    for(int i = 0; i < size + 1; i++){
        dp[i] = new int[size + 1];
    }
    for(int m = 0; m < size+1; m++){
        for(int n = 0; n < size + 1; n++){
            dp[m][n]  = -1;
        }
    }

    return solveI(arr, i, j, dp);
}

int main(void){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", solve(arr, 1, size-1));
    return 0;
}