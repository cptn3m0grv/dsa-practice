// A polite number is a positive integer that can be written as the sum of two or more consecutive positive integers. Suppose for 7 and 15:

// 7=3+4
// 15=4+5+6
// So, 7 and 15 are polite number. While 1 can not be written as the sum of two or more consecutive positive integers. So it is not polite. You will be given a positive integer N. Now you have to tell how many positive integers from 1 to N are not polite.

// Input:
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single integers N.
// Output:
// For each testcase, output a single integer answering how many numbers from 1 to N are not polite.

// Constraints
// 1≤T≤105
// 1≤N≤1018
// Sample Input:
// 1
// 100
// Sample Output:
// 7
//
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ull unsigned long long

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        ull N;
        cin>>N;
        cout << floor(log2(N)) + 1 << "\n";
    }
    return 0;
}
