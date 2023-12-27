/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
class RandomizedSet {
public:
    unordered_map<int,int>mp;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)==mp.end()){
            v.push_back(val);
            mp[val]=v.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end()){
            int ind=mp[val];
            int last=v.back();
            v[ind]=last;
            v.pop_back();
            mp[last]=mp[val];
            mp.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

