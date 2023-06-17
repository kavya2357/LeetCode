/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long num=x;
        long rev_no=0;
        if(x<0){
            return false;
        }
        else{
            while(x>0){
                
                rev_no=rev_no*10+(x%10);
                x=x/10;
            }
            return num==rev_no;
        }
    }
};
// @lc code=end

