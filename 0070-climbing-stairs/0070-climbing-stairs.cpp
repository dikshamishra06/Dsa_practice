class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int s2 = 2;
        int s3 = 3;
        for(int i=4;i<=n;i++){
            int temp = s3 + s2;
            s2 = s3;
            s3 = temp;
        }
        return s3;
    }
};