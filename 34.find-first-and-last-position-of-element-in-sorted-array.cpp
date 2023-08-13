/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        if(nums.empty()) return ans;
        int low=0,high=nums.size()-1;
        if(nums[0]==target){
            ans[0]=0;
        }
        else
        {while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target && target!=nums[mid-1]){
                ans[0]=mid;
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }}
        low=0,high=nums.size()-1;
        if(nums[high]==target){
            ans[1]=high;
        }
        else
        {while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target && target!=nums[mid+1]){
                ans[1]=mid;
                break;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }}
        return ans;
    }
};
// @lc code=end

