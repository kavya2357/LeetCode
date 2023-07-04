/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],profit=0,max_profit=0;
        for(int i=1;i<prices.size();i++){
            buy=min(buy,prices[i]);
            profit=prices[i]-buy;
            if(profit>0){
                max_profit=max(profit,max_profit);
            }
        }
        return max_profit
    }
};
// @lc code=end

