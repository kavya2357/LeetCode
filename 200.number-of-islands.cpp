/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    int row[8]={-1,0,1,0};
    int col[8]={0,1,0,-1};
    void helper(vector<vector<char>>& grid,int i,int j,vector<vector<int>>&vis){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=1;

        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int r=0;r<4;r++){
                
                    int nrow=i+row[r];
                    int ncol=j+col[r];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==-1 && grid[nrow][ncol]=='1'){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==-1 && grid[i][j]=='1'){
                    cnt++;
                    helper(grid,i,j,vis);
                }
            }
        }
        return cnt;
    }
};
// @lc code=end

