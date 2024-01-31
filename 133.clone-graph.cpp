/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* curr,Node* node, vector<Node*>&visited){
        visited[node->val]=node;
        for(auto ele : curr->neighbors){
            if(visited[ele->val]==NULL){
                Node *newnode=new Node(ele->val);
                (node->neighbors).push_back(newnode);
                dfs(ele,newnode,visited);
            }
            else{
                (node->neighbors).push_back(visited[ele->val]);
            }
        }
    }

    Node* cloneGraph(Node* root) {
        if(root==NULL){
            return NULL;
        }
        //this will store the copy nodes as soon as they are created
        vector<Node*>visited(1000,NULL);
        Node *copy=new Node(root->val);
        visited[root->val]=copy;

        for(auto curr : root->neighbors){
            if(visited[curr->val]==NULL){
                Node *newnode=new Node(curr->val);
                (copy->neighbors).push_back(newnode);
                //here curr is the neighbor of actual root
                //newnode is copy of the neighbor
                dfs(curr,newnode,visited);
            }
            else{
                //visited[curr->val] inserts the copy node of curr
                //if we push curr the original node will get inserted
                (copy->neighbors).push_back(visited[curr->val]);
            } 
        }
        return copy;
    }
};
// @lc code=end

