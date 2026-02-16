class Solution {
public:
bool ispossible(vector<int>&nums,int barrier,int sub){
    int n = nums.size();
    int s = 1;
    int subsum = 0;
    for(int i=0;i<n;i++){
        if(nums[i]>barrier) return false;
        else if(nums[i]+subsum>barrier){
            s++;
            subsum = nums[i];
        }
        else subsum += nums[i];
    }
    if(s>sub) return false;
    return true;
}
int minele(vector<int>&nums){
    int min = INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<min) min = nums[i];
    }
    return min;
}
int sumofarr(vector<int>&nums){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }
    return sum;
}
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = minele(nums);
        int high = sumofarr(nums);
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(ispossible(nums,mid,k)==true){
                ans = mid;
                high = mid -1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};