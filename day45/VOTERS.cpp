#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    ll arr1[a],arr2[b],arr3[c];
    for(int i=0;i<a;i++) cin>>arr1[i];
    for(int i=0;i<b;i++) cin>>arr2[i];
    for(int i=0;i<c;i++) cin>>arr3[i];
    map<ll,ll> seen;
    for(int i=0;i<a;i++){
        seen[arr1[i]]++;
    }
    for(int i=0;i<b;i++){
        seen[arr2[i]]++;
    }
    for(int i=0;i<c;i++){
        seen[arr3[i]]++;
    }
    int count=0;
    for(auto i=seen.begin();i!=seen.end();i++){
        if(i->second>1) count++;
    }
    cout<<count<<endl;
    for(auto i=seen.begin();i!=seen.end();i++){
        if(i->second>1) cout<<i->first<<endl;
    }
    return 0;
}