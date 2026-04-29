class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int maxwater = INT_MIN;
        int i = 0;
        int j = n-1;
        while(i<j){
            int length = j-i;
            int water = 0;
            if(nums[i]<nums[j]){
                water = nums[i]*length;
                i++;
            }
            else{
                water = nums[j]*length;
                j--;
            }
            length--;
            maxwater = max(maxwater,water);
        }
        return maxwater;
    }
};