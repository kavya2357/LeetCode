/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int start=0,end=0;
        int len,max_len=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            len=r-l-1;
            if(len>max_len){
                max_len=len;
                start=l+1;
                end=r-1;
            }
        }

        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            len=r-l-1;
            if(len>max_len){
                max_len=len;
                start=l+1;
                end=r-1;
            }
        }
        return s.substr(start,max_len);
    }
};
// @lc code=end

