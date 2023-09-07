/*
 * @lc app=leetcode id=289 lang=cpp
 *
 * [289] Game of Life
 */

// @lc code=start
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        //copying the board to 2-D vector copy
        vector<vector<int>> copy(board);

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                //for counting live neighbors of the element
                int liveNeighbors = 0; 
                
                //iterating through all the neighbors of the element (inside the board and outside the board)
                for(int m=i-1; m<i+2; m++)
                {
                    for(int n=j-1; n<j+2; n++)
                    {
                        //we will skip the iteration when element itself is encountered
                        if(m==i && n==j)
                            continue;

                        //checking the bounds, if indices are in range, we will check for liveNeighbors
                        if(m>=0 && m<rows && n>=0 && n<cols && copy[m][n] == 1)
                            liveNeighbors++;
                    }
                }
                
                //for live cells, if liveNeighbors are less than 2 or more than 3, cells will die and dead cells are already dead, so we need not check cell to be live or dead
                if(liveNeighbors < 2 || liveNeighbors > 3)
                    board[i][j] = 0;

                //for dead cells, if liveNeighbors are exactly 3, it will live and live cell will also live for exactly 3 liveNeighbors
                else if(liveNeighbors == 3)
                    board[i][j] = 1;

                //For live cells, if liveNeighbors are exactly 2, it will live but we need not update it as it is already live

            }
        }
    }
};
// @lc code=end

