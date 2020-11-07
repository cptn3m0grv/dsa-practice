#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll ans = 0;
        for(auto i: s){
            if(!(i == '4' || i == '7')) ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}