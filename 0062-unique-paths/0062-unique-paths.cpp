class Solution {
public:
int countWays(int row, int col, vector<vector<int>>& dp){
    if(row==0 || col==0){ 
        return 1;
    }    
    if(dp[row][col]!=0){
        return dp[row][col];
    }
    dp[row][col] =  countWays(row-1, col,dp) + countWays(row,col-1,dp);
    return dp[row][col];
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n));
        return countWays(m-1,n-1,dp);
    }
};