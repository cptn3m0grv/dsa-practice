// Chef and Divyam are playing a game with the following rules:

// First, an integer X! is written on a board.
// Chef and Divyam alternate turns; Chef plays first.
// In each move, the current player should choose a positive integer D which is divisible by up to Y distinct primes and does not exceed the integer currently written on the board. Note that 1 is not a prime.
// D is then subtracted from the integer on the board, i.e. if the integer written on the board before this move was A, it is erased and replaced by A−D.
// When one player writes 0 on the board, the game ends and this player wins.
// Given X and Y, determine the winner of the game.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers X and Y.
// Output
// For each test case, print a single line containing the string "Chef" if Chef wins the game or "Divyam" if Divyam wins (without quotes).

// Constraints
// 1≤T≤106
// 1≤X,Y≤106
// Subtasks
// Subtask #1 (5 points): Y=1
// Subtask #2 (10 points):

// 1≤T≤102
// 1≤X≤6
// Subtask #3 (85 points): original constraints

// Example Input
// 3
// 1 2
// 3 1
// 2021 42
// Example Output
// Chef
// Divyam 
// Divyam
// Explanation
// Example case 1: Since D=1 is divisible by 0 primes, Chef will write 0 and win the game in the first move.

// Example case 2: Chef must choose D between 1 and 5 inclusive, since D=6 is divisible by more than one prime. Then, Divyam can always choose 6−D, write 0 on the board and win the game.



/*********************************************************8
 * 
 * LOGIC
 * The logic is pretty simple, if the number of prime divisor of X! is strictly greater than Y, then Divyam Wins or else the chef
 * I used seive to find all the primes
 * and then used dp to store the count of prime number a particular integer is divisible by.
 * 
 * Since the constraints for test cases were too high, each input had to be dealt in O(1) time only.
 * 
 * */

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define mXm 1000006
bool prime[mXm];
int dp[mXm];

void seive(){
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=mXm; p++){
        if (prime[p] == true){
            for (ll i=p*p; i<=mXm; i += p)
                prime[i] = false;
        }
    }
}

void dpCount(){
    for(int i=6;i<=mXm;++i){
        if(prime[i]){
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=dp[i-1];
        }
    }
}

void solve(){
        int X, Y;
        cin>>X>>Y;
        
        if(dp[X]>Y){
            cout<<"Divyam";
        }else{
           cout<<"Chef"; 
        }        
        
        cout << "\n";
}

int main(){
    fastio;
    seive();
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=2;
    dp[4]=2;
    dp[5]=3;
    dpCount();
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
