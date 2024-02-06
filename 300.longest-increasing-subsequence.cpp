/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int helper(vector<int>&nums, int idx,int n,int prev,vector<vector<int>>&dp){
        if(idx==n){
            return 0;
        }
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
        int not_take=0+helper(nums,idx+1,n,prev,dp);
        int take=0;
        if(prev==-1 || nums[idx]>nums[prev]){
            take=1+helper(nums,idx+1,n,idx,dp);
        }
        return dp[idx][prev+1]=max(take,not_take);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return helper(nums,0,n,-1,dp);
    }
};
// @lc code=end

