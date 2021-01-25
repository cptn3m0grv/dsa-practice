// You are given a range of integers {L,L+1,…,R}. An integer X is said to be reachable if it can be represented as a sum of two not necessarily distinct integers in this range. Find the number of distinct reachable integers.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers L and R.
// Output
// For each test case, print a single line containing one integer — the number of reachable integers.

// Constraints
// 1≤T≤105
// 1≤L≤R≤106
// Example Input
// 2
// 2 2
// 2 3
// Example Output
// 1
// 3
// Explanation
// Example case 1: The only reachable integer is 2+2=4.

// Example case 2: 4, 5 and 6 are reachable, since 2+2=4, 2+3=5 and 3+3=6.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int L, R;
        cin>>L>>R;
        int ans = R+R;
        ans = ans - (L+L);
        ans = ans+1;
        cout << ans << "\n";
    }
    return 0;
}