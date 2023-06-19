/*
 * @lc app=leetcode id=2405 lang=cpp
 *
 * [2405] Optimal Partition of String
 */

// @lc code=start
class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>word;
        int i=0,minCount=0;
        while(i<s.size()){
            minCount++;
            while(i<s.size() && word.find(s[i])==word.end()){
                word.insert(s[i]);
                i++;
            }
            word.clear();
        }
        return minCount;
    }
};
// @lc code=end

