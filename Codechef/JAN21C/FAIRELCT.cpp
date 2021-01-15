// Elections are coming soon. This year, two candidates passed to the final stage. One candidate is John Jackson and his opponent is Jack Johnson.

// During the elections, everyone can vote for their favourite candidate, but no one can vote for both candidates. Then, packs of votes which went to the same candidate are formed. You know that for John Jackson, there are N packs containing A1,A2,…,AN votes, and for Jack Johnson, there are M packs containing B1,B2,…,BM votes.

// The winner is the candidate that has strictly more votes than the other candidate; if both have the same number of votes, there is no winner. You are a friend of John Jackson and you want to help him win. To do that, you may perform the following operation any number of times (including zero): choose two packs of votes that currently belong to different candidates and swap them, i.e. change the votes in each of these packs so that they would go to the other candidate.

// You are very careful, so you want to perform as few swaps as possible. Find the smallest number of operations you need to perform or determine that it is impossible to make John Jackson win.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and M.
// The second line contains N space-separated integers A1,A2,…,AN.
// The third line contains M space-separated integers B1,B2,…,BM.
// Output
// For each test case, print a single line containing one integer ― the smallest number of swaps needed to make John Jackson win, or −1 if it is impossible.

// Constraints
// 1≤T≤103
// 1≤N,M≤103
// 1≤Ai≤106 for each valid i
// 1≤Bi≤106 for each valid i
// the sum of N over all test cases does not exceed 104
// the sum of M over all test cases does not exceed 104
// Subtasks
// Subtask #1 (20 points):

// A1=A2=…=AN
// B1=B2=…=BM
// Subtask #2 (80 points): original constraints

// Example Input
// 2
// 2 3
// 2 2
// 5 5 5
// 4 3
// 1 3 2 4
// 6 7 8
// Example Output
// 2
// 1
// Explanation
// Example case 1: We can perform two swaps ― each time, we swap a pack of 2 votes from A and a pack of 5 votes from B. After that, John Jackson gets 5+5=10 votes and Jack Johnson gets 2+2+5=9 votes.

// Example case 2: We can swap the pack of 1 vote from A and the pack of 8 votes from B. After that, John Jackson gets 8+3+2+4=17 votes and Jack Johnson gets 6+7+1=14 votes.

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    
    int t;
    cin >> t;
    
    while(t--){
        int N, M;
        cin >> N >> M;
        int A[N], B[M];
        int sumA = 0;
        int sumB = 0;
        for(int i = 0; i < N; ++i){
            cin >> A[i];
            sumA += A[i];
        }
        for(int i = 0; i < M; ++i){
            cin >> B[i];
            sumB+=B[i];
        }
        int temp;
        int count = 0;
        bool flag = true;
        while(accumulate(A, A+N, 0)<=accumulate(B, B+M, 0)){
            sort(A, A+N);
            sort(B, B+M);
            if(A[0]<B[M-1]){
                temp = B[M-1];
                B[M-1] = A[0];
                A[0] = temp;
                count = count + 1;
            }else{
                flag = false;
                cout << "-1\n";
                break;
            }
        }
        if(flag){
            cout << count << "\n";
        }
        
    }
    return 0;
}