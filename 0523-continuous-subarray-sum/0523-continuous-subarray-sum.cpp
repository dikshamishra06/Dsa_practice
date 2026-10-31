class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefixSum = 0;
        unordered_map<int,int>map;
        map[0] = -1;
        for(int i=0;i<n;i++){
            prefixSum += nums[i];
            int rem = prefixSum % k;
            if(map.find(rem)!=map.end()){
                if(i-map[rem]>=2) return true;
            }
            else map[rem] = i;
        }
        return false;
    }
};