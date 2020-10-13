// Palindrome Partitioning using Recursion
// Given a string, a partitioning of the string is a palindrome partitioning if every substring of the partition is a palindrome. 
// Example:
//   “aba|b|bbabb|a|b|aba” is a palindrome partitioning of “ababbbabbababa”.

#include <bits/stdc++.h>
using namespace std;

bool isPal(string s, int i, int j){

      if(i >= j) return true;

      while(i < j){
          if(s[i] != s[j]) return false;
          i++;
          j--;
      }

      return true;  

}

int solve(string s, int i, int j){
    
    if(i >= j || isPal(s, i, j)){
        return 0;
    }

    int ans = 2147483647;
    
    for(int k = i; k < j; k++){

        int temp = 1 + solve(s, i, k) + solve(s, k+1, j);
        
        if(temp < ans){
            ans = temp;
        }
    
    }

    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << solve(s, 0, s.length()-1) << endl;
    return 0;
}