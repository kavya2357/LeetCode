/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.' && row.find(board[i][j])!=row.end()){
                    return false;
                }
                row.insert(board[i][j]);
            }
            row.clear();
        }
        unordered_set<char>col;
        for(int j=0;j<9;j++){
            for(int i=0;i<9;i++){
                if(board[i][j]!='.' && col.find(board[i][j])!=col.end()){
                    return false;
                }
                col.insert(board[i][j]);
            }
            col.clear();
        }
        vector<unordered_set<char>> subbox(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int loc=(i/3)*3+j/3;
                if(board[i][j]!='.' && subbox[loc].find(board[i][j])!=subbox[loc].end()){
                    return false;
                }
                subbox[loc].insert(board[i][j]);
            }
        }
        return true;
    }
};
// @lc code=end

