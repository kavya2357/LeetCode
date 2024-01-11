/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int paths(vector<vector<int>>&grid,int n,int m,int i,int j,vector<vector<int>>&dp){
        if (i == 0 && j == 0 && grid[0][0] == 1) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m || grid[i][j]==1 || grid[n-1][m-1]==1) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j]=paths(grid,n,m,i+1,j,dp)+paths(grid,n,m,i,j+1,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int res=paths(obstacleGrid,n,m,0,0,dp);
        return res;
    }
};
// @lc code=end

