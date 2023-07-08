/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {
        string res="";
        vector<pair<int,string>>mp{{1000, "M"}, {900, "CM"}, {500, "D"},                                   {400, "CD"},{100, "C"}, {90, "XC"}, 
                                    {50, "L"}, {40, "XL"}, {10, "X"}, 
                                    {9, "IX"}, {5, "V"}, {4, "IV"}, 
                                    {1, "I"}};
        for(int i=0;i<mp.size();i++){
            while(num>=mp[i].first){
                res+=mp[i].second;
                num-=mp[i].first;
            }
        }
        return res;
    }
};
// @lc code=end

