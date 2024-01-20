/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */

// @lc code=start
class Solution {
public:
    int calc(vector<int>&weights,int mid){
        int shipdays=1;
        long long sum=0;

        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }else{
                shipdays++;
                sum=weights[i];
            }
        }
        return shipdays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);

        while(low<=high){
            int mid=(low+high)/2;
            int shipdays=calc(weights,mid);
            if(shipdays>days){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};
// @lc code=end

