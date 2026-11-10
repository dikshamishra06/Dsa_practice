class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int s1 = 2;
        int s2 = 3;
        for(int i=4;i<=n;i++){
            int temp = s1 + s2;
            s1 = s2;
            s2 = temp;
        }
        return s2;
    }
};