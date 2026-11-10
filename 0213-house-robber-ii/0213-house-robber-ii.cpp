class Solution {
public:
int getMoney(vector<int>& nums,int st,int n){
    if(n==1) return nums[st];
    int prev1 = nums[st];
    int prev2 = max(nums[st],nums[st+1]);
    for(int i=st+2;i<n;i++){
        int temp = max(prev2, prev1 + nums[i]);
        prev1 = prev2;
        prev2 = temp;
    }
    return prev2;
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        int case1 = getMoney(nums,0,n-1);
        int case2 = getMoney(nums,1,n);
        int ans = max(case1,case2);
        return ans;
    }
};