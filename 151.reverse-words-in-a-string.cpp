/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss >> word){
            words.push_back(word);
        }
        string res="";
        for(int i=words.size()-1;i>0;i--){
            res=res+words[i]+" ";  
        }
        
        return res+words[0];
    }
};
// @lc code=end

