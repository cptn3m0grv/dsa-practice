class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(auto c: s){
            if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9')){
                ans.push_back(c);
            }
        }
        
        int size = ans.size();
        if(size==1){
            return true;
        }
        for(int i=0;i<size;++i){
            if(ans[i]>='A'&&ans[i]<='Z'){
                ans[i]=ans[i]+32;
            }
        }
        
        int i=0;
        int j = size-1;
        
        while(i<=j){
            if(ans[i]!=ans[j]){
                return false;
            }
            ++i; --j;
        }
        
        return true;
    }
};
