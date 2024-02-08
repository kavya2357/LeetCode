/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution {
public:
    bool check(int idx,int color,vector<int>&vis,vector<vector<int>>& adj){
        vis[idx]=color;
        for(auto node:adj[idx]){
            if(vis[node]==-1){
                if(!check(node,!color,vis,adj)) return false;
            }
            else if(vis[node]==color){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(!check(i,0,vis,adj)){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

