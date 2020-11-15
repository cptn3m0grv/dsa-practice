#include <bits/stdc++.h>
using namespace std;

vector<pair<int, string>> v;
int n, score;
string s;
int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s;
        cin >> score;
        v.push_back({-score, s});
    }
    sort(v.begin(), v.end());
    for(auto i: v){
        cout << i.second << " " << -i.first << "\n";
    }
    return 0;
}