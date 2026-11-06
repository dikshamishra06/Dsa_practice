class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int area = 0;
        int i = 0;
        int j = n-1;
        while(i<j){
            int length = min(nums[i],nums[j]);
            int breath = j-i;
            area = max(area,(length*breath));
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return area;
    }
};