#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
const int INF = 2000;
int mnM;

int main(){
    fastio;
    int t, N;
    cin >> t;
    while(t--){
        mnM = INF;
        cin >> N;
        int a;
        
        for(int i = 0; i < N; ++i){
            cin >> a;
            mnM = min(mnM, a);
        }
        cout << mnM << "\n";
    }
    return 0;
}