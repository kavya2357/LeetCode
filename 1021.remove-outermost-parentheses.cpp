/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' && st.empty()){
                st.push(s[i]);
            }
            else if(s[i]=='('){
                st.push(s[i]);
                res+=s[i];
            }
            else{
                st.pop();
                if(st.size()){
                    res+=s[i];
                }
            }
        }
        return res;
    }
};
// @lc code=end

