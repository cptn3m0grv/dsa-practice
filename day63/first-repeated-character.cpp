#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fastio;
    int t; cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        int size = s.size();
        int hash[27] = {0};
        bool flag = 0;
        for(int i = 0; i < size; ++i){
            if(hash[s[i]-'a']==1){
                cout << s[i];
                flag = 1;
                break;
            }else{
                ++hash[s[i]-'a'];
            }
        }
        if(!flag){
            cout << "-1";
        }
        cout << "\n";
    }
    return 0;
}