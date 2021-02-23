// You are given a sequence A1,A2,…,AN. Find the maximum value of the expression |Ax−Ay|+|Ay−Az|+|Az−Ax| over all triples of pairwise distinct valid indices (x,y,z).

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains N space-separated integers A1,A2,…,AN.
// Output
// For each test case, print a single line containing one integer ― the maximum value of |Ax−Ay|+|Ay−Az|+|Az−Ax|.

// Constraints
// 1≤T≤5
// 3≤N≤105
// |Ai|≤109 for each valid i
// Subtasks
// Subtask #1 (30 points): N≤500
// Subtask #2 (70 points): original constraints

// Example Input
// 3
// 3
// 2 7 5
// 3
// 3 3 3
// 5
// 2 2 2 2 5
// Example Output
// 10
// 0
// 6
// Explanation
// Example case 1: The value of the expression is always 10. For example, let x=1, y=2 and z=3, then it is |2−7|+|7−5|+|5−2|=5+2+3=10.

// Example case 2: Since all values in the sequence are the same, the value of the expression is always 0.

// Example case 3: One optimal solution is x=1, y=2 and z=5, which gives  |2−2|+|2−5|+|5−2|=0+3+3=6 .

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
        int N;
        cin>>N;
        ll A[N];
        for(int i=0;i<N;++i){
            cin>>A[i];
        }
        
        sort(A, A+N);
        int low=0;
        int mid = N/2;
        int high = N-1;
        ll ans = abs(A[low]-A[mid])+abs(A[high]-A[mid])+abs(A[low]-A[high]);
        cout<<ans;
        cout << "\n";
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