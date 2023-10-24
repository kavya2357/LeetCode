/*
 * @lc app=leetcode id=453 lang=cpp
 *
 * [453] Minimum Moves to Equal Array Elements
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            ans+=nums[i]-nums[0];
        }
        return ans;
    }
};
// @lc code=end

