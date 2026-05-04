class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int totalwater = 0;
        int maxleft = height[0];
        int maxright = height[n-1];
        int left = 0;
        int right = n-1;
        while(left<right){
            if(maxleft<maxright){
                left++;
                maxleft = max(maxleft,height[left]);
                totalwater += maxleft - height[left];
            }
            else{
                right--;
                maxright = max(maxright, height[right]);
                totalwater += maxright - height[right];
            }
        }
        return totalwater;
    }
};