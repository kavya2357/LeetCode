/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        
        int i=0;
        while(i<path.length()){
            if(path[i]=='/'){
                i++;
                continue;
            }
            else{
                string temp="";
                while(i<path.length() && path[i]!='/'){
                    temp+=path[i];
                    i++;
                }
                if(temp==".") {
                    continue;
                }
                else if(temp==".."){
                    if(!st.empty()) st.pop();
                    
                }
                else{
                    st.push(temp);
                }
                
            }
        }
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        if(ans.length()==0) return "/";

        return ans;
    }
};
// @lc code=end

