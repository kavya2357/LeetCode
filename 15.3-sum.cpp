/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int ans=nums[i]+nums[j]+nums[k];
                if(ans==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(ans>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto it:s){
            res.push_back(it);
        }
        return res;
    }
};
// @lc code=end

