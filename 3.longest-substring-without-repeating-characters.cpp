/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        set<char>word;
        int start=0,end=0;
        while(start<s.length()){
            if(word.find(s[start])==word.end()){
                len=max(start-end+1,len);
                word.insert(s[start]);
                start++;
            }
            else{
                word.erase(s[end]);
                end++;
            }
        }
        return len;
    }
};
// @lc code=end

