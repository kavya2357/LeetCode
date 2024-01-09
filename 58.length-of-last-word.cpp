/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        bool flag=0;
        //trim(s);
        for(int i=s.size()-1;i>=0;i--){
            if(flag && s[i]==' '){
                return len;
            }
            if(s[i]!=' '){
                flag=1;
                len++;
            }
        }
        return len;
    }
};
// @lc code=end

