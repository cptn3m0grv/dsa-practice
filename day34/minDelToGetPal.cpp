// Minimum number of deletions to make a string palindrome
// Given a string of size ‘n’. The task is to remove or delete minimum number of characters from the string so that the resultant string is palindrome.
// Examples :

// Input : aebcbda
// Output : 2
// Remove characters 'e' and 'd'
// Resultant string will be 'abcba'
// which is a palindromic string

#include <bits/stdc++.h>
using namespace std;

int minDel(string str1){

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
    int test;
    scanf("%d", &test);
    while(test--){
        string str;
        cin >> str;
        printf("Minimum number of deletions to convert the input string into a palindrome: %d\n", minDel(str));
    }
    return 0;
}