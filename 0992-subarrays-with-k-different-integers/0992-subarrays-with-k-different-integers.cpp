class Solution {
public:
int getCount(vector<int>& nums, int k){
    int n = nums.size();
        int count = 0;
        int l = 0;
        unordered_map<int,int>map;
        for(int r=0;r<n;r++){
            map[nums[r]]++;
            while(map.size()>k){
                map[nums[l]]--;
                if(map[nums[l]]==0) map.erase(nums[l]);
                l++;
            }
            count += r-l+1;
        }
        return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return getCount(nums,k) - getCount(nums,k-1);
    }

};