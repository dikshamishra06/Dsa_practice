class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>map;
        map[0] = -1;
        int prefix = 0;
        for(int i=0;i<n;i++){
            prefix += nums[i];
            int r = prefix % k;
            if(map.find(r)!=map.end()){
                if(i-map[r]>=2) return true;
            }
            else{
                map[r] = i;
            }
        }
        return false;
    }
};