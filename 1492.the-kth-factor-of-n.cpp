/*
 * @lc app=leetcode id=1492 lang=cpp
 *
 * [1492] The kth Factor of n
 */

// @lc code=start
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                v.push_back(i);
            }
        }
        if(v.size()<k){
            return -1;
        }
        return v[k-1];
    }
};
// @lc code=end

