#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int A[N];
        for(int i = 0; i < N; ++i){ cin>>A[i];}
        int gcd = A[0];
        int ans = 0;
        
        for(int i = 1; i < N; ++i){
            ans =__gcd(gcd, A[i]);
        }
        
        if(ans == 1){
            cout << N << "\n";
        }else{
            cout << -1 << "\n";
        }
        
    }
    return 0;
}