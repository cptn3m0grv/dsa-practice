// A tuple (a,b,c) is considered good if it consists of three prime numbers a, b and c such that a<b<c≤N and a+b=c.

// Two tuples are considered different if they differ in at least one position. Given N, find the number of good tuples that can be formed by integers from 1 to N.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The following T lines contain a single integer N.
// Output
// For each test case, print a single line containing one integer — the number of good tuples which can be formed using integers from 1 to N.

// Constraints
// 1≤T≤105
// 1≤N≤106
// Example Input
// 2
// 3
// 6
// Example Output
// 0
// 1
// Explanation
// Example case 1: There are no good tuples. (1,2,3) is not a good tuple since 1 is not prime.

// Example case 2: (2,3,5) is a good tuple since 2, 3 and 5 are prime and 2+3=5.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mXm 1000005
#define ll long long

bool prime[mXm+1];
ll ans[mXm];

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

    ans[0]=0;
    ans[1]=0;
    ans[2]=0;
    ans[3]=0;
    for(ll i=4;i<=mXm-3;++i){
        if(prime[i]&&prime[i-2]){
            ans[i]=ans[i-1]+1;
        }else{
            ans[i]=ans[i-1];
        }
    }
    
    ll t;
    cin>>t;

    while(t--){
        ll N;
        cin>>N;
        cout<<ans[N]<<"\n";
    }
    return 0;
} 