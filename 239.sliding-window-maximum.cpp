/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //the deque should be in decresing order
        //first element will be the greatest
        deque<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
            while(!q.empty() && nums[q.back()]<nums[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(nums[q.front()]);
        for(int i=k;i<nums.size();i++){
            if(q.front()==i-k){
                q.pop_front();
            } 
            while(!q.empty() && nums[q.back()]<nums[i]){
                q.pop_back();
            }
            q.push_back(i);
            //for each i we pop out the index that is out of window range
            //the front will be the largest element of the window
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};
// @lc code=end

