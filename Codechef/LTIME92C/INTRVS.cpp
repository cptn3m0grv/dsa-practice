// Ashishgup wants to conduct interviews to hire people to work for him. He decided to automate the interview process to save time. The server asks N problems to the interviewee and stores the amount of time a candidate takes to solve each problem. More formally, the data is stored as an array A, where the i-th integer Ai denotes the time (in seconds) the candidate took to solve the i-th problem.
// Note that Ai = −1 denotes that the candidate was not able to solve the i-th problem at all. Can you help Ashish automate the process by writing a code to find the verdict of the interview?

// The verdict can be one of the following:

// Rejected: If the number of problems that the candidate solved is strictly less than ceil(N/2).
// Too Slow: If candidate is not Rejected and candidate took more than K seconds to solve at least one problem among the problems solved by the candidate.
// Bot: If candidate is neither Rejected nor Too Slow, but has solved all of the N problems in at most one second each.
// Accepted: If the candidate is neither Rejected, Too Slow, nor Bot, she is Accepted.
// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space separated integers - N and K respectively.
// The second line of each test case contains N space separated integers - A1,A2,…,AN.
// Output
// For each testcase, output a single line containing the verdict of the interview.
// The judge is case-insensitive so if the answer is Accepted then any one of accepted, aCCepted, ACCEPTED, etc will be considered as a correct answer.
// Constraints
// 1≤T≤104
// 6≤N≤100
// 30≤K≤60
// −1≤Ai≤120
// Subtasks
// 100% points - Original constraints
// Example Input
// 5
// 7 30
// -1 0 4 -1 -1 40 -1
// 6 30
// 1 0 1 1 1 0
// 6 44
// 1 1 1 1 -1 0
// 7 31
// 2 3 42 -1 -1 -1 4
// 6 60
// 1 -1 0 60 -1 -1
// Example Output
// Rejected
// Bot
// Accepted
// Too Slow
// Accepted
// Explanation
// Example case 1: There are N=7 problems but candidate was able to solve only 3 of them which is less than ceil(N/2) and hence the verdict is Rejected.

// Example case 2: The candidate solved all the problems and took at most 1 second to answer each one of them. Hence the verdict is Bot.

// Example case 3: The candidate solved 5 out of N=6 problems. The verdict is not Too Slow as K=44. The verdict is also not Bot because candidate couldn't solve all of the N=6 problems. Hence the verdict is Accepted.

// Example case 4: The candidate solved 4 out of N=7 problems but took 42 seconds to answer the 3-rd problem which is more more than K=31. Hence the verdict is Too Slow.

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
    int N, K;
    cin>>N>>K;
    
    vector<int> A(N);
    for(int i=0;i<N;++i){
        cin>>A[i];
    }
    
    bool rejected=false, tooSlow=false, bot=false;
    int n = 0, count=0;
    for(int i=0;i<N;++i){
        if(A[i]!=-1){
            n++;
        }
        
        if(A[i]==1||A[i]==0){
            count++;
        }
        
        if(A[i]>K){
            tooSlow=true;
        }
    }
    if((int)ceil((double)N/2)>n){
        rejected=true;
    }
    
    if(count==N){
        bot=true;
    }
    
    if(rejected){
        cout<<"Rejected\n";
    }else if(tooSlow){
        cout<<"Too Slow\n";
    }else if(!tooSlow&&!rejected&&bot){
        cout<<"Bot\n";
    }else{
        cout<<"Accepted\n";
    }
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