/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        int sum=0;
        while(sum!=1){
            sum=0;
            while(n>0){
                int rem=n%10;
                sum+=pow(rem,2);
                n=n/10;
            }
            if(s.count(sum)>0){
                return false;
            }
            s.insert(sum);
            n=sum;
        }
        return true;
    }
};
// @lc code=end

