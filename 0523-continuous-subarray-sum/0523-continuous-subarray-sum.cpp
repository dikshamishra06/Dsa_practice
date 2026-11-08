class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        //if(n<=1) return false;
        unordered_map<int,int>map;
        map[0] = -1;
        int prefixSum = 0;
        for(int i=0;i<n;i++){
            prefixSum += nums[i];
            int r = prefixSum % k;
            if(map.find(r)!=map.end()){
                if(i-map[r]>=2) return true;
            }
            else map[r] = i;
        }
        return false;
    }
};