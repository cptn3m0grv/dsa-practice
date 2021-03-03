class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i=0; int j=n-1; 
        while (i<j) {
            const bool vi = isVowel(s[i]);
            const bool vj = isVowel(s[j]);
            if (vi && vj) {
                swap(s[i++],s[j--]);
            } 
            else {
                if (!vi) i++;
                if (!vj) --j;
            }
        }
        return s;
    }
    
    bool isVowel(char ch) {
        switch(toLower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': return true;
            default: return false;
        }
    }
    
    char toLower(char ch) {
        return ch>= 'A' && ch<= 'Z' ? 'a' + (ch - 'A') : ch;
    }
};
