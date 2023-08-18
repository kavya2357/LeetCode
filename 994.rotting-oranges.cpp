/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>v(n , vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //stores indexes and time at which they are rotten
                
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(grid[i][j]==2){
                            q.push({{i,j},0});
                            v[i][j]=2;
                        }else{
                            v[i][j]=0;
                        }
                    }
                }
            }
        }
        int tm=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            q.pop();
            for(int i=0;i<4;i++){
                int cr=r+drow[i];
                int cc=c+dcol[i];
                if(cr>=0 && cr<n && cc>=0 && cc<m && v[cr][cc]!=2 && grid[cr][cc]==1){
                    q.push({{cr,cc},t+1});
                    v[cr][cc]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
    }
};
// @lc code=end

