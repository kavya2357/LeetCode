/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>leftsmall(n);
        vector<int>rightsmall(n);
        stack<pair<int,int>>st; //{index,element}
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().second>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                leftsmall[i]=0;
            }else{
                leftsmall[i]=st.top().first+1;
            }
            st.push({i,heights[i]});
        }
        while(!st.empty()) st.pop(); //clearing the stack to use for right small
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().second>=heights[i]){
                st.pop();
            }
            if(st.empty()) rightsmall[i]=n-1;
            else rightsmall[i]=st.top().first-1;
            st.push({i,heights[i]});
        }
        int res=INT_MIN;
        int area=0;
        for(int i=0;i<n;i++){
            area=heights[i]*(rightsmall[i]-leftsmall[i]+1);
            res=max(res,area);
        }
        return res;
    }
};
// @lc code=end

