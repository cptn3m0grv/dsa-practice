// Let's call a number ONO (Odd Not Odd) if the number is an odd but the sum of it's digits is not odd. E.g. 15, 1234567 . You will be given an integer number. Find out if it is possible to make the number ONO by deleting some(possibly zero) digits from the number. You can also shuffle the digits which will not count as a move.

// If it is possible then print the minimum number of digits you need to remove in order to make the number ONO . If it is not possible to make the number ONO then just print −1.

// Input:
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, one single integer N.
// Output:
// For each testcase, output in a single line minimum operation to make the number N Odd not Odd.

// Constraints
// 1≤T≤3000
// 2≤N≤10100
// Sample Input:
// 1
// 15
// Sample Output:
// 0
// N.B-
// The idea of ​​the statement is inspired by a problem whose link will be given in the editorial.
#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main()
{
    lld t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        lld i,n;
        lld k=0;
        for(i=0;i<s.length();i++)
        {
            if((s[i]-48)%2!=0)
            {
                k++;
            }
        }
        if(k==0||k==1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            if(k%2!=0)
            {
                cout<<1<<"\n";
            }
            else
            {
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}
