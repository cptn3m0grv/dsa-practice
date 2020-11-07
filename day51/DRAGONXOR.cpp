#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
int N, A, B;

int ones(int x){
    if(x==0) return 0;
    
    return 1+ones(x&(x-1));
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        cin >> N >> A >> B;
        int a1 = ones(A);
        int a0 = N - a1;
        int b1 = ones(B);
        int b0 = N - b1;
        int one = min(a1, b0) + min(b1, a0);
        int ans = ((1<<one)-1)<<(N-one);
        cout << ans << "\n";
    }
    return 0;
}