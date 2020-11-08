#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
    fastio;
    int N, M;
    ll Q;
    cin >> N >> M;
    ll mxO = 1 + 2*N;
    while(M--){
        ll Z, F;
        cin >> Q;
        if(Q<1+N || Q>3*N)
            cout << 0 << "\n";
        else{
            Z = abs(mxO-Q);
            cout << N - Z << "\n";
        }
    }
    return 0;
}