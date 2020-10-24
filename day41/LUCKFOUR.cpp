#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int count = 0;
        while(num){
            if(num % 10 == 4) count += 1;
            num = num / 10;
        }
        cout << count << endl;
    }
    return 0;
}