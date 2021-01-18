// Sonal and Mamta are two friends and want to buy some chocolates which are sold at price z rupees per chocolate. Sonal has x rupees, mamta has y rupees. Each girl will buy as many chocolates as she can using only her money. This way each girl will buy an integer non-negative number of chocolates. The girls discussed their plans and found that the total number of chocolates they buy can increase (or decrease) if one of them gives several rupees to the other girl. The rupee can't be split in parts, so the girls can only exchange with integer number of rupees.( 0.665 or 67.67 rupees not possible)

// Consider the following example - Suppose sonal has 5 rupees, mamta has 4 rupees, and the price for one chocolate be 3 rupees. If the girls don't exchange with rupees, they will buy 1+1=2 chocolates. However, if, for example, mamta gives sonal one rupee, then sonal will have 6 rupees, mamta will have 3 rupees, and the girls will buy 2+1=3 chocolates.

// It is not that easy to live without chocolate now, so sonal and Mamta want to exchange with rupees in such a way that they will buy the maximum possible number of chocolates. Nobody wants to have a debt, so among all possible ways to buy the maximum possible number of chocolates find such a way that minimizes the number of rupees one girl gives to the other (it is not important who will be the person giving the rupees).

// Input: First Line is the number of test cases t

// Next T Lines Contain three integers x, y and z (0 =< x, y <= 10^18, 1 =< z <= 10^18) - the number of rupees Sonal has, the number of rupees Mamta has and the price of a chocolate each.

// Output ;

// For each test case, Print two integers: the maximum possible number of chocolate the girls can buy and the minimum number of rupees one girl has to give to the other.

// Examples-

// Input :

// 1

// 5 4 3

// Output :

// 3 1

// Input :

// 1

// 6 8 2

// Output :

// 7 0

// Note-

// The first example is described in the statement. In the second example the optimal solution is to not exchange any rupees. The girls will buy 3+4=7 chocolates.
//


#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        ll X, Y, Z;
        cin >> X >> Y >> Z;
        ll res = 0, tfr = 0;
        if(X%Z + Y%Z >= Z){
            res = 1;
            tfr = Z - max(X%Z, Y%Z);
        }
        res = res + X/Z + Y/Z;
        cout << res << " " << tfr << "\n";
    }
    return 0;
}
