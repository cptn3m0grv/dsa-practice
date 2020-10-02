#include <bits/stdc++.h>
using namespace std;

int countOfSubsetSum(int arr[], int size, int sum){
    int dp[size+1][sum+1];

    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < sum+1; j++){
            if(i == 0){
                dp[i][j] = 0;
            }
            if(j == 0){
                dp[i][j]  = 1;
            }
        }
    }

    for(int i = 1; i < size+1; i++){
        for(int j = 1; j < sum+1; j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
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
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    cout << countOfSubsetSum(arr, size, sum) << endl;
    
    return 0;
}