#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum = 0;
        int size = s.size();
        vector<char> V;
        
        for(int i = 0; i < size; ++i){
            if(s[i]>='A'&&s[i]<='Z'){
                V.push_back(s[i]);
            }
            if(s[i]>='0'&&s[i]<='9'){
                sum+=(int)s[i]-48;
            }
        }
        sort(V.begin(), V.end());
        for(auto c: V){
            cout << c ;
        }
        cout << sum << "\n";
        
    }
    return 0;
}