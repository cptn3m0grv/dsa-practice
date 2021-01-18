// Since Valentine's day is approaching, so Ritik wants to buy roses for his girfriend. He goes to a flower shop to buy roses. There are n roses kept in a line. Each rose has a happiness content related to it. Ritik can only buy continuous sections of the roses or else he wont buy anything. Find the Maximum happiness content that he can buy.

// INPUT:

// The first line contains the number of test cases t.

// Next 2t lines contain :

// a number n i.e the number of roses

// The next line contains n numbers i.e the happiness content of these roses

// OUTPUT:

// For each test case print the maximum happiness content he can buy.

// CONSTRAINTS:

// 1 < = t < = 1000

// 1 < = n < =1000

// -100000 < = a[i] < = 100000

// EXAMPLE:

// INPUT:

// 1

// 8

// -2 -3 4 -1 -2 1 5 -3

// OUTPUT:

// 7

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int A[N];
        for(int i = 0; i < N; ++i){
            cin >> A[i];
        }
        int msf = 0;
        int meh = 0;
        
        for(int i = 0; i < N; ++i){
            meh = meh + A[i];
            if(msf < meh){
                msf = meh;
            }
            if(meh < 0){
                meh = 0;
            }
        }
        
        cout << msf << "\n";
    }
    return 0;
}