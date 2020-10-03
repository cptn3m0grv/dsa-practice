#include <bits/stdc++.h>
using namespace std;

int minSumDifference(int arr[], int size, int sum){
    bool dp[size+1][sum+1];
    vector<int> V;
    int range = sum;
    int mn = INT_MAX;

    // INITIALIZATION
    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < sum+1; j++){
            if(i == 0){
                dp[i][j] = false;
            }
            if(j == 0){
                dp[i][j] = true;
            }
        }
    }

    // Table filled
    for(int i = 1; i < size+1; i++){
        for(int j = 1; j < sum+1; j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    // filling the vector with last row
    for(int j = 0; j < sum+1; j++){
        if(dp[size][j]){
            V.push_back(j);
        }
    }

    // finding the min-difference
    for(int i = 0; i < V.size(); i++){
        if((range - 2*V.at(i)) >= 0){
            mn = min(mn, (range - 2*V.at(i)));
        }
    }

    return mn;

}

int main(){
    int size;
    cin >> size;
    int arr[size];
    int sum = 0;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << minSumDifference(arr, size, sum) << endl;
    return 0;
}