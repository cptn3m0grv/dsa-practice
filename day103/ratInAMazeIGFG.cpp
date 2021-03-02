// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> findPath(int m[MAX][MAX], int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5
vector<string> v;

void dfs(int i, int j, string s, int m[MAX][MAX], int n, vector<vector<int>> &vis){
    if(i<0||j<0||i>=n||j>=n){ return;}
    if(m[i][j]==0||vis[i][j]==1){ return; }
    if(i==n-1&&j==n-1){
        v.push_back(s);
        return;
    }
    
    vis[i][j] = 1;
    
    dfs(i-1, j, s+'U', m, n, vis);
    dfs(i+1, j, s+'D', m, n, vis);
    dfs(i, j-1, s+'L', m, n, vis);
    dfs(i, j+1, s+'R', m, n, vis);
    
    vis[i][j] = 0;
}

vector<string> findPath(int m[MAX][MAX], int n){
    v.clear();
    vector<vector<int>> vis(MAX, vector<int>(MAX));
    if(m[0][0]==0){ return v; }
    if(m[n-1][n-1]==0){ return v; }
    string s = "";
    
    dfs(0, 0, s, m, n, vis);
    sort(v.begin(), v.end());
    return v;
}

