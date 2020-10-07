#include <bits/stdc++.h>
using namespace std;

void LPS(string str1){
    
    int size_1 = str1.length();
    string str2 = string(str1.rbegin(), str1.rend());

    int dp[size_1 + 1][size_1 + 1];
    int mx = INT_MIN;
    int mxI = INT_MIN;
    int mxJ = INT_MIN;

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
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_1 + 1; j++){
            mx = max(mx, dp[i][j]);
        }
    }

    for(int i = 0; i < size_1 + 1; i++){
        for(int j = 0; j < size_1 + 1; j++){
            if(dp[i][j] == mx){
                mxI = i;
                mxJ = j;
                break;
            }
        }
    }


    vector<char> V;
    int i = mxI;
    int j = mxJ;

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
    for(char l: V){
        printf("%c", l);
    }

}

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        string str;
        cin >> str;
        LPS(str);
        printf("\n");
    }
    return 0;
}