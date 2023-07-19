/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
    ListNode* partition(ListNode* head, int x) {
        ListNode *left=new ListNode();
        ListNode *l1=left;
        ListNode *right=new ListNode();
        ListNode *l2=right;
        ListNode *curr=head;
        while(curr){
            if(curr->val <x){
                l1->next=new ListNode(curr->val);
                l1=l1->next;
            }else{
                l2->next=new ListNode(curr->val);
                l2=l2->next;
            }
            curr=curr->next;
        }
        l1->next=right->next;
        right->next=NULL;
        return left->next;
    }
};
// @lc code=end

