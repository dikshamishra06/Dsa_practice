class Solution {
public:
    int minCostClimbingStairs(vector<int>& nums) {
        int n = nums.size();
        if(n==0||n==1) return 0;
        int prev1 = 0;
        int prev2 = 0;
        for(int i=2;i<n+1;i++){
            int temp = min((prev2 + nums[i-1]),(prev1 + nums[i-2]));
            prev1 = prev2;
            prev2 = temp;
        }
        return prev2;
    }
};