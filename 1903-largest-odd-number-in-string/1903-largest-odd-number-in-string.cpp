class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size();
        string res = "";
        while(i>=0){
            int a = (int)num[i];
            if(a%2!=0){
                res += num.substr(0,i+1); 
                break;
            }
            else i--;
        }
        return res;
    }
};