#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
string str1, str2;
int s1, s2;

int solve(){
    
    int dp[s1+1][s2+1];
    
    for(int i =0; i < s1+1; ++i){
        for(int j =0; j < s2+1; ++j){
            if(i==0||j==0){
                dp[i][j]=0;
            }        
        }
    }
    
    for(int i = 1; i < s1+1; ++i){
        for(int j = 1; j < s2+1; ++j){
            if(str1[i-1] == str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j] = 0;
            }
        }
    }
    
    int mx  = -1;
    
    for(int i = 0; i < s1+1; ++i){
        for(int j = 0; j < s2+1; ++j){
            mx = max(mx, dp[i][j]);
        }
    }
    
    return mx;
}


int main(){
    fastio;
    int t ; cin >> t;
    while(t--){
        // int s1, s2;
        cin >> s1 >> s2;
        cin >> str1 >> str2;
        // cout << str1 << " " << str2 <<"\n";
        cout << solve() <<"\n";
    }
    return 0;
}