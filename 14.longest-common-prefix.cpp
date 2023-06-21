/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
      return "";

    for (int i = 0; i < strs[0].length(); ++i)
      for (int j = 1; j < strs.size(); ++j)
        if (i == strs[j].length() || strs[j][i] != strs[0][i])
          return strs[0].substr(0, i);

    return strs[0];
    }
};
// @lc code=end

