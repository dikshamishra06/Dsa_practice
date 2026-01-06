class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        string s1 = strs[0];
        for(int i=1;i<strs.size();i++){
            string s2 = strs[i];
            string s;
            if(s1.size()<s2.size()) s = s1;
            else s = s2;
            string r = "";
            for(int j=0;j<s.size();j++){
                if(s1[j]==s2[j]){
                    r += s2[j];
                }
                else break;
            }
            if(!r.empty()) {
                res = r;
                s1 = res;
            }    
            else {
                res = "";
                break;
            }   
        }
        return res;
    }
};