#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t; cin>>t;
    while(t-- > 0){
        string s;
        cin >> s;
        int size = s.size();
        int mXm = INT_MIN;
        for(int i = 0; i < size; ++i){
            string curr;
            if(s[i]>='0'&&s[i]<='9'){
                curr+=s[i];
                while(i+1<size&&s[i]>='0'&&s[i]<='9'){
                    curr+=s[i+1];
                    ++i;
                }
            }
            if(curr.size()!=0){
                mXm = max(mXm, stoi(curr));
            }
        }
        cout << mXm << "\n";
    }

    return 0;
}