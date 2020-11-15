#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int a, b;

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        
        if((a+b)%3==0 && 2*b>=a && 2*a>=b){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}