#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll INF=1e18+10;
string s[8];
bool b[15];

int main(){
    fastio;
    for(int i = 0; i < 8; ++i)
        cin >> s[i];
    int p[8], ans = 0;
    iota(p, p+8, 0);
    do{
        bool ok = 1;
        for(int i = 0; i < 8; ++i)
            ok&=s[i][p[i]]=='.';
        memset(b, 0, 15);
        for(int i =0; i < 8;  ++i){
            if(b[i+p[i]])
                ok=0;
            b[i+p[i]]=1;
        }
        memset(b, 0, 15);
        for(int i= 0; i < 8; ++i){
            if(b[i+7-p[i]])
                ok=0;
            b[i+7-p[i]]=1;
        }
        ans += ok;
    }while(next_permutation(p, p+8));
    cout << ans;
    return 0;
}
