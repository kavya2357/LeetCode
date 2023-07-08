/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0,max_water=INT_MIN;
        int l=0,r=height.size()-1;
        while(l<=r){
            if(height[l]<height[r]){
                water=height[l]*(r-l);
                l++;
            }
            else{
                water=height[r]*(r-l);
                r--;
            }
            max_water=max(max_water,water);
        }
        return max_water;
    }
};
// @lc code=end

