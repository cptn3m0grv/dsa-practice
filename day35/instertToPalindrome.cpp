// Minimum number of insertions to make a string palindrome
// Given a string, find the minimum number of characters to be inserted to form Palindrome string out of given string

// Examples:
// ab: Number of insertions required is 1. bab
// aa: Number of insertions required is 0. aa

#include <bits/stdc++.h>
using namespace std;

int minInsertion(string str1){
    int size = str1.length();
    string str2 = string(str1.rbegin(), str1.rend());

    int dp[size + 1][size + 1];

    for(int i = 0; i < size + 1; i++){
        for(int j = 0; j < size + 1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < size + 1; i++){
        for(int j = 1; j < size + 1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return (size - dp[size][size]);

}

int main(){
    string str;
    cin >> str;
    cout << "Insertions: " << minInsertion(str) << endl;
    return 0;
}