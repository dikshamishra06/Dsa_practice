class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int ans = nums[0];
        for(int i=1;i<n;i++){
            int v1 = nums[i];
            int v2 = maxProduct * nums[i];
            int v3 = minProduct * nums[i];
            maxProduct = max(v1, max(v2,v3));
            minProduct = min(v1, min(v2,v3));
            ans = max(ans, max(maxProduct,minProduct));
        }
        return ans;
    }
};