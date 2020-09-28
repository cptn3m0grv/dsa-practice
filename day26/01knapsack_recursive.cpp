#include <bits/stdc++.h>
using namespace std;

int knapSackRec(int values[], int weights[], int size, int capacity, int **dp){
    if(size < 0){
        return 0;
    }

    if(dp[size][capacity] != -1){
        return dp[size][capacity];
    }

    if(weights[size] > capacity){
        dp[size][capacity] = knapSackRec(values, weights,size-1, capacity, dp);
        return dp[size][capacity];
    }else{
        dp[size][capacity] = max(values[size] + knapSackRec(values, weights, size-1, capacity-weights[size], dp), knapSackRec(values, weights, size-1, capacity, dp));
        return dp[size][capacity];
    }
}

int knapsack(int values[], int weights[], int size, int capacity){
    int **dp;
    dp = new int*[size];
    for(int i = 0; i < size; i++){
        dp[i] = new int[capacity + 1];
    }
    for(int i = 0; i < size; i++){
        for(int j  = 0; j < capacity+1; j++){
            dp[i][j] = -1;
        }
    }

    return knapSackRec(values, weights, size - 1, capacity, dp);
}

int main(void){
    int test;
    scanf("%d", &test);
    while(test--){
        int size, capacity;
        scanf("%d%d", &size, &capacity);
        int values[size];
        int weights[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &values[i]);
        }
        for(int i = 0; i < size; i++){
            scanf("%d", &weights[i]);
        }

        printf("%d\n", knapsack(values, weights, size, capacity));
    }
}