/*
 * @lc app=leetcode id=227 lang=cpp
 *
 * [227] Basic Calculator II
 */

// @lc code=start
class Solution {
public:
    int calculate(string s) {
        bool isOperator(char op){
        if(op=='+'||op=='-'||op=='*'||op=='/') return true;
        return false;
    }

    int calculate(string s) {
        int len=s.length();
        int num=0;
        char operation='+';
        if(len==0) return 0;
        stack<int>st;
        for(int i=0;i<len;i++){
            char curr=s[i];
            if(isdigit(curr)){
                num=(num*10)+(curr-'0');
            }
            if(isOperator(curr)||i==len-1){
                if(operation=='+'){
                    st.push(num);
                }
                else if(operation=='-'){
                    st.push(-num);
                }
                else if(operation == '*'){
                    int top=st.top();
                    st.pop();
                    st.push(top*num);
                }
                else if(operation == '/'){
                    int top=st.top();
                    st.pop();
                    st.push(top/num);
                }
                num=0;
                operation=curr;
            }
        }
        int res=0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
// @lc code=end

