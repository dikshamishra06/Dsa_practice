class Solution {
public:
int ways(int i, int j,vector<vector<int>>& dp){
    if(i==0 || j==0) return 1;
    if(dp[i][j]!=0) return dp[i][j];
    dp[i][j] = ways(i-1,j,dp) + ways(i,j-1,dp);
    return dp[i][j];
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        return ways(m-1,n-1,ans);
    }
};