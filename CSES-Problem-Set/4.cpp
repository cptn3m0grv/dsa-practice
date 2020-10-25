// Increasing Array

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int mx = 0;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mx = max(x, mx);
        ans += mx-x;
    }
    cout << ans;
    return 0;
}