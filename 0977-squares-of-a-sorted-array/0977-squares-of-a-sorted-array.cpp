class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                a.push_back(nums[i]*nums[i]);
            }
            else b.push_back(nums[i]*nums[i]);
        }
        if(b.size()==0) return a;
        reverse(b.begin(),b.end());
        if(a.size()==0) return b;
        int i = 0;
        int j = 0;
        int idx = 0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                nums[idx] = a[i];
                i++;
                idx++;
            }
            else {
                nums[idx] = b[j];
                j++;
                idx++;
            }
        }
        while(i<a.size()){
            nums[idx] = a[i];
            i++;
            idx++;
        }
        while(j<b.size()){
            nums[idx] = b[j];
            j++;
            idx++;
        }   
        return nums;
    }
};