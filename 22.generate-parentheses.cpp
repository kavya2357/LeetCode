/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        generate(n,0,0,s,ans);
        return ans;
    }

    void generate(int n,int open,int closed,string s,vector<string>&ans){
        if(open==n && closed==n){
            ans.push_back(s);
        }
        else{
            if(open<n){
                generate(n,open+1,closed,s+'(',ans);
            }
            if(closed<open){
                generate(n,open,closed+1,s+')',ans);
            }
        }
    }
};
// @lc code=end

