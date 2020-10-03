// Target Sum Problem
// Given a list of non-negative integers, a1, a2, ..., an, and a target, S. Now you have 2 symbols + and -. For each integer, you should choose one from + and - as its new symbol.

// Find out how many ways to assign symbols to make sum of integers equal to target S.

// Example 1:
// Input: nums is [1, 1, 1, 1, 1], S is 3. 
// Output: 5
// Explanation: 

// -1+1+1+1+1 = 3
// +1-1+1+1+1 = 3
// +1+1-1+1+1 = 3
// +1+1+1-1+1 = 3
// +1+1+1+1-1 = 3

// There are 5 ways to assign symbols to make the sum of nums be target 3.

// This is just a variation of given-difference of two subsets

#include <bits/stdc++.h>
using namespace std;

int targetSUM(int arr[], int size, int sum){
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
        for(int j = 1; j < size+1; j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[size][sum];

}

int main(){
    int size, targetSum;
    int total_sum = 0;
    cin >> size >> targetSum;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        total_sum += arr[i];
    }
    int sums1 = (targetSum + total_sum) / 2;
    cout << targetSUM(arr, size, sums1) << endl;
    return 0;
}