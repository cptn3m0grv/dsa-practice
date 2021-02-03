// Plum wants to buy video games with her pocket money. The video game store has an offer. The cost of the first game is ‘p’, and every subsequent game will cost ‘i’ less than the previous one. After the cost is equal to ‘m’, every game will cost the same (m). If Plum’s pocket money is given as input, output the number of games she can buy.

// Input:
// The first and only line contains 4 integers - p, i, m, and r (r being the pocket money of Plum).

// Output:
// Print one line: The number of games she can buy.

// Sample Input:
// 20 3 6 80

// Sample Output:
// 6

// Explanation:
// With a budget of 80, you can buy 6 games at a cost of 20+17+14+11+8+6. A game for an additional 6 units exceeds the budget.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    
    int p, i, m, r;
    cin>>p>>i>>m>>r;

    int count=0;

    while(r-p>=0){
        r -= p;
        count++;
        p -= i;
        if(p<=m){
            p=m;
            i=0;
        }
        
    }
    cout<<count<<"\n";
    
    return 0;
}