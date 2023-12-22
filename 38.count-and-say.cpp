/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string str=countAndSay(n-1);

        string res="";
        int s=str.size();
        int i=0;
        while(i<s){
            char c=str[i];
            int cnt=0;
            while(i<s && str[i]==c){
                cnt++;
                i++;
            }
            res+='0'+cnt;
            res+=c;
        }
        return res;
    }
};
// @lc code=end

