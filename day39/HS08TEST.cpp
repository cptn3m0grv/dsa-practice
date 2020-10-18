#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    FASTIO;
    
    int withdraw;
    float amount;
    cin >> withdraw >> amount;
    // assert(0 < withdraw && withdraw <= 2000);
    // assert(0 <= amount && amount <= 2000);

    if((float)withdraw <= amount - 0.50 && withdraw % 5 == 0){
        cout << fixed << setprecision(2) << amount-0.50-(float)withdraw;
    }else{
        cout << fixed << setprecision(2) << amount;
    }
    return 0;
}