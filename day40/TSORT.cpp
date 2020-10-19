#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;
    vector<int> V;
    
    int t;
    cin >> t;
    
    while(t--){
        int e;
        cin >> e;
        V.push_back(e);
    }

    sort(V.begin(), V.end());

    for(int x: V){
        cout << x << endl;
    }
    return 0;
}
