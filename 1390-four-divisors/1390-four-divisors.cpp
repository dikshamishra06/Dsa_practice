class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            int count = 0;
            int s = 0;
            for(int j=1;j<=sqrt(nums[i]);j++){
                if(nums[i]%j==0){
                    count++;
                    s += j;
                    if(j != nums[i]/j) {
                        s += nums[i]/j;
                        count++;
                    }
                }
                if(count>4) break;
            }
            if(count==4) sum += s;
        }
        return sum;
    }
};