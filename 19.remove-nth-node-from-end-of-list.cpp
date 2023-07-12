/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        int nodes=0;
        ListNode *temp=head;
        while(temp){
            nodes++;
            temp=temp->next;
        }

        if(nodes == n){ //if there are 5 nodes in ll and 5th node from last 
                        //should be removed then it is the head node.
            return head->next;
        }
        temp=head;
        ListNode *prev=NULL;
        int count=nodes-n;
        while(count > 0){
            prev=temp;
            temp=temp->next;
            count--;
        }
        prev->next=temp->next;

        return head;
    }
};
// @lc code=end

