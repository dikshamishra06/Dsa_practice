class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        int i=0, j=0, k=0;
        vector<int> ans(n);
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]) {
                ans[k++] = nums1[i++];
            }
            else ans[k++] = nums2[j++];
        }
        while(i<nums1.size()){
            ans[k++] = nums1[i++];
        }
        while(j<nums2.size()){
            ans[k++] = nums2[j++];
        }
        if(n%2==0) return (double)(ans[n/2] + ans[n/2-1])/2;
        else return (double)ans[n/2];
    }
};