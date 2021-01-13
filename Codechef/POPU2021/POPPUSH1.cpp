// Dinesh is very fond of sweets recently his aunt Riya gifted him an array a of sweets of size N. The ith sweet is of the type a[i]. His mother told him that he can choose one type of sweet in a day and eat at most 2 sweets of that type. Since he has to eat all the sweets as quickly as possible because his cousins are arriving. Find out the minimum number of days in which he can eat all the sweets gifted by his aunt Riya.

// Input:
// First-line will contain N, the number of sweets.
// The next line will contain N space integers denoting the type of sweets.
// Output:
// Output the minimum number of days in which he can eat all the sweets.

// Constraints
// 1≤N≤10000
// 1≤a[i]≤103
// Sample Input:
// 3
// 1 2 2
// Sample Output:
// 2


#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    
    int N;
    cin >>N;
    int A[N];
    map<int, int> h;
    for(int i = 0; i < N; ++i){
        cin >> A[i];
        h[A[i]]+=1;
    }
    int count = 0; 
    for(auto it: h){
        double res = ceil((double)it.second/2);
        count += res;
    }
    cout << count;
    return 0;
}