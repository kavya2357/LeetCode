/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string res="";
        int i=0,j=0;
        res+=word1[i];
        i++;
        while(i<n1 && j<n2){
            if(j<i){
                res+=word2[j];
                j++;
            }else{
                res+=word1[i];
                i++;
            }
        }
        while(i<n1){
            res+=word1[i];
            i++;
        }
        while(j<n2){
            res+=word2[j];
            j++;
        }
        return res;
    }
};
// @lc code=end

