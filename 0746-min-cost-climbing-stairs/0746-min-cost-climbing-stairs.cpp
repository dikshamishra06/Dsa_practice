class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 1)
            return cost[0];
        int prev2 = 0;
        int prev1 = 0;
        for (int i = 2; i <= n; i++) {
            int jump1 = prev1 + cost[i - 1];
            int jump2 = prev2 + cost[i - 2];
            int temp = min(jump1, jump2);
            prev2 = prev1;
            prev1 = temp;
        }
        return prev1;
    }
};