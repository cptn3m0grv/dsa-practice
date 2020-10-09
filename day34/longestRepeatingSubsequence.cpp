#include <bits/stdc++.h>
using namespace std;

int repeatingSequence(string str1){
    string str2 = str1;
    int size_1 = str1.length();
    int size_2 = str2.length();

    int dp[size_1 + 1][size_2 + 1];

    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_2 + 1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < size_1 + 1; i++){
        for(int j = 1; j < size_2 + 1; j++){
            if(str1[i-1] == str2[j-1] && i != j){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[size_1][size_2];

}

int main(){
    string str;
    cin >> str;
    printf("%d\n", repeatingSequence(str));
    return 0;
}