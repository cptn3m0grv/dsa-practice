#include <bits/stdc++.h>
using namespace std;

int knapsack(int values[], int weights[], int size, int capacity){
    int t[size+1][capacity+1];
    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < capacity+1; i++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < size +1; i++){
        for(int j = 1; j < capacity + 1; j++){
            if(weights[i-1] <= j){
                t[i][j] = max(values[i-1] + t[i-1][j-weights[i-1]], t[i-1][j]);
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[size][capacity];

}

int main(void){
    int test, size, capacity;
    scanf("%d", &test);
    while(test--){
        scanf("%d%d", &size, &capacity);
        int values[size], weights[size];
        
        for(int i = 0; i < size; i++){
            scanf("%d", &values[i]);
        }
        for(int i = 0; i < size; i++){
            scanf("%d", &weights[i]);
        }

        int max_profit = knapsack(values, weights, size, capacity);
        printf("%d\n", max_profit);
    }
    return 0;
}