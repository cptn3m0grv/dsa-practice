// Given two strings X and Y, print the shortest string that has both X and Y as subsequences. If multiple shortest supersequence exists, print any one of them.

// Examples:

// Input: X = "AGGTAB",  Y = "GXTXAYB"
// Output: "AGXGTXAYB" OR "AGGXTXAYB" 
// OR Any string that represents shortest
// supersequence of X and Y

// Input: X = "HELLO",  Y = "GEEK"
// Output: "GEHEKLLO" OR "GHEEKLLO"
// OR Any string that represents shortest 
// supersequence of X and Y

#include <bits/stdc++.h>
using namespace std;

void printSCS(string str1, string str2){
    int size_1 = str1.length();
    int size_2 = str2.length();

    int dp[size_1 + 1][size_2 + 1];

    // Initialization
    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_2 + 1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    // LCS
    for(int i = 1; i < size_1 + 1; i++){
        for(int j = 1; j < size_2 + 1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    vector<char> V;
    int i = size_1;
    int j = size_2;

    while(i > 0 && j > 0){
        if(str1[i-1] == str2[j-1]){
            V.push_back(str1[i-1]);
        }else{
            if(dp[i][j-1] > dp[i-1][j]){
                V.push_back(str2[j-1]);
                j--;
            }else if(dp[i-1][j] > dp[i][j-1]){
                V.push_back(str1[i-1]);
                i--;
            }
        }
    }

    while(i > 0){
        V.push_back(str1[i-1]);
        i--;
    }

    while(j > 0){
        V.push_back(str2[j-1]);
        j--;
    }

    reverse(V.begin(), V.end());

    for(char d: V){
        printf("%c", d);
    }

    printf("\n");

}

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    printSCS(str1, str2);
    return 0;
}