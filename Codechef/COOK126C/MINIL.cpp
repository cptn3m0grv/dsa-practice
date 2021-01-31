// You are given a grid with N rows (numbered 1 through N) and M columns (numbered 1 through M). Each cell of this grid contains either water or land. The initial state of the grid is described by strings S1,S2,…,SN; for each valid i and j, the j-th character of Si is '.' if the cell in the i-th row and j-th column initially contains water or '*' if this cell initially contains land.

// A maximal group of connected land cells (by moving between side-adjacent land cells) is called an island.

// You may perform any number of operations (including zero). In one operation, you should choose one cell of the grid and convert it either to a land cell or to a water cell. Find the smallest number of operations required to maximise the number of islands in the grid.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and M.
// N lines follow. For each valid i, the i-th of these lines contains a single string Si with length M.
// Output
// For each test case, print a single line containing one integer ― the smallest number of operations required to maximise the number of islands.

// Constraints
// 1≤T≤1,000
// 2≤N,M≤10
// S1,S2,…,SN contain only characters '.' and '*'
// Example Input
// 2
// 2 2
// ..
// *.
// 2 4
// *..*
// *.*.
// Example Output
// 1
// 2
// Explanation
// Example case 1: The largest number of islands is 2 and it can be achieved by converting one cell from water to land. The resulting grid is

// .*
// *.
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve(){
    int N, M;
    cin>>N>>M;
    
    char A[N][M];
    
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin>>A[i][j];
        }
    }
    
    int tot=N*M, ans1=0, ans2=0;
    
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if((i+j)%2==0&&A[i][j]!='*'){
                ++ans1;
            }else if((i+j)%2==1&&A[i][j]!='.'){
                ++ans1;
            }
        }
    }
    
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if((i+j)%2==0&&A[i][j]!='.'){
                ++ans2;
            }else if((i+j)%2==1&&A[i][j]!='*'){
                ++ans2;
            }
        }
    }
    
    if(tot%2==0){
        cout<<min(ans1,ans2)<<"\n";
    }else{
        cout<<ans1<<"\n";
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