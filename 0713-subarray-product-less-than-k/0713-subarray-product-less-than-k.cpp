class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int count = 0;
        int product = 1;
        for(int i=0;i<n;i++){
            product *= nums[i];
            if(product>=k){
                product /= nums[left];
                left++;
            }
            count += i-left+1;
        }
        return count;
    }
};