/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    unordered_map<char, string> mp{{'2',"abc"},{'3',"def"},{'4',"ghi"},
    {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int len=digits.size();
        if(len==0){
            return ans;
        }
        words(0,len,"",ans,digits);
        return ans;
    }
    void words(int i,int &len,string s,vector<string>&ans,string &digits){
        if(i==len){
            ans.push_back(s);
            return;
        }
        else{
            string letters=mp[digits[i]];
            for(int j=0;j<letters.size();j++){
                words(i+1,len,s+letters[j],ans,digits);
            }
        }
    }
};
// @lc code=end

