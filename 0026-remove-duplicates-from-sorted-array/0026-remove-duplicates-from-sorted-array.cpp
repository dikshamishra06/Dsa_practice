class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int i = 0;
        int j = 0;
        while(j<n){
            if(nums[i]!=nums[j]){
                count++;
                nums[i+1] = nums[j];
                i++;
            }
            j++;
        }
        return count;
    }
};