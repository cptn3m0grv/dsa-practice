#include <bits/stdc++.h>
using namespace std;

// We will be given and difference, we have to find out how many subsets of that difference exist in that array
// sum(S1) - sum(S2) = difference
// sum(s1) + sum(s2) = sum(arr)
// from adding the above two  equations
// sum(S1) = (diff+sum(arr)) / 2
// now this problem is reduced to countsumofsubset problem, let's solve it

int countS(int arr[], int size, int sum){
    int dp[size+1][sum+1];

    // initialization
    for(int i = 0; i < size + 1; i++){
        for(int j = 0; j < sum + 1; j++){
            if(i == 0){
                dp[i][j] = 0;
            }
            if(j == 0){
                dp[i][j] = 1;
            }
        }
    }

    // filling the 2D matrix
    for(int i = 1; i < size + 1; i++){
        for(int j = 1; j < sum + 1; j++){
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
    int size;
    int diff;
    cin >> size >> diff;
    int arr[size];
    int sum = 0, sumS1;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sumS1 = (diff + sum) / 2;
    cout << countS(arr, size, sumS1) << endl;
    return 0;
}