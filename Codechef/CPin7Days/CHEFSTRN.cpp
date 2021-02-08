// Bob favorite Data structure is String. He take a string and decided to reduce string as much as possible by doing a series of operations. In each operation, he select a pair of adjacent same letters and delete them.

// Note: If the final string is empty, return Empty String.

// Input:
// A single string, s.
// Output:
// Return the resulting string.

// Constraints
// 1≤lengthofs≤100
// Sample Input 1:
// aaabccddd
// Sample Output 1:
// abd
// EXPLANATION:
// Perform the following sequence of operations to get the final string:

// aaabccddd → abccddd → abddd → abd

// Sample Input 2:
// aa
// Sample Output 2:
// Empty String
// EXPLANATION:
// Perform the following sequence of operations to get the final string:

// aa → Empty String
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
        string s;
        cin>>s;
        int size = s.size();
        for(int i=0;i<size-1;){
            if(s[i]==s[i+1]){
                s.erase(i, 2);
                i=0;
            }else{
                ++i;
            }
            
            if(s.size()==0){
                break;
            }
        }
        
        
        if(s.size()==0){
            cout<<"Empty String";
        }else{
            cout << s;
        }
        cout << "\n";
}

int main(){
    fastio;
    int t=1; 
    while(t--){
        solve();
    }
    return 0;
}
