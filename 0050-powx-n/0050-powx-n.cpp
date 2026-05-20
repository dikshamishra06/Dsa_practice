class Solution {
public:
    double myPow(double x, int n) {
        long exp = n;
        double ans = 1;
        if(n<0){
            x = 1/x;
            exp = -exp;
        }
        while(exp>0){
            if(exp%2!=0){
                ans *= x;
            }
            x *= x;
            exp /= 2;
        }
        return ans;
    }
};