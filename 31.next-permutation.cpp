/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx1=0;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                idx1=i;
                break;
            }
        }
        
        if(idx1==0){
            reverse(nums.begin(),nums.end());
        }
        else{

            for(int i=n-1;i>=idx1;i--){
                if(nums[i]>nums[idx1-1]){
                    swap(nums[idx1-1],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+idx1,nums.end());
        }
    }
};
// @lc code=end

