#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t, p, s;
    cin >> t;
    while(t--){
        cin >> p >> s;
        float l = (p-sqrt(p*p - 24*s))/12.0f;
        float v = 0.25*p*l*l - 2*l*l*l;
        cout << v << "\n";
    }
    return 0;
}