#include <bits/stdc++.h>
using namespace std;

int knapSack(int values[], int weights[], int size, int capacity){
    int dp[size+1][capacity+1];

    for(int i = 0; i <= size; i++){
        for(int j = 0; j <= capacity; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else if(weights[i-1] <= j){
                dp[i][j] = max(values[i-1] + dp[i-1][j-weights[i-1]], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[size][capacity];
}

int main(){
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
        printf("%d\n", knapSack(values, weights, size, capacity));
    }
    return 0;
}