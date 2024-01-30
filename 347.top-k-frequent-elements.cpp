/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        return a.second < b.second;   
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(&Solution::comp)>pq(&Solution::comp);
        for(auto it:mp){
            pq.push(it);
        }
        
        while(k--){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};
// @lc code=end

