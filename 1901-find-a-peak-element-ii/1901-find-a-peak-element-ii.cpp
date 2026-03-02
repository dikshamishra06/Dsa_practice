class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int max = INT_MIN;
        int idxi = -1 , idxj = -1;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]>max) {
                    max = mat[i][j];
                    idxi = i;
                    idxj = j;
                }
            }
        }
        vector<int>ans;
        ans.push_back(idxi);
        ans.push_back(idxj);
        return ans;
    }
};