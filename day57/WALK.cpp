#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        int N;
        cin >> N;
        int A[N];
        int ans =0;    
        for(int i = 0; i< N;++i){ 
            cin>>A[i];
            ans = max(ans, A[i]+i);
        }
        cout << ans << "\n";
    }
}