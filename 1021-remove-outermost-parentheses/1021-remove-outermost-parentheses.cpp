class Solution {
public:
    string removeOuterParentheses(string s) {
        int level = 0;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(level>0) ans.push_back('(');
                level++;
            }
            else {
                level--;
                if(level>0) ans.push_back(')');
            }
        }
        return ans;
    }
};