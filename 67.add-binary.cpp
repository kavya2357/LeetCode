/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int carry =0;
        string ans;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0||j>=0||carry){
            int sum=0;
            if(i>=0){
                sum+=a[i]-'0';
            }
            if(j>=0){
                sum+=b[j]-'0';
            }
            sum+=carry;
            carry=sum/2;
            ans+=to_string(sum%2);
            
            i--;
            j--;
        }
        
        reverse(begin(ans),end(ans));
        return ans;
    }
};
// @lc code=end

