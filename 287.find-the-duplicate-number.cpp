/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;int ans;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                ans= nums[i];
            }else{
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};
// @lc code=end

