// Alice and Bob went to the metrology station on school tour. Due to the lockdown the station was closed so, they decided to play some games. During that Alice pressed a button and left it unknowingly. After the opening of the station the employee of noticed that there is some inaccuracies. The chairman of the station define inaccuracy as the absolute difference between the actual reading and forecasted reading.

// As a employee you have to calculate the inaccuracy across the week.

// a denotes actual reading and f denotes forecasted reading.

// Input:
// The first line contains 7 space-separated integers a1, a2, …, a7.
// The first line contains 7 space-separated integers f1, f2, …, f7.
// Output:
// Print a single integer denoting the answer.

// Constraints
// -100 <= ti, fi <= 100
// Sample Input:
// 14 13 12 13 16 18 21
// 15 11 12 11 16 19 24

// Sample Output:
// 9
// EXPLANATION:
// |14 - 15| + |13 -11| + |12 - 12| + |13 - 11| + |16 - 16| + |18 - 19| + |21 - 24| = 9

#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve(){
    int a[7];
    for(int i=0;i<7;++i){
        cin>>a[i];
    }
    
    int b[7];
    for(int i=0;i<7;++i){
        cin>>b[i];
    }
    
    int sum=0;
    
    for(int i=0;i<7;++i){
        sum = sum + abs(a[i]-b[i]);
    
    }
    
    cout << sum <<"\n";
}

int main(){
    fastio;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}