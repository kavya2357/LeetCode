/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>ans(numRows,"");
        int j=0,flag=1;

        if(numRows==1) return s;

        else{
            for(int i=0;i<s.length();i++){
                if(flag==1){
                    ans[j]+=s[i];
                    j++;
                    if(j==numRows){
                        j-=2;
                        flag=2;
                    }
                }
                else{
                    ans[j]+=s[i];
                    j--;
                    if(j==-1){
                        j+=2;
                        flag=1;
                    }
                }
            }
        }
        string res="";
        for(auto it:ans){
            res+=it;
        }
        return res;
    }
};
// @lc code=end

