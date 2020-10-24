#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int first = n;
        int last = n % 10;
        for(first = n; first >= 10; first = first/10);
        cout << first + last << endl;
    }
    return 0;
}