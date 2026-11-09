class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int nodelete = nums[0];
        int onedelete = INT_MIN;
        int res = nums[0];
        for(int i=1;i<n;i++){
            int prevnodelete = nodelete;
            int prevonedelete = onedelete;
            nodelete = max(prevnodelete + nums[i], nums[i]);
            int v ;
            if(prevonedelete == INT_MIN){
                v = nums[i];
            }
            else v = prevonedelete + nums[i];
            onedelete = max(v,prevnodelete);
            res = max(res,max(nodelete,onedelete));
        }
        return res;
    }
};