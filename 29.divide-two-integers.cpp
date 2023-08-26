/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a=(long long)dividend;
        long long b=(long long)divisor;
        bool flag;
        if(dividend == 0) {
            return 0;
        }
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
        if((a>0 && b>0)||(a<0 && b<0)){
            flag=1;
        }else{
            flag=0;
        }
        a=abs(a);b=abs(b);
        long long temp=0;
        long long ans=0;
        for(int i=31;i>=0;i--){
            if(temp+(b<<i)<=a){
                temp+=(b<<i);
                ans+=(1<<i);
            }
        }
        if(!flag){
            ans=-ans;
        }
        return ans;
    }
};
// @lc code=end

