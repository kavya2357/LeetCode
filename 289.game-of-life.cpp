/*
 * @lc app=leetcode id=289 lang=cpp
 *
 * [289] Game of Life
 */

// @lc code=start
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        int dx[]={1,1,0,-1,-1,-1,0,1};
        int dy[]={0,1,1,1,0,-1,-1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int lc=0;
                for(int k=0;k<8;k++){
                    if((i+dx[k]>=0 && i+dx[k]<n && j+dy[k]>=0 && j+dy[k]<m) && abs(board[i+dx[k]][j+dy[k]])==1){
                        lc++;
                    }
                }
                if(board[i][j]==0 && lc==3){
                        board[i][j]=2;
                }
                if(board[i][j]==1 && (lc<2 || lc>3)){
                        board[i][j]=-1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j]=board[i][j]>0 ? 1 : 0;
            }
        }
    }
};
// @lc code=end

