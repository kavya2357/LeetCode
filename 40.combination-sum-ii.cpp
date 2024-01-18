/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        void Sum(vector<int>& candidates,int target,vector<vector<int>>&res,vector<int>&v,int idx){
        if(target==0){
            res.push_back(v);
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            v.push_back(candidates[i]);
            Sum(candidates,target-candidates[i],res,v,i+1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>>res;
        vector<int>v;
        Sum(candidates,target,res,v,0);
        return res;
    }
    }
};
// @lc code=end

