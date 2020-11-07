#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        vector<int> V;
        int ans = 0;
        for(int i = 0; i < N; ++i){
            int a;
            cin >> a;
            V.push_back(a);
        }
        
        sort(V.begin(), V.end());
        
        for(int i = N-1; i >= 0; i=i-4){
            ans += V[i]+V[i-1];
        }
        
        cout << ans << "\n";
    }
    return 0;
}