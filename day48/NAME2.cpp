#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

bool sub(string small, string big, int Slen, int Blen){
    int j = 0;
    for(int i = 0; i < Blen && j < Slen; ++i){
        if(small[j] == big[i]){
            ++j;
        }
    }
    
    return (j==Slen);
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        string M, W;
        cin >> M >> W;
        if(sub(M, W, M.size(), W.size()) || sub(W, M, W.size(), M.size())){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}