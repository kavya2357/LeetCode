/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:
    bool check(string s,int start,int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void helper(string &s,vector<vector<string>>&res,vector<string>&temp,int idx){
        if(idx==s.size()){
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(check(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                helper(s,res,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>temp;
        helper(s,res,temp,0);
        return res;
    }
};
// @lc code=end

