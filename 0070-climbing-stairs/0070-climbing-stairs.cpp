class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int prev0 = 2;
        int prev1 = 3;
        for(int i=4;i<=n;i++){
            int temp = prev0 + prev1;
            prev0 = prev1;
            prev1 = temp;
        }
        return prev1;
    }
};