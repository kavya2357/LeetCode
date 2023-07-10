/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i+nums[i]>=index){
                index=i;
            }
        }
        if(index==0) return true;
        return false;
    }
};
// @lc code=end

