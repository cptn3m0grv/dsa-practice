#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
ll INF = 1e18;

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        ll A[N];
        for(int i = 0; i < N; ++i){
            cin >> A[i];
        }
        int M;
        cin >> M;
        ll mn = INF;
        sort(A, A+N);
        for(int i = 0; i <= N-M; ++i){
            mn = min(mn, A[i+M-1]-A[i]);
        }
        cout << mn << "\n";
    }
    return 0;
}