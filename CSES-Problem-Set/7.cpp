#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for(int k = 1; k <= n; ++k){
        ll a1 = k*k, a2 = a1*(a1-1)/2;
        if(k>2){
            a2 -= 4*(k-1)*(k-2);
        }
        cout << a2 << "\n";
    }
    
    
}