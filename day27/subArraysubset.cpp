#include <bits/stdc++.h>
using namespace std;

bool subArraySum(int arr[], int size, int sum){
    bool dp[size+1][sum+1];

    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < sum+1; j++){
            if(i == 0){
                dp[i][j] = false;
            }
            if(j == 0){
                dp[i][j]  = true;
            }
        }
    }

    for(int i = 1; i < size+1; i++){
        for(int j = 1; j < sum+1; j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[size][sum];

}

int main(){
    int *arr;
    int size, sum;
    scanf("%d%d", &size, &sum);
    arr = new int[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    cout << "The particual subset occurs = " << subArraySum(arr, size, sum);
    return 0;
}