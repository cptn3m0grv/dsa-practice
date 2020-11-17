// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    
    // Your code here
    
    if(c.size()!=d.size()){
        return false;
    }
    int count = 0;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    for(int i = 0; i < c.size(); ++i){
        if(c[i]==d[i]){
            ++count;
        }
    }
    
    return (count==c.size());
}



// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends