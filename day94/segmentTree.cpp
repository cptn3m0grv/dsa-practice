#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int A[100005], S[4*100005];

int query(int ind, int low, int high, int left, int right){
    if(low>=left&&high<=right){
        return S[ind];
    }
    if(high<left||low>right){
        return INT_MIN;
    }
    int mid = (low+high)/2;
    int l = query(2*ind+1, low, mid, left, right);
    int r = query(2*ind+2, mid+1, high, left, right);
    
    return max(l, r);
}

void build(int ind, int low, int high){
    if(low==high){
        S[ind]=A[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1, low, mid);
    build(2*ind+2, mid+1, high);
    S[ind]=max(S[2*ind+1],S[2*ind+2]);
}

void solve(){
    int N;
    cin>>N;
    
    for(int i=0;i<N;++i){
        cin>>A[i];
    }
    
    build(0, 0, N-1);
    
    int Q;
    cin>>Q;
    while(Q--){
        int L, R;
        cin>>L>>R;
        cout<<query(0, 0, N-1, L, R)<<"\n";
    }
}

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
