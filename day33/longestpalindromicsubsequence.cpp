// Longest Palindromic Subsequence
// Given a sequence, find the length of the longest palindromic subsequence in it.
// Example :
// Input:"bbbab"
// Output:4

// Reverse the string to make string b and apply LCS

#include <bits/stdc++.h>
using namespace std;

int LPS(string str1){
    
    int size_1 = str1.length();
    string str2 = string(str1.rbegin(), str1.rend());

    int dp[size_1 + 1][size_1 + 1];

    // Initialization
    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_1 + 1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    // LCS
    for(int i = 1; i < size_1 + 1; i++){
        for(int j = 1; j < size_1 + 1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[size_1][size_1];

}

int main(){
    string str;
    cin >> str;
    cout << LPS(str) << endl;
}