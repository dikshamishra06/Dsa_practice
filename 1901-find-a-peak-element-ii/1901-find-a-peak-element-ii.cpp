class Solution {
public:
int maxele(vector<vector<int>>& mat, int n, int mid){
    int max = INT_MIN;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(mat[i][mid]>max) {
            max = mat[i][mid];
            idx = i;
        }
    }
    return idx;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>ans;
        int low = 0; 
        int high = m-1;
        while(low <= high){
            int mid = (low+high)/2;
            int row = maxele(mat,n,mid);
            int left = -1;
            if(mid-1>=0) left = mat[row][mid-1];
            int right = -1;
            if(mid+1<m) right = mat[row][mid+1];
            
            if(left<mat[row][mid] && mat[row][mid]>right) {
                return {row,mid};
            }
            else if(mat[row][mid]<left) high = mid - 1;
            else low = mid + 1; 
        }
        return {-1,-1};
    }
};