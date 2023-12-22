/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        int ind=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[ind-2]){
                nums[ind]=nums[i];
                ind++;
            }
        }
        return ind;
    }
};
// @lc code=end

