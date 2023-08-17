/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void backtrack(int idx,vector<int>& nums,vector<vector<int>>& res){
        if(idx==nums.size()){
            res.push_back(nums);
        }else{
            for(int i=idx;i<nums.size();i++){
                swap(nums[idx],nums[i]);
                backtrack(idx+1,nums,res);
                swap(nums[idx],nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(0,nums,res);
        return res; 
    }
};
// @lc code=end

