#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ull unsigned long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int ans = 0;
        for(int i = 1; i <= N; ++i){
            if(N%i==0)
                ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}