// Alisha has a string of length n. Each character is either 'a', 'b' or 'c'. She has to select two characters s[i] and s[j] such that s[i] != s[j] and i,j are valid indexes. She has to find the maximum value of the absolute difference between i and j i.e abs(i-j) .

// Since Alisha is busy with her Semester exams help her find the maximum distance where distance is the maximum value of absolute difference between i and j i.e abs(i-j) .

// Input:
// The first and the only line contains the string s with each character either 'a', 'b', or 'c'.
// Output:
// Print a single integer the maximum absolute difference between i and j.

// Constraints
// 1≤n≤105
// s[i] can either be 'a', 'b' or 'c'.
// Subtasks
// 40 points : 1≤n≤100
// 60 points : 1≤n≤105
// Sample Input1:
// aabcaaa
// Sample Output1:
// 4
// Sample Input2:
// aba
// Sample Output2:
// 1

// gfg article for similar problem if you don't understand my answer
// https://www.geeksforgeeks.org/program-to-find-the-maximum-difference-between-the-index-of-any-two-different-numbers/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    fastio;
    
    string s;
    cin >> s;
    int size = s.size();
    
    int idx1 = 0;
    for(int i = size-1; i>0; --i){
        if(s[i]!=s[0]){
            idx1 = i; //i-0 = i
            break;
        }
    }
    
    
    int idx2 = 0;
    for(int i =0; i < size-1; ++i){
        if(s[size-1]!=s[i]){
            idx2 = size-1-i;
            break;
        }
    }
    
    cout << max(idx1, idx2);
    
    return 0;
}