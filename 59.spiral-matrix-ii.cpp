/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int rowBegin=0,rowEnd=n-1;
        int colBegin=0,colEnd=n-1;
        int c=0;
        while(rowBegin<=rowEnd && colEnd>=colBegin){
            for(int j=colBegin;j<=colEnd;j++){
                ans[rowBegin][j]=++c;
            }
            rowBegin++;
            for(int i=rowBegin;i<=rowEnd;i++){
                ans[i][colEnd]=++c;
            }
            colEnd--;
            if(rowBegin<=rowEnd){
                for(int j=colEnd;j>=colBegin;j--){
                    ans[rowEnd][j]=++c;
                }
                rowEnd--;
            }
            if(colBegin<=colEnd){
                for(int i=rowEnd;i>=rowBegin;i--){
                    ans[i][colBegin]=++c;
                }
                colBegin++;
            }
        }
        return ans;
    }
};
// @lc code=end

