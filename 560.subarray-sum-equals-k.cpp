/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        int sum=0;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};
// @lc code=end

