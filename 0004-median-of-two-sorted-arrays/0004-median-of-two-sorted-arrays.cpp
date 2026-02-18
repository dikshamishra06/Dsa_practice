class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;
        int i = 0;
        int j = 0;
        int count = 0;
        int indx2 = n/2;
        int indx1 = indx2 - 1;
        int indxele1 = -1;
        int indxele2 = -1;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(count==indx1) indxele1 = nums1[i];
                if(count==indx2) indxele2 = nums1[i];
                i++;
                count++;
            }
            else {
                if(count==indx1) indxele1 = nums2[j];
                if(count==indx2) indxele2 = nums2[j];
                j++;
                count++;
            }    
        }
        while(i<n1){
            if(count==indx1) indxele1 = nums1[i];
                if(count==indx2) indxele2 = nums1[i];
                i++;
                count++;
        }
        while(j<n2){
            if(count==indx1) indxele1 = nums2[j];
            if(count==indx2) indxele2 = nums2[j];
            j++;
            count++;
        }
        if(n%2==0) return double((double)(indxele1 + indxele2)/2.0);
        else return double(indxele2);
    }
};