#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    sort(s.begin(), s.end());
    do{
        ++count;        
    }while(next_permutation(s.begin(), s.end()));
    cout << count << "\n";
    do{
        cout << s <<"\n";
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}