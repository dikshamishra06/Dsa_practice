class Solution {
public:
int maxSum(vector<int>& nums){
    int n = nums.size();
    int bestEnding = nums[0];
    int ans = nums[0];
    for(int i=1;i<n;i++){
        bestEnding = max(bestEnding+nums[i], nums[i]);
        ans = max(ans, bestEnding);
    }
    return ans;
}
int minSum(vector<int>& nums){
    int n = nums.size();
    int bestEnding = nums[0];
    int ans = nums[0];
    for(int i=1;i<n;i++){
        bestEnding = min(bestEnding+nums[i], nums[i]);
        ans = min(ans, bestEnding);
    }
    return ans;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSumOfArray = 0;
        for(int i=0;i<n;i++){
            totalSumOfArray += nums[i];
        }
        int maxSumSubarray = maxSum(nums);
        int minSumSubarray = minSum(nums);
        int m1 = maxSumSubarray;
        int m2 = totalSumOfArray - minSumSubarray;
        int ans =  max(m1, m2);
        if(m1<0) return m1;
        else return ans;
    }
};