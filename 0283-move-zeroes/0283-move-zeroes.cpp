class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1) return;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=i;j<n;j++){
                    if(nums[j]!=0){
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }
        return ;
    }
};