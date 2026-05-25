class Solution {
public:
int check(vector<int>& nums,int l, int r, int target){
    if(l>r) return -1;
    int mid = l+(r-l)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) return check(nums,mid+1,r,target);
    return check(nums,l,mid-1,target);
}
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0; 
        int r = n-1;
        return check(nums,l,r,target);
    }
};