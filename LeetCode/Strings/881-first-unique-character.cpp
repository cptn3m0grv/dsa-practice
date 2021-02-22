class Solution {
public:
    int firstUniqChar(string s) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int f[26] = {0};
        for(auto ch: s){
            ++f[ch-'a'];
        }
        for(int i=0;i<s.size();++i){
            if(f[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};

