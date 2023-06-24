/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0,maxLen=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                len++;
                maxLen=max(maxLen,len);
            }
            else{
                len=0;
            }
        }
        return maxLen;
    
    }
};
// @lc code=end

