/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int prefix_sum=0;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            if(prefix_sum<0){
                prefix_sum+= ceil(abs(prefix_sum)*1.0/k)*k;
            }
            prefix_sum%=k;
            if(mp.find(prefix_sum)!=mp.end()){
                ans+=mp[prefix_sum];

            }
            mp[prefix_sum]++;
        }
        return ans;
    }
};
// @lc code=end

