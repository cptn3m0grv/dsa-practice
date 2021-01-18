// Rohit is developing a hash function for his custom hashmap. He wants to find all the prime numbers between two given numbers so that he can use them as a key for his custom hashmap. Since he is busy with some other task, Help him to find all the prime numbers between two given numbers.

// Input

// The input begins with the number t of test cases in a single line (t<=10).

// In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

// Output

// For every test case print all prime numbers p such that m <= p <= n, in one line.

// Example

// Input:

// 2

// 1 10

// 3 5

// Output:

// 2 3 5 7

// 3 5
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if (a <= 2) {
            a = 2;
            if (b >= 2) {
                cout << a << " ";
                a++;
            }
        }
        if (a % 2 == 0)
            a++;
     
        for (int i = a; i <= b; i = i + 2) {
     
            bool flag = 1;
     
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
     
            if (flag == 1)
                cout << i << " ";
        }
        cout << "\n";
    }
 
    return 0;
}