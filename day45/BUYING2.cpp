#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N, X, sum = 0;
        cin >> N >> X;
        int a[N];
        for(int i = 0; i < N; ++i){
            cin >> a[i];
            sum+=a[i];
        }
        sort(a, a+N);
        int c = sum/X;
        if((sum-a[0])/X == c){
            cout << -1 << "\n";
        }else{
            cout << (sum/X) << "\n";
        }
    }
    return 0;
}