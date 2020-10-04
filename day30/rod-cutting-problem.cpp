/* ROD CUTTING PROBLEM
* This problem is based on unbonded knapsack
*Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the  maximum value
*obtainable by cutting up the rod and selling the pieces. 
*Example: 
*if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable value is 22 (by cutting in two 
*pieces of lengths 2 and 6)
*
*
*length   | 1   2   3   4   5   6   7   8  
*--------------------------------------------
*price    | 1   5   8   9  10  17  17  20
*/

#include <bits/stdc++.h>
using namespace std;

int rodCutting(int lengthArr[], int price[], int size, int length){
    int dp[size+1][length+1];

    for(int i = 0; i < size+1; i++){
        for(int j = 0; j < length+1; j++){
            if(i == 0  ||  j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 1; i < size+1; i++){
        for(int j = 1; j < length+1; j++){
            if(lengthArr[i-1] <= j){
                dp[i][j] = max(price[i-1] + dp[i][j-lengthArr[i-1]], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[size][length];
}

int main(){
    int size, length;
    cin >> size >> length;
    int lengthArr[size];
    int price[size];
    for(int i = 0; i < size; i++){
        cin >> lengthArr[i];
    }
    for(int i = 0; i < size; i++){
        cin >> price[i];
    }

    cout << rodCutting(lengthArr, price, size, length) << endl;
    return 0;
}