#include <bits/stdc++.h> 
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int

int main() {
    fastio;
    ll N, K,mXm=0, mXM, mNm;
    cin>>N>>K;
    ll A[N];
    for(int i=0;i<N;++i){
        cin>>A[i];
    }
    mNm=*min_element(A, A+N);
    mXM=*max_element(A, A+N); 
    if(K==0){
        for(ll i=0;i<N;++i){
            cout<<A[i]<<" ";
        }
    }else if(K%2==1){
        for(ll i=0;i<N;i++){
            cout<<mXM-A[i]<<" ";
        }
    }else{
        for(ll i=0;i<N;i++){
            cout<<A[i]-mNm<<" ";
        }
    }
    cout << "\n";
	return 0;
}
