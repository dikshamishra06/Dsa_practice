class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int start = -1;
        int end = -1;
        for(int i=0;i<n;i++){
            if(nums[i]==x){
                start = i;
                break;
            }
        }
        if(start!=-1){
            for(int i=n-1;i>=0;i--){
                if(nums[i]==x){
                    end = i;
                    break;
                }
            }
        }
        vector<int>ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};