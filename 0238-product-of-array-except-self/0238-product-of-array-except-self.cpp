class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        ans[0] = 1;
        //prefix product logic //
        for(int i=1;i<n;i++){
            ans[i] = nums[i-1] * ans[i-1];
        }
        int rightProduct = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] = ans[i] * rightProduct;
            rightProduct *= nums[i];
        }
        return ans;
    }
};