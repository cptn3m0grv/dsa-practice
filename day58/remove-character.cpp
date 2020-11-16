#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        string ans;
        int h[26]={0};
        int size1 = s1.size(), size2 = s2.size();
        for(int i = 0; i < size2; ++i){
            ++h[s2[i]-'a'];
        }
        for(int i = 0; i < size1; ++i){
            if(h[s1[i]-'a']==0){
                ans+=s1[i];
            }
        }
        cout << ans << "\n";
    
    }
    return 0;
}