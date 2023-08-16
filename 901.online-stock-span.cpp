/*
 * @lc app=leetcode id=901 lang=cpp
 *
 * [901] Online Stock Span
 */

// @lc code=start
class StockSpanner {
public:
    stack<pair<int,int>>s;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.empty()){
            s.push({price,i++});
            return 1;
        }
        else{
            while(!s.empty() && price>=s.top().first){
                s.pop();
            }
            int ans;
            if(s.empty()) ans=i+1;
            else{
                ans=i-s.top().second;
            }
            s.push({price,i++});
            return ans;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
// @lc code=end

