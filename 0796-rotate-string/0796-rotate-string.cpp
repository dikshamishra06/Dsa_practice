class Solution {
public:
    bool rotateString(string s, string goal) {
        // brute force //
        if(s.size()!=goal.size())return false;
        for(int i=0;i<s.size();i++){
            string res = s.substr(i) + s.substr(0,i);
            if(res == goal) return true;
        }
        return false;
    }
};