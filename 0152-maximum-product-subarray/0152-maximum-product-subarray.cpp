class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int maxproduct = 0;
        for(int i=0;i<n;i++){
            int product = 1;
            for(int j=i;j<n;j++){
                product *= nums[j];
                if(product>maxproduct) maxproduct = product;
            }
        }
        return maxproduct;
    }
};