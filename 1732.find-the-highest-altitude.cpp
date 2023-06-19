/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>alt;
        alt.push_back(0);
        for(int i=0;i<gain.size();i++){
            alt.push_back(alt[i]+gain[i]);
        }
        return *max_element(alt.begin(),alt.end());
    }
};
// @lc code=end

