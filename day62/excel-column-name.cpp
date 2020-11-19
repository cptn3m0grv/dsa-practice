#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        int N;
        cin >> N;
        string ans;
        char chr;
        while(N!=0){
            chr = 'A'+(N-1)%26;
            ans+=chr;
            N=(N-1)/26;
        }
        reverse(ans.begin(), ans.end());
        cout << ans;
        cout << "\n";
    }
    return 0;
    
}