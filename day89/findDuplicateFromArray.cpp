// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    // code here
    vector<int> V;
    for(int i=0; i<n; ++i){
        int ind = a[i] % n;
        a[ind] += n;
    }
    
    for(int i=0; i<n; ++i){
        if(a[i]/n > 1){
            V.push_back(i);
        }
    }
    
    if(V.size()==0)
        V.push_back(-1);
        return V;
        
    return V;
}

