class Solution {
public:
int midCheck(vector<int>& nums, int low, int high, int target){
    if(high<low) return -1;
    int mid = low + (high-low)/2;
    if(nums[mid]==target) return mid;
    if(nums[mid]<target) return midCheck(nums,mid+1,high,target);
    return midCheck(nums,low,mid-1,target);
}
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        return midCheck(nums,low,high,target);
    }
};