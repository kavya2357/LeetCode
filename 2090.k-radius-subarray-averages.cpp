/*
 * @lc app=leetcode id=2090 lang=cpp
 *
 * [2090] K Radius Subarray Averages
 */

// @lc code=start
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int ws=2*k+1;
        vector<int>avg(n,-1);

        if(n<ws){
            return avg;
        }
        
        vector<long long int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        for(int i=k;i<n-k;i++){
            avg[i]=(prefix[i+k+1]-prefix[i-k])/ws;
        }
        
        
        return avg;
    }
};
// @lc code=end

