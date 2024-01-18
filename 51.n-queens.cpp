/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
public:
    bool issafe(vector<string>&board,int r,int c,int n){
        for(int row=0;row<r;row++){
            if(board[row][c]=='Q') return false;
        }

        int row=r;
        int col=c;
        //only check in upper diagonals as elements are not yet placed in below diagonals
        while(row>=0 && col>=0){//left diagonal
            if(board[row][col]=='Q') return false;
            col--;
            row--;
        }
        row=r;
        col=c;
        while(row>=0 && col<n){
            if(board[row][col]=='Q') return false;
            col++;
            row--;
        }
        return true;

    }
    void helper(int row,vector<string>&board,vector<vector<string>>&res,int n){
        if(row==n){
            res.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(issafe(board,row,col,n)){
                board[row][col]='Q';
                helper(row+1,board,res,n);
                board[row][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>res;
        vector<string> board(n, string(n, '.'));
        helper(0,board,res,n);
        return res;
    }
};
// @lc code=end

