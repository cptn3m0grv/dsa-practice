#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int mXm = 2e5;
int n;

int main(){
    fastio;
    cin>>n;
    vector<int> V;
    for(int i = 0; i < n; ++i){
        int a;
        cin>>a;
        int p = upper_bound(V.begin(), V.end(), a)-V.begin();
        if(p<V.size()){
            V[p]=a;
        }else{
            V.push_back(a);
        }
    }
    cout<<V.size()<<"\n";
    return 0;
}