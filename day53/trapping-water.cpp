#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int INF = -1e9;

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int A[N], mxL[N], mxR[N];
        int mx = INF;
        for(int i = 0; i < N; ++i) cin >> A[i];

        for(int i = 0; i < N; ++i){
            mx = max(mx,  A[i]);
            mxL[i] = mx;
        }
        mx = INF;
        for(int i = N-1; i>=0; --i){
            mx = max(mx, A[i]);
            mxR[i] = mx;
        }
        int ans = 0;
        for(int i = 0; i < N; ++i){
            ans += min(mxL[i], mxR[i])-A[i];
        }
        cout << ans << "\n";

    }
    return 0;
}