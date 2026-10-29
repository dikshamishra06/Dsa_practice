class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int l = 0;
        unordered_map<int,int>map;
        for(int r=0;r<n;r++){
            map[nums[r]]++;
            if(map.size()>2){
                map[nums[l]]--;
                if(map[nums[l]]==0){
                    map.erase(nums[l]);
                }
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};