class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int maxwater = INT_MIN;
        int i = 0;
        int j = n-1;
        while(i<j){
            int width = j-i;
            int heigth = min(nums[i],nums[j]);
            maxwater = max(maxwater,(width*heigth));
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return maxwater;
    }
};