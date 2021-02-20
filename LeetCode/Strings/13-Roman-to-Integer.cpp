class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        m['I'] = 1;
        m['V'] =   5;
        m['X'] =  10;
        m['L'] =  50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] =1000;
        
        int size = s.size();
        if(size<=1){
            return m[s[0]];
        }
        
        int i = 0;
        int res = 0;
        while(i<size){
            if(m[s[i]]<m[s[i+1]]){
                res = res + m[s[i+1]] - m[s[i]];
                i = i+2;
            }else{
                res = res + m[s[i]];
                ++i;
            }
        }
        return res;
    }
};
