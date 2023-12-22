/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int jumps = 0;
        int maxReach = nums[0];
        int steps = nums[0];

        for (int i = 1; i < n - 1; ++i) {
            maxReach = max(maxReach, i + nums[i]);
            steps--;

            if (steps == 0) {
                jumps++;
                steps = maxReach - i;

                if (maxReach >= n - 1) break;
            }
        }
        return jumps + 1;
    }
};
// @lc code=end

