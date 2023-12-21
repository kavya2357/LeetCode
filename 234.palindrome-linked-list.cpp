/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        int count=0;
        ListNode *temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        int mid=(count/2);
        int middle=mid;
        ListNode* temp_mid=head;
        while(mid>0){
            temp_mid=temp_mid->next;
            mid--;
        }

        ListNode* temp1=head;
        while(middle>0){
            s.push(temp1->val);
            middle--;
            temp1=temp1->next;
        }
        if (count % 2 != 0) {
            temp_mid = temp_mid->next;
        }
        while(temp_mid){
            if(temp_mid->val==s.top()){
                s.pop();
            }else{
                return false;
            }
            temp_mid=temp_mid->next;
        }
        if(!s.empty()) return false;
        return true;
    }
};
// @lc code=end

