/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;int r=s.length()-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return (isPalindrome(s,l+1,r) || isPalindrome(s,l,r-1));
            }
        }
        return true;
    }
};
// @lc code=end

