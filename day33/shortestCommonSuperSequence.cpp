// Shortest Common Supersequence
// Given two strings str1 and str2, find the shortest string that has both str1 and str2 as subsequences.
// Examples:

// Input:   str1 = "geek",  str2 = "eke"
// Output: 5 ("geeke")
// shortest common supersequence = size_1 + size_2 - LCS

#include <bits/stdc++.h>
using namespace std;

int superSequence(char str1[], char str2[], int size_1, int size_2){
    int dp[size_1 + 1][size_2 + 1];

    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_2 +1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < size_1 + 1; i++){
        for(int j = 1; j < size_2 + 1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }


    return (size_1 + size_2 - dp[size_1][size_2]);
}

int main(){
    int size_1, size_2;
    cin >> size_1 >> size_2;
    char str1[size_1 + 1];
    char str2[size_2 + 1];
    scanf("%s%s", str1, str2);
    cout << superSequence(str1, str2, size_1, size_2) << endl;
    return 0;
}