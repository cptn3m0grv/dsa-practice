class Solution {
public:
    bool isPalindrome(int x) {
        int neg = 0;
        if(x<0){
            return false;
        }
        string ans;
        while(x){
            ans.push_back((x%10)+'0');
            x/=10;
        }
        int i = 0;
        int j = ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            ++i; --j;
        }
        return true;
    }
};
