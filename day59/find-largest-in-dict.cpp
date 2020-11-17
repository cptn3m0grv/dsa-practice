#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int lcs(string str1, string str2){
    
    int size1 = str1.length();
    int size2 = str2.length();
    
    int dp[size1+1][size2+1];
    
    for(int i = 0; i < size1+1; ++i){
        for(int j = 0; j < size2+1; ++j){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    
    for(int i = 1; i < size1+1; ++i){
        for(int j = 1; j < size2+1; ++j){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[size1][size2];
    
}


int main(){
    fastio;
    int t;
    cin >> t;
    while(t-- > 0){
        int N;
        cin >> N;
        vector<string> V(N);
        for(int i = 0; i < N; ++i){
            cin >> V[i];
        }
        string s;
        cin>>s;
        int mFn = 0;
        int idx = -1;
        int ans = 0;
        int prev = 0;
        for(int i = 0; i < N; ++i){
            mFn = lcs(s, V[i]);
            if(mFn == V[i].length()){
                ans = max(ans, mFn);
            }
            if(mFn==ans && prev!=mFn){
                idx = i;
                prev = mFn;
            }
        }
        cout << V[idx] << "\n";
    }
    return 0;
}