// Alice and Bob are childhood friends. Due to COVID-19 the government imposed lockdown across the country. So, they have limited quantity of food with them. In food they have only bread of size l x b. So, they decided to cut bread into identical pieces such that each piece is square. Alice decided that she will take the square having maximum possible side length as she do some workout so she needs more energy.

// Note: There will be no left over piece of bread.

// Input:
// First line will contain T, number of testcases. Then the testcases follow.
// Each line contains two space separated integers l and b which denote length and breadth of the bread.
// Output:
// T lines, each containing an integer that denotes the number of squares of maximum size, when the bread is cut as per the given condition.

// Constraints
// 1≤T≤1000
// 1≤l,b≤1000
// Sample Input:
// 2
// 2 2
// 6 9
// Sample Output:
// 1
// 6
// EXPLANATION:
// The 1st testcase has a bread whose original dimensions are 2 x 2, the bread is uncut and is a square. Hence the answer is 1.

// The 2nd testcase has a bread of size 6 x 9. We can cut it into 54 squares of size 1 x 1, 6 of size 3 x 3. For other sizes we will have leftovers. Hence, the number of squares of maximum size that can be cut is 6.

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
        int l, b;
        cin>>l>>b;
        int g = __gcd(l, b);
        int ans = (l*b)/(g*g);
        cout<<ans;
        cout << "\n";
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}