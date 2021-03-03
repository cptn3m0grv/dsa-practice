class Solution {
public:
    string reverseWords(string s) {
        vector<string> V;
        string temp;
        for(int i=0; i<s.size(); ++i){
            if(s[i]==' '&&temp.size()>0){
                V.push_back(temp);
                temp.clear();
                continue;
            }else if(s[i]==' '&&temp.size()==0){
                continue;
            }
            temp.push_back(s[i]);
        }
        if(temp.size()>0){
            V.push_back(temp);
        }
        reverse(V.begin(), V.end());
        s.clear();
        for(int i=0; i<V.size(); ++i){
            s += V[i];
            if(i!=V.size()-1){
               s.push_back(' '); 
            }
        }
        return s;
    }
};
