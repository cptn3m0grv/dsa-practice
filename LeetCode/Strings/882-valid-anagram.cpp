class Solution {
public:
    bool isAnagram(string s, string t) {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        
        int fs[26] = {0};
        int ft[26] = {0};
        
        for(auto ch: s){
            ++fs[ch-'a'];
        }
        
        for(auto ch: t){
            ++ft[ch-'a'];
        }
        
        for(int i=0;i<26;++i){
            if(fs[i]!=ft[i]){
                return false;
            }
        }
        
        return true;
    }
};
