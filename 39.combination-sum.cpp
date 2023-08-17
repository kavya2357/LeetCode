/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void Sum(vector<int>& candidates,int target,vector<vector<int>>&res,vector<int>&v,int i){
        if(target==0){
            res.push_back(v);
            return;
        }else{
            
            while(i<candidates.size() && target-candidates[i]>=0){
                v.push_back(candidates[i]);
                Sum(candidates,target-candidates[i],res,v,i);
                i++;
                v.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<vector<int>>res;
        vector<int>v;
        Sum(candidates,target,res,v,0);
        return res;
    }
};
// @lc code=end

