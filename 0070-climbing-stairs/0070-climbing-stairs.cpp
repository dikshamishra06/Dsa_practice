class Solution {
public:
int countWays(vector<int>& v, int n){
    if(n<=3) return n;
    if(v[n]!=0){
        return v[n];
    }
    return v[n] = countWays(v,n-1) + countWays(v,n-2);
}
    int climbStairs(int n) {
        vector<int>ans(n+1);
        return countWays(ans,n);
    }
};