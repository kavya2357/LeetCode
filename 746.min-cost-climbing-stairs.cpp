/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int helper(vector<int>&cost,int idx,int n,vector<int>&dp){
        if(idx>=n) return 0;
        if(idx==n-1 || idx==n-2) return cost[idx];

        if(dp[idx]!=-1) return dp[idx];
        int one=cost[idx]+helper(cost,idx+1,n,dp);
        int two=cost[idx]+helper(cost,idx+2,n,dp);

        return dp[idx]=min(one,two);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(helper(cost,0,n,dp),helper(cost,1,n,dp));
    }
};
// @lc code=end

