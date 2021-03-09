#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mXm 1000006
bool prime[mXm];
#define ll long long

void seive(){
    
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=mXm; p++){
        if (prime[p] == true){
            for (ll i=p*p; i<=mXm; i += p)
                prime[i] = false;
        }
    }
}

int main(){
    fastio;
    seive();
    int t;
    cin>>t;
    while(t--){
        int L, R;
        cin>>L>>R;
        
        for(int i = R+1; i<mXm; ++i){
            if(prime[i]){
                cout<<i<<" ";
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}
