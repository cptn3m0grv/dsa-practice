// Willow, a 3 years old genius, thought that sorting is based on the last digit of a number. His comparison process is if the last digit of an integer A is smaller than the last digit of another integer B ,then A<B. And if the last digit of two integers is same then he checks the previous one and this way the comparison continues.

// That means, if the digits of an integer A is represented as a1,a2…an and another integer B as b1,b2…bm (n and m not necessary to be equal), A will be smaller than B if there is an i such that Ai < Bi and for each valid j>i, Aj=Bj.

// For example,

// If A=123 , B=521 then A>B.
// If A = 521 , B = 518 then A<B
// Willow is trying to sort N numbers in ascending order in his process. Can you help him?

// Input:
// First line will contain T, number of testcases. Then the testcases follow.
// First line of each testcase contains of a single line of input, one integer N - number of integers. -Then N line contains N integers X1,X2,…,XN
// Output:
// For p-th testcase, first line will be "Case p:"(Don't put a space after this statement or it may cause WA) and then print the numbers in N line after sorting by Willow's rule.

// Constraints
// 1≤T≤100
// 2≤N≤104
// 0≤Xi≤104
// Sample Input:
// 1
// 2
// 519
// 521
// Sample Output:
// Case 1: 
// 521
// 519
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ull unsigned long long
#define lld long long int

int main(){
    fastio;
    int t;
    cin>>t;
    for(int i =1 ; i <= t; ++i){
        int N;cin>>N;
		vector<string> A(N);
		for(int i=0;i<N;i++){
			string s;cin>>s;
			reverse(s.begin(),s.end());
			A[i]=s;
		}
		sort(A.begin(),A.end());
		cout << "Case " << i << ":\n";
		for(int i=0;i<N;i++){
		    reverse(A[i].begin(),A[i].end());
			cout<<A[i]<<"\n";
		}
    }
    return 0;
}
