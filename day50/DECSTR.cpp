#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = n%25;
        int b = n/25;
        if(a!=0)
            for(int i = a; i>=0; --i)
                cout << (char)(i+'a');
                
        while(b>0){
            for(int i = 25; i>=0; --i){
                cout << (char)(i+'a');
            }
            --b;
        }
        cout << "\n";
    }
    return 0;
}