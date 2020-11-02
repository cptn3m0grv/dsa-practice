#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

int main(){
    fastio;
    ll a;
    cin >> a;
    if(a%6 == 0){
        cout << "yes\n";
        return 0;
    }
    if(a%6==1){
        cout << "yes\n";
        return 0;
    }
    if(a%6==3){
        cout << "yes\n";
        return 0;
    }
    cout << "no\n";
    return 0;
}