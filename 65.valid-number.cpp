/*
 * @lc app=leetcode id=65 lang=cpp
 *
 * [65] Valid Number
 */

// @lc code=start
class Solution {
public:
    bool isNumber(string s) {
         if(s.empty()) return false;

        size_t i=0;
        if(s[i]=='+' || s[i]=='-'){
            i++;
        }
        bool integer_flag=false;
        while(i<s.size() && isdigit(s[i])){
            i++;
            integer_flag=true;
        }
        bool decimal_flag=false;
        if(i<s.size() && s[i]=='.'){
            i++;
            while(i<s.size() && isdigit(s[i])){
                i++;
                decimal_flag=true;
            }
        }
        if(i<s.size() && (s[i]=='e' || s[i]=='E')){
            i++;
            if(i<s.size() && (s[i]=='+' || s[i]=='-')) i++;

            if(i==s.size() || !isdigit(s[i])){
                return false;
            }
            while(i<s.size() && isdigit(s[i])){
                i++;
            }
        }
        return i==s.size() && (integer_flag || decimal_flag);
    }
};
// @lc code=end

