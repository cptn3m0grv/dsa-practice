#include <bits/stdc++.h>
using namespace std;

void printLCS(char str1[], char str2[], int size_1, int size_2){
    int dp[size_1 + 1][size_2 + 1];

    // Initialization
    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_2 + 1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    //Filling the top-down matrix
    for(int i = 1; i < size_1 + 1; i++){
        for(int j = 1; j < size_2 + 1; j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // creating a vector to store elements of subsequence
    vector<char> V;
    int i = size_1;
    int j = size_2;

    while(i > 0 && j > 0){
        if(str1[i-1] == str2[j-1]){
            V.push_back(str1[i-1]);
            i--;
            j--;
        }else{
            if(dp[i][j-1] > dp[i-1][j]){
                j--;
            }else{
                i--;
            }
        }
    }

    reverse(V.begin(), V.end());
    
    for(char a: V){
        printf("%c", a);
    }

}

int main(){
    int size_1, size_2;
    cin >> size_1 >> size_2;
    char str1[size_1 + 1];
    char str2[size_2 + 1];
    scanf("%s%s", str1, str2);
    printLCS(str1, str2, size_1, size_2);
    printf("\n");
    return 0;
}