class Solution {
public:
int maxSum(vector<int>& nums){
    int n = nums.size();
    int bestEnding = nums[0];
    int ans = nums[0];
    for(int i=1;i<n;i++){
        int v1 = bestEnding + nums[i];
        int v2 = nums[i];
        bestEnding = max(v1,v2);
        ans = max(ans,bestEnding);
    }
    return ans;
}
int minSum(vector<int>& nums){
    int n = nums.size();
    int bestEnding = nums[0];
    int ans = nums[0];
    for(int i=1;i<n;i++){
        int v1 = bestEnding + nums[i];
        int v2 = nums[i];
        bestEnding = min(v1,v2);
        ans = min(ans,bestEnding);
    }
    return ans;
}
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxSubarraySum = abs(maxSum(nums));
        int minSubarraySum = abs(minSum(nums));
        int ans = max(maxSubarraySum, minSubarraySum);
        return ans;
    }
};