/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);

        dp[0]=nums[0];
        

        for(int i=1;i<n;i++){
            int loot=nums[i];
            if(i>1){
                loot+=dp[i-2];
            }
            int noloot=dp[i-1];

            dp[i]=max(loot,noloot);
        }
        return dp[n-1];
    }
};
// @lc code=end

