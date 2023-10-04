/*
 * @lc app=leetcode id=1499 lang=cpp
 *
 * [1499] Max Value of Equation
 */

// @lc code=start
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,int>>pq;
        int res=INT_MIN;
        for(int i=0;i<n;i++){
            while(!pq.empty() && (points[i][0]-pq.top().second) > k){
                pq.pop();
            }
            if(!pq.empty()){
                res=max(res,points[i][0]+points[i][1]+pq.top().first);
            }
            pq.push({points[i][1]-points[i][0],points[i][0]});
        }
        return res;
    }
};
// @lc code=end

