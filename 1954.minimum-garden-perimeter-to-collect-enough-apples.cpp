/*
 * @lc app=leetcode id=1954 lang=cpp
 *
 * [1954] Minimum Garden Perimeter to Collect Enough Apples
 */

// @lc code=start
class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long cnt=0;
        long long sum=0;
        while(sum<neededApples){
            cnt++;
            sum+=12*cnt*cnt;
        }
        return cnt*8;
    }
};
// @lc code=end

