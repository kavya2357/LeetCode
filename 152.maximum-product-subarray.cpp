/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suf=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre*=nums[i];
            suf*=nums[nums.size()-i-1];
            ans=max(ans,max(pre,suf));
        }
        return ans;
    }
};
// @lc code=end

