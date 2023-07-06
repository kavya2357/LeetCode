/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        int rowBegin=0,rowEnd=n-1;
        int colBegin=0,colEnd=m-1;
        while(rowBegin<=rowEnd && colBegin<=colEnd){
            for(int j=colBegin;j<=colEnd;j++){
                v.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;
            for(int i=rowBegin;i<=rowEnd;i++){
                v.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            if(rowBegin<=rowEnd){
                for(int j=colEnd;j>=colBegin;j--){
                    v.push_back(matrix[rowEnd][j]);
                }
                rowEnd--;
            }
            
            if(colBegin<=colEnd){
                for(int i=rowEnd;i>=rowBegin;i--){
                    v.push_back(matrix[i][colBegin]);
                }
                colBegin++;
            }
            
        }
        return v;
    }
};
// @lc code=end

