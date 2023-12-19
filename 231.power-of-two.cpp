/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;

        int ones=__builtin_popcount(n);
        if(ones==1) return true;
        return false;
    }
};
// @lc code=end

