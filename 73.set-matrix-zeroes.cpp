/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int flagRow=1,flagCol=1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                flagCol=0;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[0][j]==0){
                flagRow=0;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int j=1;j<m;j++){
            if(matrix[0][j]==0){
                for(int i=1;i<n;i++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<m;j++){
                    matrix[i][j]=0;
                }
            }
        }
        if(flagRow==0){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        if(flagCol==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};
// @lc code=end

