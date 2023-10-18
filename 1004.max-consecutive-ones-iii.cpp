/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxCnt=0;
        int start=0;
        int zerocount=0;
        for(int end=0;end<nums.size();end++){
            if(nums[end]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[start]==0){
                    zerocount--;
                }
                start++;
            }
            maxCnt=max(maxCnt,end-start+1);
        }
        return maxCnt;
    }
};
// @lc code=end

