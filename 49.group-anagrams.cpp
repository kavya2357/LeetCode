/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;

        unordered_map<string,vector<string>>mp;
        
        for(auto x:strs){
            string word=x;
            sort(word.begin(),word.end());
            mp[word].push_back(x);
        }

        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};
// @lc code=end

