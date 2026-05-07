class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int zero = 0;
        int maxlength = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            if(zero>k){
                if(nums[left]==0) zero--;
                left++;
            }
            maxlength = max(maxlength,i-left+1);
        }
        return maxlength;
        //return n-left;
    }
};