/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        if(n<=1){
            return 0;
        }
        int cnt=0;
        vector<bool>v(n+1,true);
        v[0]=v[1]=false;
        
        for(int i=2;i*i<=n;i++){
            if(v[i]){
                for(int j=2*i;j<=n;j+=i){
                    v[j]=false;
                }
            }  
        }
        for(int i=0;i<n;i++){
            if(v[i]==true) cnt++;
        }
        return cnt;
    }
};
// @lc code=end

