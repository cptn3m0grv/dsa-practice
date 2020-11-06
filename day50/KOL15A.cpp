#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 0;
        for(auto c: s){
            if(c>=48 && c<=57)
                ans+=(int)(c-48);
        }
        cout << ans << "\n";
    }
    return 0;
}