/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        vector<string>v;
        set<string>st;

        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }

        if(v.size()!=pattern.size()){
            return false;
        }

        for(int i=0;i<pattern.size();i++){
            if(mp.count(pattern[i])==0 && st.count(v[i])==0){
                mp[pattern[i]]=v[i];
                st.insert(v[i]);
            }
            else{
                if(mp[pattern[i]]!=v[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

