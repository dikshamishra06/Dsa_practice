class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1) return nums;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int count = 1;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                count++;
            }
            else {
                if(count>n/3) ans.push_back(nums[i-1]);
                count = 1;
            }
        }
        if(count > n/3) ans.push_back(nums[n-1]);
        return ans;
    }
};