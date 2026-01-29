class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxcount = 0;
        int idx = -1;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count > maxcount){
                maxcount = count;
                idx = nums[i];
            }
        }
        return idx;
        
    }
};