class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        int target = 0;
        unordered_map<int,int>map;
        map[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            target = sum - k;
                if(map.find(target)!=map.end()){
                    count += map[target];
                }
            map[sum]++;
        }
        return count;
    }
};