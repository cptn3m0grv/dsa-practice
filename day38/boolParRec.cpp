#include <bits/stdc++.h>
using namespace std;
int solve(string s, int i, int j, bool isTrue){
    
    if(i > j){
        return true;
    }
    if(i == j){
        if(isTrue == true){
            return s[i] == 'T';
        }else{
            return s[i] == 'F';
        }
    }

    int ans;

    for(int k = i+1; k <= j-1; k=k+2){
        int lT = solve(s, i, k-1, true);
        int lF = solve(s, i, k-1, false);
        int rT = solve(s, k+1, j, true);
        int rF = solve(s, k+1, j, false);

        if(s[k] == '&'){
            if(isTrue){
                ans = ans + lT * rT;
            }else{
                ans = ans + (lT * rF) + (lF * rT) + (lF * rF);
            }
        }else if(s[k] == '|'){
            if(isTrue){
                ans = ans + (lT * rF) + (lF * rT) + (rT * lT);
            }else{
                ans = ans + (lF * rF);
            }
        }else if(s[k] == '^'){
            if(isTrue){
                ans = ans + (lT * rF) + (rF * lT);
            }else{
                ans = ans + (lT * rT) + (rF * lF);
            }
        }

    }

    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << solve(s, 0, s.length()-1, true) << endl;
    return 0;
}