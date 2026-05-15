class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        vector<int>v;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            v.push_back(sum); 
        }
        right = v[v.size()-1];
        for(int i=0;i<n;i++){
            int t = right - v[i];
            if(t==left) {
                return i;
            }
            left = v[i];
        }
        return -1;
    }
};