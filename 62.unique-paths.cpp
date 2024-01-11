/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int paths(int m,int n,int i,int j,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1) return 1; //base case-1
        if(i>=m || j>=n) return 0;  //base case-2

        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=paths(m,n,i+1,j,dp)+paths(m,n,i,j+1,dp);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int res=paths(m,n,0,0,dp);
        return res;
    }
};
// @lc code=end

