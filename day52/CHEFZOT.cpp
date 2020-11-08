#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int N;
    cin >> N;
    int V[N];
    for(int i = 0; i < N; ++i) {cin >> V[i];}
    int ans = 0;
    int prod = 1;
    int best = 0;
    
    for(int i = 0; i < N; ++i){
        prod*=V[i];
        if(prod == 0){
            ans = 0;
            prod = 1;
        }else{
            ++ans;
        }
        best = max(best, ans);
    }    
    cout << best << "\n";
    return 0;
}