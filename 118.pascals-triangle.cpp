/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        vector<int>prev;

        for(int i=0;i<numRows;i++){
            vector<int>curr(i+1,1);
            for(int j=1;j<i;j++){
                curr[j]=prev[j-1]+prev[j];
            }
            res.push_back(curr);
            prev=curr;
        }
        return res;
    }
};
// @lc code=end

