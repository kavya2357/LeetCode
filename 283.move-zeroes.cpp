/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        while(k<n){
            if(nums[k]==0){
                break;
            }
            else{
                k++;
            }
        }
        int i=k,j=k+1;
        while(i<n && j<n){
            if(nums[j]!=0){
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                i++;
            }
            else{
                j++;
            }
        }
    }
};
// @lc code=end

