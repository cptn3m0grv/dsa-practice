// You are given an integer N. Find the largest integer between 1 and 10 (inclusive) which divides N.

// Input
// The first and only line of the input contains a single integer N.

// Output
// Print a single line containing one integer ― the largest divisor of N between 1 and 10.

// Constraints
// 2≤N≤1,000
// Subtasks
// Subtask #1 (100 points): original constraints

// Example Input 1
// 24
// Example Output 1
// 8
// Explanation
// The divisors of 24 are  1,2,3,4,6,8,12,24 , out of which 1,2,3,4,6,8 are in the range [1,10]. Therefore, the answer is max(1,2,3,4,6,8)=8.

// Example Input 2
// 91
// Example Output 2
// 7
// Explanation
// The divisors of 91 are 1,7,13,91, out of which only 1 and 7 are in the range [1,10]. Therefore, the answer is max(1,7)=7.

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
        int N;
        cin>>N;
        int ans =1;
        for(int i=2;i<=10;++i){
            if(N%i==0){
                ans=i;
            }
        }
        cout<<ans;
        cout << "\n";
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