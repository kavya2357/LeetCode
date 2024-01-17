/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int idx){
        ans.push_back(temp);
        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i-1]==nums[i]) continue;
            temp.push_back(nums[i]);
            helper(nums,ans,temp,i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        helper(nums,ans,temp,0);
        return ans;
    }
    }
};
// @lc code=end

