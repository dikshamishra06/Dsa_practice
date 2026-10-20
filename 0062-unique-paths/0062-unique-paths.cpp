class Solution {
public:
int countPath(int m, int n,vector<vector<int>>& dp){
    if(m==0 || n==0) return 1;
    if(dp[m][n]!=0) return dp[m][n];
    dp[m][n] = countPath(m-1,n,dp) + countPath(m,n-1,dp);
    return dp[m][n];
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp (m,vector<int>(n,0));
        return countPath(m-1,n-1,dp);
    }
};