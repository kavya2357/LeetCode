/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int len=0;
        ListNode *count=head;
        while(count){
            len++;
            count=count->next;
        }
        k=k%len;
        while(k!=0){
            k--;
            ListNode *temp=head,*prev=NULL;
            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
            }
            temp->next=head;
            head=temp;
            prev->next=NULL;
        }
        return head;
    }
};
// @lc code=end

