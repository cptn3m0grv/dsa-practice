#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int values[], int weights[], int size, int capacity){
    int dp[size+1][capacity+1];

    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < capacity+1; j++){
            if(i == 0  ||  j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < size+1; i++){
        for(int j = 1; j < capacity+1; j++){
            if(weights[i-1] <= j){
                dp[i][j] = max(values[i-1] + dp[i][j-weights[i-1]], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[size][capacity];

}

int main(){
    int size, capacity;
    cin >> size >> capacity;
    int values[size];
    int weights[size];
    for(int i = 0; i < size; i++){
        cin >> values[i];
    }
    for(int i = 0; i < size; i++){
        cin >> weights[i];
    }
    cout << unboundedKnapsack(values, weights, size, capacity) << endl;
    return 0;
}