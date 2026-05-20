class Solution {
public:
double power(double x, long n, double ans){
    if(n<=0) return ans;
    if(n%2!=0) ans *= x;
    x *= x;
    n /= 2;
    return power(x,n,ans); 
}
    double myPow(double x, int n) {
        long exp = n;
        double ans = 1;
        if(n<0){
            x = 1/x;
            exp = -exp;
        }
        return power(x,exp,1);
    }
};