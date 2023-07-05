/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        if(nums.size()==0){
            return 0;
        }
        for(int x:nums){
            s.insert(x);
        }
        int cur_ele,len,max_len=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cur_ele=nums[i];
            len=0;
            if(s.find(cur_ele-1)==s.end()){
                while(s.find(cur_ele)!=s.end()){
                    cur_ele++;
                    len++;
                }
                max_len=max(max_len,len);
            }
            
        }
        return max_len;
    }
};
// @lc code=end

