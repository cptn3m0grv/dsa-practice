#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    set<int> s;
    while(t--){
        int N, a;
        cin >> N;
        for(int i = 0; i < N; ++i){
            cin >> a;
            s.insert(a);
        }
        cout << s.size() << "\n";
        s.clear();
    }
    return 0;
}