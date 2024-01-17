/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&v,int start){
        ans.push_back(v);
        for(int i=start;i<nums.size();i++){
            v.push_back(nums[i]);
            helper(nums,ans,v,i+1);
            v.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(nums,ans,v,0);
        return ans;
    }
    }
};
// @lc code=end

