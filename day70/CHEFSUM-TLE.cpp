#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int mXm = 2e5;
int A[mXm];
int N;

int prefixSum(int pos){
    int sum = 0;
    for(int i = 0; i < pos; ++i){
        sum+=A[i];
    }
    // cout << "PREFIX SUM : " << sum << " FOR i: " << pos << "\n";
    return sum;
}

int suffixSum(int pos){
    int sum = 0;
    int el = N-pos+1;
    for(int i = N-1; i>=N-el; --i){
        sum+=A[i];
    }
    // cout << "SUFFIX SUM : " << sum << " FOR i: " << pos << "\n";
    return sum;
}

int main(){
    fastio;
    int t;
    cin>>t;
    while(t-- > 0){
        cin>>N;
        for(int i = 0; i < N; ++i){
            cin>>A[i];
        }
        vector<pair<int, int>> V;
        for(int i = 1; i <= N; ++i){
            int ans = prefixSum(i) + suffixSum(i);
            // cout << "TOTAL :" << ans << "\n";
            V.push_back({ans, i});
        }
        sort(V.begin(), V.end());
        cout << V[0].second << "\n";
    }
    return 0;
}