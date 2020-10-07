// Minimum number of deletions and insertions to transform one string into another
// Given two strings ‘str1’ and ‘str2’ of size m and n respectively. The task is to remove/delete and insert minimum number of characters from/in str1 so as to transform it into str2. It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted to some another point.
// Example:
// Input : str1 = "geeksforgeeks", str2 = "geeks"
// Output : Minimum Deletion = 8
//          Minimum Insertion = 0 

#include <bits/stdc++.h>
using namespace std;

void stringConversion(char str1[], char str2[], int size_1, int size_2){
    int dp[size_1 + 1][size_2 + 1];
    int lcs;

    // Initialization
    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_2 + 1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    //finding the LCS
    for(int i = 1; i < size_1 + 1; i++){
        for(int j = 1; j < size_2 + 1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    lcs = dp[size_1][size_2];

    cout << "Deletions: " << (size_1 - lcs) << endl << "Insertions: " << (size_2 - lcs) << endl;

    return;
}

int main(void){

    int size_1, size_2;
    cin >> size_1 >> size_2;
    char str1[size_1 + 1];
    char str2[size_2 + 1];
    scanf("%s%s", str1, str2);
    stringConversion(str1, str2, size_1, size_2);

    return 0;
}