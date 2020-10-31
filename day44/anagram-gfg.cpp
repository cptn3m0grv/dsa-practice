#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
string a, b;

bool isAnagram(){
    if(a.size() != b.size())
        return false;
    
    int count = 0;
    for(int i = 0; i < a.size(); ++i)
        count += a[i];
        
    for(int i = 0; i < b.size(); ++i)
        count -= b[i];
        
    return (count == 0);
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(isAnagram())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}