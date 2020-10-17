#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        do{
            cout << s << " ";
        }while(next_permutation(s.begin(), s.end()));
        cout << endl;
    }   
    return 0;
}