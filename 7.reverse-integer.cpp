/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x){
         ans = ans*10 + x%10;
         x /= 10;    
        }
        if(ans > INT_MAX || ans< INT_MIN) return 0;  
        return (int)ans;
    }
};
// @lc code=end

