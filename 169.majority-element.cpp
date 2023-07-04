/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;int ele;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                count=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};
// @lc code=end

