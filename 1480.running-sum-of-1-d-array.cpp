/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int sum=0;
        if(n==0) return ans;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
// @lc code=end

