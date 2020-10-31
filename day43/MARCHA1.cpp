#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m){
    
    bool dp[n+1][m+1];
    
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < m+1; j++){
            if(i==0){
                dp[i][j] = false;
            }
            if(j == 0){
                dp[i][j] = true;
            }
        }
    }
    
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            if(arr[i-1] > m){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] || dp[i][j-arr[i-1]];
            }
        }
    }
    
    return dp[n][m];
    
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        if(isPossible(arr, n, m)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}