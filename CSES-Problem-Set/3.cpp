// Repetitions

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int count = 0, c = 0;
    char l = 'A';
    for(char d: s){
        if(d == l){
            ++c;
            count = max(c, count);
        }else{
            l = d;
            c = 1;
        }
    }

    cout << count ;

}