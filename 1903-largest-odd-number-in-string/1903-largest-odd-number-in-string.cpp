class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0){
            int a = num[i]-'0';
            if(a%2!=0){
                return num.substr(0,i+1); 
            }
            else i--;
        }
        return "";
    }
};