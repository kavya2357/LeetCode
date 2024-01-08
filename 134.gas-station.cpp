/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas=0;
        int curr_gas=0;
        int start=0;

        for(int i=0;i<gas.size();i++){

            tot_gas+=gas[i]-cost[i];
            curr_gas+=gas[i]-cost[i];
            
            if(curr_gas<0){
                curr_gas=0;
                start=i+1;
            }
        }
        if(tot_gas<0){
            return -1;
        }
        return start;
    }
};
// @lc code=end

