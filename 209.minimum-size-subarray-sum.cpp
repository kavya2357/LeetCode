/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0, r=0;
        int sum=0, len=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            if(sum<target){
                r++;
            }else{
                while(sum>=target){
                    len=min(len,r-l+1);
                    sum-=nums[l];
                    l++;
                }
                r++;
            }
            
        }
        if(len==INT_MAX) return 0;
        return len;
    }
};
// @lc code=end

