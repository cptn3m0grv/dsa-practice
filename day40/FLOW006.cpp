#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        int A;
        cin >> A;
        int sum = 0;
        while(A){
            sum += A % 10;
            A = A / 10;
        }
        cout << sum << endl;
    }
    return 0;
}

