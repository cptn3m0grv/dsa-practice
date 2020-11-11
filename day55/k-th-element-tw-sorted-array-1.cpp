#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        int N, M, K, a;
        cin >> N >> M >> K;
        
        vector<int> V;
        
        for(int i = 0; i < N; ++i){
            cin >> a;
            V.push_back(a);
        }
        
        for(int i = 0; i < M; ++i){
            cin >> a;
            V.push_back(a);
        }
        
        sort(V.begin(), V.end());
        
        cout << V[K-1] <<"\n";
    }
    return 0;
}