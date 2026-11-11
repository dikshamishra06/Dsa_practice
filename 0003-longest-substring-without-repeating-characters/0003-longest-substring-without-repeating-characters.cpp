class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>map;
        int l = 0;
        int leng = 0;
        for(int r=0;r<n;r++){
            map[s[r]]++;
            while(map[s[r]]>1){
                map[s[l]]--;
                if(map[s[l]]==0) map.erase(s[l]);
                l++;
            }
            leng = max(leng,r-l+1);
        }
        return leng;
    }
};