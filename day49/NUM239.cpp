#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int s, e;
        cin >> s >> e;
        int ans = 0;
        for(int i = s; i <= e; ++i){
            int m = i%10;
            if(m==2 || m==3 || m==9) ans+=1;
        }
        cout << ans <<"\n";
    }
    return 0;
}