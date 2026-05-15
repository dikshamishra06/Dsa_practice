class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int left = 0;
            for(int j=0;j<=i-1;j++){
                left += nums[j];
            }
            int right = 0;
            for(int k=i+1;k<n;k++){
                right += nums[k];
            }
            if(left == right) return i;
        }
        return -1;
    }
};