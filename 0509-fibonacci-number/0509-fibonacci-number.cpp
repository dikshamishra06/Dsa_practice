class Solution {
public:
int ans(int n){
    if(n ==0 || n==1) return n;
    int fibo = ans(n-2) + ans(n-1);
    return fibo;
}
    int fib(int n) {
        return ans(n);
    }
};