/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
    void helper(int n,int k,int i,vector<vector<int>>&res,vector<int>&temp){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        for(int j=i;j<=n;j++){
            temp.push_back(j);
            helper(n,k,j+1,res,temp);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        helper(n,k,1,res,temp);
        return res;
    }
};
// @lc code=end

