#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;
    int t;
    cin >> t;
    int n , c, zeroes;
    while(t--){
        c = 5;
        zeroes = 0;
        cin >> n;
        while((n/c) > 0){
            zeroes = zeroes + (n/c);
            c = c*5;
        }
        cout << zeroes << endl;
    }
    return 0;
}