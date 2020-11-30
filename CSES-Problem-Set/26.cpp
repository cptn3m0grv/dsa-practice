#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mxM = 2e5;
int N, A[mxM];

int main(){
    fastio;
    cin>>N;
    for(int i = 0; i < N; ++i){
        cin>>A[i];
    }
    map<int, int> h;
    int ans = 0;
    for(int i = 0, j = 0; i < N; ++i){
        while(j<N&&h[A[j]]<1){
            h[A[j]]++;
            ++j;
        }
        ans = max(j-i, ans);
        h[A[i]]--;
    }
    cout << ans;
    return 0;
}