#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)
#define lli long long int

int main(){
    
    fastio;
	int t;
	cin>>t;
	while(t--)
    {
        lli n;
        cin>>n;
        lli a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<(long long)(n*(n-1)/2)<<endl;
    }
}
