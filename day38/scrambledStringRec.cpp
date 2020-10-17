// Scramble String using Recursion
// Given a string s1, we may represent it as a binary tree by partitioning it to two non-empty substrings recursively.
// Below is one possible representation of A = “great”:

// To scramble the string, we may choose any non-leaf node and swap its two children.

// For example, if we choose the node “gr” and swap its two children, it produces a scrambled string “rgeat”.

// We say that “rgeat” is a scrambled string of “great”.

// Similarly, if we continue to swap the children of nodes “eat” and “at”, it produces a scrambled string “rgtae”.

// We say that “rgtae” is a scrambled string of “great”.


#include <bits/stdc++.h>
using namespace std;

bool solve(string a, string b){

    if(a.compare(b) == 0){
        return true;
    }
    if(a.length() <= 1){
        return false;
    }

    int n = a.length();
    bool flag = false; // assuming they are not scrambled


    for(int i = 1; i <= n-1; i++){
        if((solve(a.substr(0, i), b.substr(n-i, i)) && solve(a.substr(i, n-i), b.substr(0, n-i))) || (solve(a.substr(0, i), b.substr(0, i))) && solve(a.substr(i, n-i), b.substr(i, n-i)))){
            flag = true;
            break;
        }
    }

    return flag;

}

int main(){

    string a;
    string b;
    cin >> a >> b;

    if(a.length() != b.length() || (a.length() == 0 && b.length()==0)){
        return 0;
    }

    cout << solve(a, b) << endl;

    return 0;
}