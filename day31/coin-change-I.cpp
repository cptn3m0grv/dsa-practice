// Coin Change Problem Maximum Number of ways
// Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
// Example:
// for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4.

#include <bits/stdc++.h>
using namespace std;

int maxCoin(int coin[], int size, int sum){
    int dp[size+1][sum+1];

    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < sum+1; j++){
            if(i == 0){
                dp[i][j] = 0;
            }
            if(j == 0){
                dp[i][j] = 1;
            }
        }
    }

    for(int i = 1; i < size+1; i++){
        for(int j = 1; j < sum+1; j++){
            if(coin[i-1] <= j){
                dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[size][sum];

}

int main(){
    int size, sum;
    cin >> size >> sum;
    int coin[size];
    for(int i = 0; i < size; i++){
        cin >> coin[i];
    }
    cout << maxCoin(coin, size, sum) << endl;
    return 0;
}