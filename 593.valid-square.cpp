/*
 * @lc app=leetcode id=593 lang=cpp
 *
 * [593] Valid Square
 */

// @lc code=start
class Solution {
public:
    int distance(vector<int>&a, vector<int>&b){
        int dist=(pow((a[0]-b[0]),2)+(pow((a[1]-b[1]),2)));
        return dist;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int s1=distance(p1,p2);
        int s2=distance(p1,p4);
        int s3=distance(p2,p3);
        int s4=distance(p3,p4);
        int d1=distance(p1,p3);
        int d2=distance(p2,p4);
        set<int>s;
        s.insert(s1);
        s.insert(s2);
        s.insert(s3);
        s.insert(s4);s.insert(d1);s.insert(d2);
        return( !s.count(0) && s.size()==2);
    }
};
// @lc code=end

