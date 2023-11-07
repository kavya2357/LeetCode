/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        while(n>0){
            n--;
            int dist=n%26;
            n/=26;
            res+=((char)('A'+dist));
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
// @lc code=end

