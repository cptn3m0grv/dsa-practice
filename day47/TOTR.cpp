#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
// int N;
// string s, q;
// vector<char> v;

// void solve(){
//     // cout << N <<" "<<" "<< s<<" " << q;
//     for(int i = 0; i < q.size(); ++i){
//         int l = q[i];
//         if(l>=65 && l<=90){
//             int m = s[l-65];
//             v.push_back(m-32);
//         }else if(l>=97 && l<=122){
//             v.push_back(s[l-97]);
//         }else if(l == 95){
//             v.push_back(' ');
//         } else{
//             v.push_back((char)l);
//         }
//     }
    
//     for(auto e: v){
//         cout << e;
//     }
// }

// int main(){
//     fastio;
//     cin >> N >> s;
//     for(int i = 0; i < N; ++i){
//         cin >> q;
//         solve();
//     }
//     return 0;
// }

bool isCapital(char &word){
    return (word>='A' && word<='Z');
}

int main(){
    fastio;
    int t;
    cin >> t;
    string M;
    cin >> M;
    while(t--){
        int index;
        bool isCap;
        string s;
        cin >> s;
        string res = "";
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '_')
                res+=' ';
            else if(!isalpha(s[i]))
                res+=s[i];
            else{
                isCap = isCapital(s[i]);
                index = s[i]-(isCap ? 'A' : 'a');
                res+=M[index]+(isCap ? ('A'-'a') : 0);
            }
        }
        cout << res << "\n";
    }
    return 0;
}