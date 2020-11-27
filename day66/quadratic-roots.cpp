// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
       vector<int> V;
        double D = floor((b*b)-(4*a*c));
        if(D<0){
            V.push_back(-1);
            return V;
        }
        double X = floor(((-1*b)+(sqrt(D)))/(2*a));
        double Y = floor(((-1*b)-(sqrt(D)))/(2*a));
        // cout << X << " " << Y << " " << D;
        V.push_back(X);
        V.push_back(Y);
        sort(V.begin(), V.end(), greater<int>());
        return V;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends