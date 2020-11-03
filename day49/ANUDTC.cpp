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
        
        if(360%N == 0){cout << "y ";}
        else{cout << "n ";}
        
        if(N<=360){cout << "y ";}
        else{cout << "n ";}
        
        if(N<=26){cout << "y\n";}
        else{cout << "n\n";}
    }
}