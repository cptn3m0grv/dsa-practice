// The chef is trying to solve some series problems, Chef wants your help to code it. Chef has one number N. Help the chef to find N'th number in the series.

// 2, 6, 12, 20, 30…..

// Input:
// First-line will contain T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, one integer N.
// Output:
// For each test case, output as the pattern.

// Constraints
// 1≤T≤106
// 1≤N≤106
// Sample Input:
// 3
// 1
// 7
// 8
// Sample Output:
// 2
// 56
// 72
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--){
        ll N;
        cin>>N;
        cout << N*(N+1) << "\n";
    }
    return 0;
}