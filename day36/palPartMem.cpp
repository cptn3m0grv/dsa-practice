#include <bits/stdc++.h>
using namespace std;

int static dp[1001][1001];

bool isPal(string s, int i, int j){
    if(i >= j) return true;

    while(i < j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }

    return true; 
}

int solve(string s, int i, int j){
    if(i >= j || isPal(s, i, j)){
        return 0;
    }

    if(dp[i][j] != -1) return dp[i][j];

    int ans = INT_MAX;
    int left, right;

    for(int k = i; k < j; k++){

        if(dp[i][k] != -1){
            left = dp[i][k];
        }else{
            left = solve(s, i, k);
        }

        if(dp[k+1][j] != -1){
            right = dp[k+1][j];
        }else{
            right = solve(s, k+1, j);
        }

        int temp = 1 + left + right;

        if(temp < ans){
            ans = temp;
        }

    }

    return dp[i][j] = ans;
}

int main(){
    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << solve(s, 0, s.length()-1);
    return 0;
}