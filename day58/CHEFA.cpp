#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t;
    cin>>t;
    int N;
    long int ans;
    while(t--){
        cin >> N;
        ans = 0;
        int A[N];
        for(int i = 0; i < N; ++i){ cin>>A[i]; }
        sort(A, A+N);
        for(int i = N-1; i>=0; i=i-2){
            ans+=A[i];
        }
        cout << ans << "\n";
    }
    return 0;
}