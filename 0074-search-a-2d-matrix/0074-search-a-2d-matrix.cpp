//byy binary search //
class Solution {
public:
bool checktarget(vector<int>& matrix,int n, int target){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(matrix[mid]==target) return true;
        else if(matrix[mid]<target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();   // no. of rows
        int n = matrix[0].size(); // no. of columns
        for(int i=0;i<m;i++){
            if(matrix[i][0]<=target && target<=matrix[i][n-1]){
               if(checktarget(matrix[i],n,target)==true) return true;
            }
        }
        return false;
    }
};