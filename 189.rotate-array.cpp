/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    vector<int> reverse(vector<int>arr,int start,int end){
        int temp;
        while(start<=end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        return arr;
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        nums=reverse(nums,0,n-k-1);
        nums=reverse(nums,n-k,n-1);
        nums=reverse(nums,0,n-1);
    }
    
};
// @lc code=end

