#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
ll L, D, S, C;
ll ans;

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        cin >> L >> D >> S >> C;
        bool flag = false;
        for(ll i = 1; i <= D; ++i){
            if(i == 1)
                ans = S;
            else
                ans = ans + (ans*C);
                
            if(ans >= L){
                flag = true; break;
            }
        }
        if(flag) cout << "ALIVE AND KICKING\n";
        else cout << "DEAD AND ROTTING\n";
    }
    return 0;
}