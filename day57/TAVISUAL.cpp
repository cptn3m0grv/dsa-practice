#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        int N, C, Q;
        cin >> N >> C >> Q;
        int L, R;
        for(int i =0;i < Q; ++i){
            cin>>L>>R;
            if(L<=C&&C<=R){
                C=L+R-C;
            }
        }
        cout << C << "\n";
    }
    return 0;
}