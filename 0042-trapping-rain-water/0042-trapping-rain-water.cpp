class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int left = 0, right = n-1;
        int leftMax = height[0], rightMax = height[n-1];
        while(left < right){
            if(leftMax < rightMax){
                left++;
                leftMax = max(leftMax,height[left]);
                water += leftMax - height[left];
            }
            else{
                right--;
                rightMax = max(rightMax,height[right]);
                water += rightMax - height[right];
            }
        }
        return water;
    }
};