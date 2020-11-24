#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int N;
    cin >> N;
    set<array<int, 2>> s;
    for(int i = 0; i < N; ++i){
        int a, b;
        cin>>a>>b;
        s.insert({2*a, 1});
        s.insert({2*b+1, -1});
    }
    
    int ans=0, c=0;
    
    for(auto a: s){
        c+=a[1];
        ans = max(ans, c);
    }
    cout << ans << "\n";
    return 0;
    
}