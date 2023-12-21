/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* leftprev=dummy;
        ListNode* curr=head;
        for(int i=0;i<l-1;i++){
            leftprev=leftprev->next;
            curr=curr->next;
        }
        ListNode* prev=NULL;
        ListNode* sublisthead=curr;
        for(int i=0;i<=r-l;i++){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        leftprev->next=prev;
        sublisthead->next=curr;

        return dummy->next;
    }
};
// @lc code=end

