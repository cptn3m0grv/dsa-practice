#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int romanToInt(string s){
    map<char, int> rmap;
    rmap['I'] =   1;
	rmap['V'] =   5;
	rmap['X'] =  10;
	rmap['L'] =  50;
	rmap['C'] = 100;
	rmap['D'] = 500;
	rmap['M'] =1000;
	
	int number = 0, i = 0;

    if(s.size()<=1){
        return rmap[s.at(0)];
    }else{
        while(i < s.size()){
            if(rmap[s[i]]<rmap[s[i+1]]){
                number = number + rmap[s[i+1]] - rmap[s[i]];
                i+=2;
            }else{
                number += rmap[s[i]];
                ++i;
            }
        }
        return number;
    }
}

int main(){
    fastio;
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        int ans = romanToInt(s);
        
        cout << ans  << "\n";
        
    }
    return 0;
}