class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> map;
        map[0] = 1;
        int count = 0;
        int prefixSum = 0;
        for(int i=0;i<n;i++){
            prefixSum += nums[i];
            if(map.find(prefixSum-k)!=map.end()){
                count += map[prefixSum - k];
            }
            map[prefixSum]++;
        }
        return count;
    }
};