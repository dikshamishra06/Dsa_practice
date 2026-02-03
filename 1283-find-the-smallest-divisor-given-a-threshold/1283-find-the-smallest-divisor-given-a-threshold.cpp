class Solution {
public:
bool check(vector<int>& nums,int mid, int threshold){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum +=  ceil((double)nums[i]/(double)mid);
    }
    if(sum<=threshold) return true;
    else return false;
}
int getmax(vector<int>& nums){
    int m = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>m) m = nums[i];
    }
    return m;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = getmax(nums);
        int divisor = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(check(nums,mid,threshold)==true){
                divisor = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return divisor;
    }
};