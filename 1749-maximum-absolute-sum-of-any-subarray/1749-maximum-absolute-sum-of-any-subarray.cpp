class Solution {
public:
int maxSumSubarray(vector<int>& nums){
    int n = nums.size();
    int best = nums[0];
    int ans = nums[0];
    for(int i=1;i<n;i++){
        int v1 = nums[i];
        int v2 = best + nums[i];
        best = max(v1,v2);
        ans = max(ans,best);
    }
    return ans;
}
int minSumSubarray(vector<int>& nums){
    int n = nums.size();
    int best = nums[0];
    int ans = nums[0];
    for(int i=1;i<n;i++){
        int v1 = nums[i];
        int v2 = best + nums[i];
        best = min(v1,v2);
        ans = min(ans,best);
    }
    return ans;
}
    int maxAbsoluteSum(vector<int>& nums) {
        int maxVal = maxSumSubarray(nums);
        int minVal = minSumSubarray(nums);
        int ans = max(abs(maxVal), abs(minVal));
        return ans;
    }
};