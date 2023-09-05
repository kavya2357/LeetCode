/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        } 
        int ans=sum;
        for(int i=k-1;i>=0;i--){
            ans-=cardPoints[i];
            ans+=cardPoints[cardPoints.size()-k+i];
            sum=max(sum,ans);
        }
        return sum;
    }
};
// @lc code=end

