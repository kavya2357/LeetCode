/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>mp;
        int n=nums1.size(),m=nums2.size();
        for(int i=m-1;i>=0;i--){
            while(!s.empty() && nums2[i]>=s.top()){
                s.pop();
            }
            if(s.empty()){
                mp[nums2[i]]=-1;
            }else{
                mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
    }
};
// @lc code=end

